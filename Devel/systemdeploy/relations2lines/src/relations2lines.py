#!/usr/bin/python
# -*- coding: utf-8 -*-

__author__="xtesar7"

from psycopg2 import *
import sys
import relation
import route

def main():

    # Create connection to DB server.
    if (len(sys.argv) > 1):
        connection = connect("dbname='" + sys.argv[1] + "' user='xtesar7' password=''");
    else:
        connection = connect("dbname='gisczech' user='xtesar7' password=''");
    relationCursor = connection.cursor()
    auxiliaryCursor = connection.cursor()

    # Find relation IDs to be parsed, ie. those with osmc:symbol or some mtb values
    relationIDs = []
    relationCursor.execute('''
        SELECT osm_id
            FROM planet_osm_line
            WHERE (osm_id < 0 AND ("osmc:symbol" IS NOT NULL OR kct_red IS NOT NULL
                OR kct_blue IS NOT NULL OR kct_green IS NOT NULL
                OR kct_yellow IS NOT NULL OR "mtb:scale" IS NOT NULL
                OR "mtb:scale:uphill" IS NOT NULL))
            GROUP BY osm_id
        ''')
    while True:
        # Fetch some of the result.
        rows = relationCursor.fetchmany(100)

        # Empty result means end of query.
        if not rows:
            break;

        #relations have negative osm_id in planet_osm_line table
        for row in rows:
            relationIDs.append(-row[0])

    # Select important columns just for our IDs
    relations = []
    for id in relationIDs:
        relationCursor.execute('''
            SELECT id, members, tags
                FROM planet_osm_rels
                WHERE id=%s
        ''' % id)
        row = relationCursor.fetchone()
        # Make Relation object with parsed data
        relations.append(relation.Relation(row))

    # Find final routes and append all corresponding osmcSymbols
    routes = {}
    for rel in relations:
        if rel.osmcSymbol:
            for lineId in rel.lines:
                if routes.has_key(lineId):
                    routes[lineId].addSign(rel)
                else:
                    newRoute = route.Route(lineId, rel)
                    routes[lineId] = newRoute

    listOfRoutes = routes.values()
    listOfRoutes.sort()

    # Clean previous routes.
    auxiliaryCursor.execute("DROP TABLE IF EXISTS planet_osm_routes2")
    auxiliaryCursor.execute("DELETE FROM geometry_columns WHERE f_table_name = 'planet_osm_routes2'")
    auxiliaryCursor.execute("CREATE TABLE planet_osm_routes2 AS SELECT osm_id, way, highway, tracktype FROM planet_osm_line WHERE osm_id = 0")
    auxiliaryCursor.execute("DELETE FROM geometry_columns WHERE f_table_name = 'planet_osm_routes2'")
    auxiliaryCursor.execute("INSERT INTO geometry_columns VALUES ('', 'public', 'planet_osm_routes2', 'way', 2, 900913, 'LINESTRING')")

    # Add important information to each route
    for r in listOfRoutes:
        auxiliaryCursor.execute('''
            SELECT way, highway, tracktype FROM planet_osm_line
              WHERE osm_id=%s
        ''' % r.id)
        row = auxiliaryCursor.fetchone()
        # Some route IDs from relations may not be present in line table, ie. out of bounding box, those are ignored
        if row is not None:
            routes[r.id].geometry = row[0]
            routes[r.id].highway = row[1]
            routes[r.id].tracktype = row[2]

    # Determine maximum number of different osmcSymbols at one route
    maxSigns = 0
    for r in routes.values():
        if (maxSigns < r.numOfSigns):
            maxSigns = r.numOfSigns
#        if (r.numOfSigns == 4):
#            print "route id: ", r.id
#            for sign in r.osmcSigns:
#                print "  ", sign

    # Add columns for maximum number of osmcSymbols
    for column in range(maxSigns):
        auxiliaryCursor.execute('''
            ALTER TABLE planet_osm_routes2
              ADD osmcSymbol%s text;
        ''' % (str(column)))
        auxiliaryCursor.execute('''
            ALTER TABLE planet_osm_routes2
              ADD network%s text;
        ''' % (str(column)))

    # Insert route values into the table
    for r in listOfRoutes:
        if r.geometry is not None:
            values = str(r.id) + ", '" + r.geometry + "'"
            if r.highway is not None:
                values += ", '" + r.highway + "'"
            else:
                values += ", NULL"
            if r.tracktype is not None:
                values += ", '" + r.tracktype + "'"
            else:
                values += ", NULL"
            for i in range(len(r.osmcSigns)):
                values += ', '
                if r.osmcSigns[i].network is not None:
                    values += "'" + r.osmcSigns[i].osmcSymbol + "', '" + r.osmcSigns[i].network + "'"
                else:
                    values += "'" + r.osmcSigns[i].osmcSymbol + "', NULL"
            auxiliaryCursor.execute('''
                INSERT INTO planet_osm_routes2
                  VALUES (%s)
            ''' % (values))

    print "Relations: ", len(relations)
    print "max Signs: ", maxSigns
    print "Routes:    ", len(routes)

    # commit the result into the database
    auxiliaryCursor.close()
    connection.commit()


if __name__ == "__main__":
    main()
