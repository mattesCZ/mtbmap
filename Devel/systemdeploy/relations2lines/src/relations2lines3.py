#!/usr/bin/python
# -*- coding: utf-8 -*-

__author__="xtesar7"

from psycopg2 import *
import sys
import relation
import route
import time
from copy import deepcopy
from sys import setrecursionlimit

def main():

    print time.strftime("%H:%M:%S", time.localtime()), " - script started"
    print "  Searching RelationIDs and Lines in planet_osm_line..."
    # Create connection to DB server.
    if (len(sys.argv) == 3):
        connection = connect("dbname='" + sys.argv[1] + "' user='xtesar7' password='' port='" + sys.argv[2] + "'");
    elif (len(sys.argv) <= 1):
        print 'No arguments given, using default db=gisczech, port=5432'
        connection = connect("dbname='gisczech' user='xtesar7' password='' port=5432");
    else:
        print 'relations2lines takes exactly two arguments: database and port'
    relationCursor = connection.cursor()
    auxiliaryCursor = connection.cursor()
    wayCursor = connection.cursor()

    # Find relation IDs to be parsed, ie. those with osmc:symbol or some mtb values
    # Treat lines with useful attributes as relations (osm_id >= 0)
    relationIDs = []
    relations = []
    relationCursor.execute('''
        SELECT osm_id, CASE WHEN ("highway"='track' AND "tracktype"='grade1' AND "mtb:scale" IS NULL) THEN 'grade1'
                            WHEN ("highway"='track' AND "tracktype"='grade2' AND "mtb:scale" IS NULL) THEN 'grade2'
                            ELSE "mtb:scale"
                       END AS "mtb:scale"
            , "mtb:scale:uphill", network, "osmc:symbol"
            FROM planet_osm_line
            WHERE (("osmc:symbol" IS NOT NULL OR kct_red IS NOT NULL
                OR kct_blue IS NOT NULL OR kct_green IS NOT NULL
                OR kct_yellow IS NOT NULL OR ("mtb:scale" IS NOT NULL AND (("access"<>'private' AND "access"<>'no') OR "access" IS NULL OR ("access" IN ('private', 'no') AND bicycle='yes')))
                OR "mtb:scale:uphill" IS NOT NULL OR ("highway"='track' AND "tracktype"='grade1') OR ("highway"='track' AND "tracktype"='grade2')))
        ''')
    while True:
        # Fetch some of the result.
        rows = relationCursor.fetchmany(100)

        # Empty result means end of query.
        if not rows:
            break;

        #relations have negative osm_id in planet_osm_line table
        #lines have positive osm_id in planet_osm_line table
        for row in rows:
            if (row[0] < 0):
                #osm_id is not a primary key
                if not (row[0] in relationIDs):
                    relationIDs.append(-row[0])
            else:
                # 0: osm_id; 1: mtb:scale; 2: mtb:scale:uphill; 3: network; 4: "osmc:symbol"
                lineInfo = "LINE;" + str(row[0]) + ";" + str(row[1]) + ";" + str(row[2]) + ";" + str(row[3]) + ";" + str(row[4])
                relations.append(relation.Relation(lineInfo))

    print time.strftime("%H:%M:%S", time.localtime()), " - RelationIDs and Lines found."
    print "  Getting Relation details from planet_osm_rels..."
    # Select important columns just for our IDs
    for id in relationIDs:
        relationCursor.execute('''
            SELECT id, members, tags
                FROM planet_osm_rels
                WHERE id=%s
        ''' % id)
        row = relationCursor.fetchone()
        # Make Relation object with parsed data
        relations.append(relation.Relation(row))

    print time.strftime("%H:%M:%S", time.localtime()), " - relations details found."
    print "  Making single routes from relations with all osmc:symbols..."

    # Find final routes and append all corresponding osmcSymbols
    routes = routesFromRels(relations)

    listOfRoutes = routes.values()
    listOfRoutes.sort()
    print time.strftime("%H:%M:%S", time.localtime()), " - routes now have osmc:symbols."
    print "  Finding firstNode and lastNode for each route in planet_osm_ways..."

    # Clean previous routes.
    auxiliaryCursor.execute("DROP TABLE IF EXISTS planet_osm_routes3")
    auxiliaryCursor.execute("DELETE FROM geometry_columns WHERE f_table_name = 'planet_osm_routes3'")
    auxiliaryCursor.execute("CREATE TABLE planet_osm_routes3 AS SELECT osm_id, way, highway, tracktype FROM planet_osm_line WHERE osm_id = 0")
    auxiliaryCursor.execute("DELETE FROM geometry_columns WHERE f_table_name = 'planet_osm_routes3'")
    auxiliaryCursor.execute("INSERT INTO geometry_columns VALUES ('', 'public', 'planet_osm_routes3', 'way', 2, 900913, 'LINESTRING')")

    # Add important information to each route
    for r in listOfRoutes:
        auxiliaryCursor.execute('''
            SELECT way, highway, tracktype FROM planet_osm_line
              WHERE osm_id=%s AND (("access"<>'private' AND "access"<>'no') OR "access" IS NULL OR ("access" IN ('private', 'no') AND bicycle='yes'))
        ''' % r.id)
        row = auxiliaryCursor.fetchone()
        # Some route IDs from relations may not be present in line table, ie. out of bounding box, those are ignored
        if row is not None:
            routes[r.id].geometry = row[0]
            routes[r.id].highway = row[1]
            routes[r.id].tracktype = row[2]
            wayCursor.execute('''
                SELECT nodes[1], nodes[array_upper(nodes, 1)]
                    FROM planet_osm_ways
                    WHERE id=%s
            ''' % r.id)
            firstEndNodes = wayCursor.fetchone()
            routes[r.id].firstNode = firstEndNodes[0]
            routes[r.id].lastNode = firstEndNodes[1]
#            print r.id, ": ", routes[r.id].firstNode, ", ", routes[r.id].lastNode
        else:
            routes.pop(r.id)
    print time.strftime("%H:%M:%S", time.localtime()), " - firstNodes and lastNodes are found."
    print "  Finding route neighbours based on first and last nodes..."

    # Find end nodes and their routes
    nodes = findNodes(routes)

    # Find previous and next route neighbours
    for r in routes:
        nextRouteIDs = deepcopy(nodes[routes[r].lastNode])
        nextRouteIDs.remove(routes[r].id)
        previousRouteIDs = deepcopy(nodes[routes[r].firstNode])
        previousRouteIDs.remove(routes[r].id)
        for rid in nextRouteIDs:
            routes[routes[r].id].nextRoutes.append(rid)
        for rid in previousRouteIDs:
            routes[routes[r].id].previousRoutes.append(rid)

    #remove unconnected tracks with highway=track and tracktype=grade1 and mtb:scale is null
    print time.strftime("%H:%M:%S", time.localtime()), "  Removing disconnected tracks."
#    routes = removeUnconnected(routes, nodes)
    print "  Tracks removed."

    print time.strftime("%H:%M:%S", time.localtime()), "  Finding dangerous nodes (column warning)."
    # Find nodeIDs, where track's attribute mtb:scale changes rapidly (difference >= 2),
    # create new column warning in planet_osm_lines with the difference
    dangerNodes = findDangerousNodes(nodes, routes)
    pointCursor = connection.cursor()
    insertDangerNodes(dangerNodes, pointCursor)
    pointCursor.close()

    print time.strftime("%H:%M:%S", time.localtime()), " - neighbours are found."
    print "  Determining offset for each route..."

    # Find offset polarity
#    listOfRoutes = routes.values()
    listOfRoutes = sorted(routes.values(), key=lambda route: route.osmcSigns[0], reverse=True)
    setrecursionlimit(len(listOfRoutes))
    for r in listOfRoutes:
#        print "For cycle: ", r.id, r.osmcSigns[0]
        setOffset(routes, r.id, "next")
        setOffset(routes, r.id, "previous")
    print time.strftime("%H:%M:%S", time.localtime()), " - offset is found."
    print "  Inserting of routes into new empty table planet_osm_routes3..."

    # Determine maximum number of different osmcSymbols at one route
    maxSigns = 0
    for r in routes.values():
        if (maxSigns < r.numOfSigns):
            maxSigns = r.numOfSigns
    if maxSigns < 4:
        maxSigns = 4

    # Prepare database table for data insertion
    auxiliaryCursor.execute('''
        ALTER TABLE planet_osm_routes3
          ADD "mtb:scale" text;
    ''')
    auxiliaryCursor.execute('''
        ALTER TABLE planet_osm_routes3
          ADD "mtb:scale:uphill" text;
    ''')
    auxiliaryCursor.execute('''
        ALTER TABLE planet_osm_routes3
          ADD offsetSide integer;
    ''')
    # Add columns for maximum number of osmcSymbols
    for column in range(maxSigns):
        auxiliaryCursor.execute('''
            ALTER TABLE planet_osm_routes3
              ADD osmcSymbol%s text;
        ''' % (str(column)))
        auxiliaryCursor.execute('''
            ALTER TABLE planet_osm_routes3
              ADD network%s text;
        ''' % (str(column)))

    # Insert route values into the table
    for r in listOfRoutes:
        if r.geometry is not None:
            row = r.getValuesRow()
            auxiliaryCursor.execute('''
                INSERT INTO planet_osm_routes3
                  VALUES (%s)
            ''' % (row))
    print " Finished inserting routes into new table."

    print "Relations:   ", len(relations)
    print "max Signs:   ", maxSigns
    print "Routes:      ", len(routes)
    print "Nodes:       ", len(nodes)
    print "Danger nodes:", len(dangerNodes)
#    print routes[39952857].nextRoutes, routes[44013159].previousRoutes
#    print nodes[559611826]

    # commit the result into the database
    auxiliaryCursor.close()
    connection.commit()
    
    print time.strftime("%H:%M:%S", time.localtime()), " - Relations2lines finished successfully."
    # end of main function
################################################################################

def routesFromRels(relations):
    routes = {}
    for rel in relations:
        if rel.osmcSymbol:
            for lineId in rel.lines:
                if routes.has_key(lineId):
                    routes[lineId].addSign(rel)
                else:
                    newRoute = route.Route(lineId, rel)
                    routes[lineId] = newRoute
    return routes

def findNodes(routes):
    nodes = {}
    for r in routes.values():
        if r.firstNode in nodes:
            nodes[r.firstNode].append(r.id)
        else:
            nodes[r.firstNode] = [r.id]
        if r.lastNode in nodes:
            nodes[r.lastNode].append(r.id)
        else:
            nodes[r.lastNode] = [r.id]
    return nodes

def setOffset(routes, currentId, direction):
    if (routes[currentId].offset == None):
        routes[currentId].offset = -1
#    print "Correct order: ", currentId
    if (direction == "next"):
        for nextID in routes[currentId].nextRoutes:
            if not (routes.has_key(nextID)):
                return
            if (routes[nextID].offset != None):
                return
            else:
                if (routes[currentId].lastNode == routes[nextID].firstNode):
                    routes[nextID].offset = routes[currentId].offset
                    setOffset(routes, nextID, "next")
                elif (routes[currentId].lastNode == routes[nextID].lastNode):
                    routes[nextID].offset = -routes[currentId].offset
                    setOffset(routes, nextID, "previous")
    else:
        for nextID in routes[currentId].previousRoutes:
            if not (routes.has_key(nextID)):
                return
            if (routes[nextID].offset != None):
                return
            else:
                if (routes[currentId].firstNode == routes[nextID].firstNode):
                    routes[nextID].offset = -routes[currentId].offset
                    setOffset(routes, nextID, "next")
                elif (routes[currentId].firstNode == routes[nextID].lastNode):
                    routes[nextID].offset = routes[currentId].offset
                    setOffset(routes, nextID, "previous")

def findDangerousNodes(nodes, routes):
    dangerNodes = {}
    for node in nodes:
        mtbMin = 6
        mtbMax = 0
        for line in nodes[node]:
            if routes[line].mtbScale:
                try:
                    mtbScale = int(routes[line].mtbScale.replace('+', '').replace('-',''))
                    if mtbScale > mtbMax:
                        mtbMax = mtbScale
                    if mtbScale < mtbMin:
                        mtbMin = mtbScale
                except ValueError:
                    continue
        if (mtbMax - mtbMin) >= 2:
            dangerNodes[node] = mtbMax - mtbMin
    return dangerNodes

def insertDangerNodes(nodes, cursor):
    cursor.execute('''
        SELECT attname FROM pg_attribute WHERE attrelid=(SELECT oid FROM pg_class WHERE relname='planet_osm_point') AND attname='warning'
        ''')
    if cursor.fetchone():
        cursor.execute('''
            ALTER TABLE planet_osm_point
                DROP COLUMN warning
            ''')
    cursor.execute('''
            ALTER TABLE planet_osm_point
                ADD "warning" integer
        ''')
    for dnID in nodes:
        cursor.execute("SELECT osm_id, way FROM planet_osm_point WHERE osm_id=%s" % dnID)
        if cursor.fetchone():
            cursor.execute('''
                UPDATE planet_osm_point SET "warning"=%s WHERE osm_id=%s
                ''' % (str(nodes[dnID]), dnID))
        else:
            cursor.execute("select lat, lon from planet_osm_nodes where id=%s" % dnID)
            nodeLatLon = cursor.fetchone()
            geometryCommand = "ST_SetSRID(ST_Point( %s, %s),900913) " % (str(nodeLatLon[1]/100.0), str(nodeLatLon[0]/100.0))
            pointValues = str(dnID) + ", " + geometryCommand + ", " + str(nodes[dnID])
            cursor.execute("INSERT INTO planet_osm_point (osm_id, way, warning) VALUES (%s)" % pointValues)

def removeUnconnected(routes, nodes):
    gradeOneIDs = []
    for r in routes:
        if routes[r].mtbScale == 'grade1':
            gradeOneIDs.append(routes[r].id)
    parsed = []
    connectedGradeOne = []
    disconnectedGradeOne = []
    for gradeOneID in gradeOneIDs:
        if gradeOneID in parsed:
            continue
        component = []
        component.append(gradeOneID)
        connected = False
        parsed.append(gradeOneID)
        neighbours = routes[gradeOneID].previousRoutes + routes[gradeOneID].nextRoutes
        while neighbours:
            n = neighbours.pop()
            if n in parsed:
                continue
            if not (routes[n].mtbScale == None or routes[n].mtbScale == 'grade1'):
                connected = True
                parsed.append(n)
                continue
            if routes[n].mtbScale == 'grade1':
                component.append(n)
                newToSearch = routes[n].previousRoutes + routes[n].nextRoutes
                for new in newToSearch:
                    if not new in parsed:
                        neighbours.append(new)
            parsed.append(n)
        if connected:
            connectedGradeOne += component
        else:
            disconnectedGradeOne += component
    print time.strftime("%H:%M:%S", time.localtime()), "  Components found, connection determined, now cleaning after removal..."
    iterations = 0
    for id in disconnectedGradeOne:
        if len(routes[id].osmcSigns) <= 1:
            r = routes.pop(id)
            nodes[r.firstNode].remove(r.id)
            if not len(nodes[r.firstNode]):
                nodes.pop(r.firstNode)
            nodes[r.lastNode].remove(r.id)
            if not len(nodes[r.lastNode]):
                nodes.pop(r.lastNode)
        else:
            routes[id].mtbScale = None

    # set correct mtb:scale value
    for id in connectedGradeOne:
        routes[id].mtbScale = '0'
    return routes
            

if __name__ == "__main__":
    main()
