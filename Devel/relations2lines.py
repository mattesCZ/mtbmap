#!/usr/bin/python
# -*- coding: utf-8 -*-

__author__="xtesar7"

from psycopg2 import *
import sys

# Create connection to DB server.
if (len(sys.argv)>1):
    connection = connect("dbname='" + sys.argv[1] + "' user='xtesar7' password=''");
else:
    connection = connect("dbname='gisczech' user='xtesar7' password=''");
relation_cursor = connection.cursor()
auxilary_cursor = connection.cursor()

# Read allowed relation tags of line table.
copy_tags = {'kct_red' : True, 'kct_green' : True, 'kct_blue' : True,
  'kct_yellow' : True, 'marked_trail' : True, 'marked_trail_red' : True,
  'marked_trail_green' : True, 'marked_trail_blue' : True,
  'marked_trail_yellow' : True, 'network' : True, 'route' : True, 'ref' : True, '"mtb:scale"' : True, '"mtb:scale:uphill"' : True, '"osmc:symbol"' : True }

# Way tags selected in style element <Layer> for cycle, mtb and kct tracks
way_tags = {
'kct_red' : "is not null",
'kct_green' : "is not null",
'kct_blue' : "is not null",
'kct_yellow' : "is not null",
'marked_trail_red' : "is not null",
'marked_trail_green' : "is not null",
'marked_trail_blue' : "is not null",
'marked_trail_yellow' : "is not null",
'mtb:scale' : "is not null",
'mtb:scale:uphill' : "is not null",
'network' : "in ('e-road', 'iwn', 'rwn', 'nwn', 'lwn')",
'route' : "='mtb'",
'ncn' : "is not null",
'rcn' : "is not null",
'lcn' : "is not null",
'ncn_ref' : "is not null",
'rcn_ref' : "is not null",
'lcn_ref' : "is not null",
'highway' : "='cycleway'",
'osmc:symbol' : "is not null"
}

# Clean previous tracks.
auxilary_cursor.execute("DROP TABLE IF EXISTS planet_osm_routes")
auxilary_cursor.execute("DELETE FROM geometry_columns WHERE f_table_name = 'planet_osm_routes'")
auxilary_cursor.execute("CREATE TABLE planet_osm_routes AS SELECT * FROM planet_osm_line WHERE osm_id = 0")
auxilary_cursor.execute("DELETE FROM geometry_columns WHERE f_table_name = 'planet_osm_routes'")
auxilary_cursor.execute("INSERT INTO geometry_columns VALUES ('', 'public', 'planet_osm_routes', 'way', 2, 900913, 'LINESTRING')")

# Select all route relations.
relation_cursor.execute("SELECT id, parts, tags FROM planet_osm_rels WHERE"
  " 'route' = ANY(tags) AND (%s)" % (" OR ".join(["'%s' = ANY(tags)" % (key,)
  for key in copy_tags.keys()])))
updates = 0
while True:
    # Fetch some of the result.
    rows = relation_cursor.fetchmany(100)

    # Empty result means end of query.
    if not len(rows):
        break;

    # Process relations.
    for row in rows:
        # Read relation tags.
        tags = {}
        for I in range(0, len(row[2]), 2):
           key = row[2][I]
           value = row[2][I + 1]
           if copy_tags.has_key(key):
              tags[key] = value

        # Copy relation ways.
        where_statement = ""
        if len(row[1]):
            where_statement = ", ".join([str(way_id) for way_id in row[1]])
            auxilary_cursor.execute("INSERT INTO planet_osm_routes SELECT *"
              " FROM planet_osm_line WHERE osm_id IN (%s) AND NOT EXISTS (SELECT"
              " * FROM planet_osm_routes WHERE planet_osm_routes.osm_id ="
              " planet_osm_line.osm_id)" % (where_statement))

        # For each line in relation.
        if len(tags) and len(row[1]):
            updates += 1
            # Update lines of the relation with its tags.
            set_statement = ", ".join(["%s = '%s'" % (key, tags[key]
              .replace('\'', '\\\'')) for key in tags.keys()])
            if (updates % 100 == 0):
                print str(updates) + ' relations updated.'
#            print "Updating lines:", where_statement
#            print "Set:", set_statement
            auxilary_cursor.execute("UPDATE planet_osm_routes SET %s WHERE"
              " osm_id IN (%s)" % (set_statement, where_statement))
print 'Total amount of ' + str(updates) + ' relations updated.'

auxilary_cursor.close()
relation_cursor.close()
connection.commit()

auxilary_cursor = connection.cursor()

# Add ways with cycleway tags
where_keys_statement = " OR ".join(['"%s" %s' % (key, way_tags.get(key)) for key in way_tags.keys()])
#print where_keys_statement

auxilary_cursor.execute("""INSERT INTO planet_osm_routes SELECT * FROM """
        """planet_osm_line WHERE osm_id>0 AND NOT EXISTS (SELECT * FROM """
        """planet_osm_routes WHERE planet_osm_routes.osm_id = planet_osm_line.osm_id)"""
        """AND (%s) """ % (where_keys_statement))

auxilary_cursor.close()
connection.commit()
