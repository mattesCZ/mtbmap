# -*- coding: utf-8 -*-

from psycopg2 import *
from copy import deepcopy
from sys import setrecursionlimit
import time

from .relation import Relation
from .route import Route


def run(db_name, user, port):
    bbox_query = '''
        ST_Intersects(way, ST_Transform(ST_GeomFromText(
            'POLYGON((-5 60, -5 35, 30 35, 30 60, -5 60))', 4326), 900913)::geometry)
    '''
    print time.strftime("%H:%M:%S", time.localtime()), " - script started"
    print "  Searching RelationIDs and Lines in planet_osm_line..."
    # Create connection to DB server.
    connection = connect("dbname='{db_name}' user='{user}' password='' port='{port}'"
                         .format(db_name=db_name, user=user, port=port))
    relation_cursor = connection.cursor()
    auxiliary_cursor = connection.cursor()
    way_cursor = connection.cursor()

    # Find relation IDs to be parsed, ie. those with osmc:symbol or some mtb values
    # Treat lines with useful attributes as relations (osm_id >= 0)
    relation_ids = []
    relations = []
    relation_cursor.execute('''
        SELECT osm_id, CASE WHEN ("highway"='track' AND "tracktype"='grade1' AND "mtb:scale" IS NULL) THEN 'grade1'
                            ELSE "mtb:scale"
                       END AS "mtb:scale"
            , "mtb:scale:uphill", network, "osmc:symbol"
            FROM planet_osm_line
            WHERE %s AND (("osmc:symbol" IS NOT NULL OR kct_red IS NOT NULL
                OR kct_blue IS NOT NULL OR kct_green IS NOT NULL
                OR kct_yellow IS NOT NULL OR ("mtb:scale" IS NOT NULL AND (("access"<>'private' AND "access"<>'no') OR "access" IS NULL OR ("access" IN ('private', 'no') AND bicycle='yes')))
                OR "mtb:scale:uphill" IS NOT NULL OR ("highway"='track' AND "tracktype"='grade1')))
        ''' % bbox_query)
    while True:
        # Fetch some of the result.
        rows = relation_cursor.fetchmany(100)

        # Empty result means end of query.
        if not rows:
            break

        #relations have negative osm_id in planet_osm_line table
        #lines have positive osm_id in planet_osm_line table
        for row in rows:
            if row[0] < 0:
                #osm_id is not a primary key
                if not (row[0] in relation_ids):
                    relation_ids.append(-row[0])
            else:
                # 0: osm_id; 1: mtb:scale; 2: mtb:scale:uphill; 3: network; 4: "osmc:symbol"
                line_info = ("LINE;" + str(row[0]) + ";" + str(row[1]) + ";" + str(row[2]) + ";"
                             + str(row[3]) + ";" + str(row[4]))
                relations.append(Relation(line_info))

    print time.strftime("%H:%M:%S", time.localtime()), " - RelationIDs and Lines found."
    print "  Getting Relation details from planet_osm_rels..."
    # Select important columns just for our IDs
    for r_id in relation_ids:
        relation_cursor.execute('''
            SELECT id, members, tags
                FROM planet_osm_rels
                WHERE id=%s
        ''' % r_id)
        row = relation_cursor.fetchone()
        # Make Relation object with parsed data
        relations.append(Relation(row))

    print time.strftime("%H:%M:%S", time.localtime()), " - relations details found."
    print "  Making single routes from relations with all osmc:symbols..."

    # Find final routes and append all corresponding osmcSymbols
    routes = routes_from_rels(relations)

    list_of_routes = routes.values()
    list_of_routes.sort()
    print time.strftime("%H:%M:%S", time.localtime()), " - routes now have osmc:symbols."
    print "  Finding firstNode and lastNode for each route in planet_osm_ways..."

    # Clean previous routes.
    auxiliary_cursor.execute("DROP TABLE IF EXISTS planet_osm_routes2")
    auxiliary_cursor.execute("DELETE FROM geometry_columns WHERE f_table_name = 'planet_osm_routes2'")
    auxiliary_cursor.execute("CREATE TABLE planet_osm_routes2 AS SELECT osm_id, way, highway, tracktype" +
                             " FROM planet_osm_line WHERE osm_id = 0")
    auxiliary_cursor.execute("DELETE FROM geometry_columns WHERE f_table_name = 'planet_osm_routes2'")
    auxiliary_cursor.execute("INSERT INTO geometry_columns VALUES ('', 'public', 'planet_osm_routes2'," +
                             " 'way', 2, 900913, 'LINESTRING')")

    # Add important information to each route
    for r in list_of_routes:
        auxiliary_cursor.execute('''
            SELECT way, highway, tracktype FROM planet_osm_line
              WHERE %s AND osm_id=%s AND (("access"<>'private' AND "access"<>'no') OR "access" IS NULL
                OR ("access" IN ('private', 'no') AND bicycle='yes'))
        ''' % (bbox_query, r.id))
        row = auxiliary_cursor.fetchone()
        # Some route IDs from relations may not be present in line table, ie. out of bounding box, those are ignored
        if row is not None:
            routes[r.id].geometry = row[0]
            routes[r.id].highway = row[1]
            routes[r.id].tracktype = row[2]
            way_cursor.execute('''
                SELECT nodes[1], nodes[array_upper(nodes, 1)]
                    FROM planet_osm_ways
                    WHERE id=%s
            ''' % r.id)
            first_end_nodes = way_cursor.fetchone()
            routes[r.id].firstNode = first_end_nodes[0]
            routes[r.id].lastNode = first_end_nodes[1]
#            print r.id, ": ", routes[r.id].firstNode, ", ", routes[r.id].lastNode
        else:
            routes.pop(r.id)
    print time.strftime("%H:%M:%S", time.localtime()), " - firstNodes and lastNodes are found."
    print "  Finding route neighbours based on first and last nodes..."

    # Find end nodes and their routes
    nodes = find_nodes(routes)

    # Find previous and next route neighbours
    for r in routes:
        next_route_ids = deepcopy(nodes[routes[r].lastNode])
        next_route_ids.remove(routes[r].id)
        previous_route_ids = deepcopy(nodes[routes[r].firstNode])
        previous_route_ids.remove(routes[r].id)
        for rid in next_route_ids:
            routes[routes[r].id].nextRoutes.append(rid)
        for rid in previous_route_ids:
            routes[routes[r].id].previousRoutes.append(rid)

    #remove unconnected tracks with highway=track and tracktype=grade1 and mtb:scale is null
    print time.strftime("%H:%M:%S", time.localtime()), "  Removing disconnected tracks."
    routes = remove_unconnected(routes, nodes)
    print "  Tracks removed."

    print time.strftime("%H:%M:%S", time.localtime()), "  Finding dangerous nodes (column warning)."
    # Find nodeIDs, where track's attribute mtb:scale changes rapidly (difference >= 2),
    # create new column warning in planet_osm_lines with the difference
    danger_nodes = find_dangerous_nodes(nodes, routes)
    point_cursor = connection.cursor()
    insert_danger_nodes(danger_nodes, point_cursor)
    point_cursor.close()

    print time.strftime("%H:%M:%S", time.localtime()), " - neighbours are found."
    print "  Determining offset for each route..."

    # Find offset polarity
#    listOfRoutes = routes.values()
    list_of_routes = sorted(routes.values(), key=lambda route: route.osmcSigns[0], reverse=True)
    if len(list_of_routes) > 1000:
        setrecursionlimit(len(list_of_routes))
    for r in list_of_routes:
#        print "For cycle: ", r.id, r.osmcSigns[0]
        set_offset(routes, r.id, "next")
        set_offset(routes, r.id, "previous")
    print time.strftime("%H:%M:%S", time.localtime()), " - offset is found."
    print "  Inserting of routes into new empty table planet_osm_routes2..."

    # Determine maximum number of different osmcSymbols at one route
    max_signs = 0
    for r in routes.values():
        if max_signs < r.numOfSigns:
            max_signs = r.numOfSigns
    if max_signs < 4:
        max_signs = 4

    # Prepare database table for data insertion
    auxiliary_cursor.execute('''
        ALTER TABLE planet_osm_routes2
          ADD "mtb:scale" text;
    ''')
    auxiliary_cursor.execute('''
        ALTER TABLE planet_osm_routes2
          ADD "mtb:scale:uphill" text;
    ''')
    auxiliary_cursor.execute('''
        ALTER TABLE planet_osm_routes2
          ADD offsetSide integer;
    ''')
    # Add columns for maximum number of osmcSymbols
    for column in range(max_signs):
        auxiliary_cursor.execute('''
            ALTER TABLE planet_osm_routes2
              ADD osmcSymbol%s text;
        ''' % (str(column)))
        auxiliary_cursor.execute('''
            ALTER TABLE planet_osm_routes2
              ADD network%s text;
        ''' % (str(column)))

    # Insert route values into the table
    for r in list_of_routes:
        if r.geometry is not None:
            row = r.get_values_row()
            auxiliary_cursor.execute('''
                INSERT INTO planet_osm_routes2
                  VALUES (%s)
            ''' % row)
    print " Finished inserting routes into new table."

    print "Relations:   ", len(relations)
    print "max Signs:   ", max_signs
    print "Routes:      ", len(routes)
    print "Nodes:       ", len(nodes)
#    print "Danger nodes:", len(dangerNodes)

    # commit the result into the database
    auxiliary_cursor.close()
    connection.commit()
    
    print time.strftime("%H:%M:%S", time.localtime()), " - Relations2lines finished successfully."


def routes_from_rels(relations):
    routes = {}
    for rel in relations:
        if rel.osmcSymbol:
            for line_id in rel.lines:
                if line_id in routes:
                    routes[line_id].add_sign(rel)
                else:
                    new_route = Route(line_id, rel)
                    routes[line_id] = new_route
    return routes


def find_nodes(routes):
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


def set_offset(routes, current_id, direction):
    if routes[current_id].offset is None:
        routes[current_id].offset = -1
#    print "Correct order: ", currentId
    if direction == "next":
        for next_id in routes[current_id].nextRoutes:
            if not (next_id in routes):
                return
            if routes[next_id].offset is not None:
                return
            else:
                if routes[current_id].lastNode == routes[next_id].firstNode:
                    routes[next_id].offset = routes[current_id].offset
                    set_offset(routes, next_id, "next")
                elif routes[current_id].lastNode == routes[next_id].lastNode:
                    routes[next_id].offset = -routes[current_id].offset
                    set_offset(routes, next_id, "previous")
    else:
        for next_id in routes[current_id].previousRoutes:
            if not (next_id in routes):
                return
            if routes[next_id].offset is not None:
                return
            else:
                if routes[current_id].firstNode == routes[next_id].firstNode:
                    routes[next_id].offset = -routes[current_id].offset
                    set_offset(routes, next_id, "next")
                elif routes[current_id].firstNode == routes[next_id].lastNode:
                    routes[next_id].offset = routes[current_id].offset
                    set_offset(routes, next_id, "previous")


def find_dangerous_nodes(nodes, routes):
    danger_nodes = {}
    for node in nodes:
        mtb_min = 6
        mtb_max = 0
        for line in nodes[node]:
            if routes[line].mtbScale:
                try:
                    mtb_scale = int(routes[line].mtbScale.replace('+', '').replace('-', ''))
                    if mtb_scale > mtb_max:
                        mtb_max = mtb_scale
                    if mtb_scale < mtb_min:
                        mtb_min = mtb_scale
                except ValueError:
                    continue
        if (mtb_max - mtb_min) >= 2:
            danger_nodes[node] = mtb_max - mtb_min
    return danger_nodes


def insert_danger_nodes(nodes, cursor):
    cursor.execute('''
        SELECT attname FROM pg_attribute
          WHERE attrelid=(SELECT oid FROM pg_class WHERE relname='planet_osm_point') AND attname='warning'
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
            node_lat_lon = cursor.fetchone()
            if node_lat_lon:
                geometry_command = "ST_SetSRID(ST_Point( %s, %s),900913) " % (str(node_lat_lon[1]/100.0), str(node_lat_lon[0]/100.0))
                point_values = str(dnID) + ", " + geometry_command + ", " + str(nodes[dnID])
                cursor.execute("INSERT INTO planet_osm_point (osm_id, way, warning) VALUES (%s)" % point_values)


def remove_unconnected(routes, nodes):
    grade_one_ids = []
    for r in routes:
        if routes[r].mtbScale == 'grade1':
            grade_one_ids.append(routes[r].id)
    parsed = []
    connected_grade_one = []
    disconnected_grade_one = []
    for grade_one_id in grade_one_ids:
        if grade_one_id in parsed:
            continue
        component = [grade_one_id]
        connected = False
        parsed.append(grade_one_id)
        neighbours = routes[grade_one_id].previousRoutes + routes[grade_one_id].nextRoutes
        while neighbours:
            n = neighbours.pop()
            if n in parsed:
                continue
            if not (routes[n].mtbScale is None or routes[n].mtbScale == 'grade1'):
                connected = True
                parsed.append(n)
                continue
            if routes[n].mtbScale == 'grade1':
                component.append(n)
                new_to_search = routes[n].previousRoutes + routes[n].nextRoutes
                for new in new_to_search:
                    if not new in parsed:
                        neighbours.append(new)
            parsed.append(n)
        if connected:
            connected_grade_one += component
        else:
            disconnected_grade_one += component
    print time.strftime("%H:%M:%S", time.localtime()), ("  Components found, connection determined,"
                                                        " now cleaning after removal...")
    for r_id in disconnected_grade_one:
        if len(routes[r_id].osmcSigns) <= 1:
            r = routes.pop(r_id)
            nodes[r.firstNode].remove(r.id)
            if not len(nodes[r.firstNode]):
                nodes.pop(r.firstNode)
            nodes[r.lastNode].remove(r.id)
            if not len(nodes[r.lastNode]):
                nodes.pop(r.lastNode)
        else:
            routes[r_id].mtbScale = None

    # set correct mtb:scale value
    for r_id in connected_grade_one:
        routes[r_id].mtbScale = '0'
    return routes
