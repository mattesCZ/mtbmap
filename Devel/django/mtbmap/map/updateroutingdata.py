#!/usr/bin/python
# -*- coding: utf-8 -*-

from django.db import connection, transaction
from map.models import Way
import psycopg2
import simplejson as json
from datetime import datetime

sac_scale_values = ['hiking', 'mountain_hiking', 'demanding_mountain_hiking',
                    'alpine_hiking', 'demanding_alpine_hiking', 'difficult_alpine_hiking']

def copy_ways():
    '''
    copy data generated with osm2po to map_way table
    '''
    start = datetime.now()
    cursor = connection.cursor()
    cursor.execute('DELETE FROM map_way')
    insert = """
       insert into map_way (class_id, length, name, x1, y1, x2, y2, reverse_cost, osm_id, source, target, osm_source, osm_target, the_geom)
       select clazz, km, osm_name, x1, y1, x2, y2, reverse_cost, osm_id, source, target, osm_source_id, osm_target_id, geom_way
       from osm_2po_4pgr
    """
    cursor.execute(insert)
    transaction.commit_unless_managed()
    count = Way.objects.all().count()
    print count, " ways inserted successfully"
    print 'Total time:', (datetime.now()-start).total_seconds()

def add_attributes():
    '''
    Add attributes from osm2pgsql created database to our Way objects
    '''
    start = datetime.now()
    _add_line_attributes()
    _add_polygon_attributes()
    _add_routes_attributes()
    print 'All attributes updated successfully.'
    print 'Total time:', (datetime.now()-start).total_seconds()

def _row_to_arguments(row):
    '''
    Get database row as column:value pairs dictionary, create kwargs suitable for Way updates
    return
    '''
    update_args = {}
    for key, value in row.items():
        if value:
            if key in ('tracktype', 'width', 'mtbscale', 'mtbscaleuphill'):
                floatvalue = _to_float(value)
                if key == 'width':
                    update_args[key] = floatvalue
                else:
                    if floatvalue:
                        update_args[key] = int(floatvalue)
                    else:
                        update_args[key] = None
            elif key in ('sac_scale'):
                if value in sac_scale_values:
                    update_args[key] = sac_scale_values.index(value)
            else:
                update_args[key] = value
    return update_args

def _add_line_attributes():
    '''
    Copy useful attributes from planet_osm_line
    '''
    start = datetime.now()
    connection = psycopg2.connect("dbname='gisczech' user='xtesar7' password='' port='5432'")
    cursor = connection.cursor()
    query = '''SELECT osm_id, tracktype, oneway, access, bicycle, foot, incline, width, surface, smoothness, maxspeed, "mtb:scale" as mtbscale, "mtb:scale:uphill" as mtbscaleuphill, sac_scale, network, replace(highway, '_link', '') AS highway FROM planet_osm_line WHERE osm_id>0; '''
    cursor.execute(query)
    description = cursor.description
    evaluated = 0
    updated = 0
    while True:
        lines_rows = [dict(zip([col[0] for col in description], row)) for row in cursor.fetchmany(100)]
        if not lines_rows:
            break
        for row in lines_rows:
            osm_id = row['osm_id']
            update_args = _row_to_arguments(row)
            updated += Way.objects.filter(osm_id=osm_id).update(**update_args)
        evaluated += 100
        if not evaluated % 1000:
            print evaluated, 'evaluated ways...'
    cursor.close()
    print updated, 'ways (lines) updated successfully,', evaluated, 'lines evaluated.'
    print 'Time:', (datetime.now()-start).total_seconds()

def _add_polygon_attributes():
    '''
    Copy useful attributes from planet_osm_polygon for routable areas
    '''
    start = datetime.now()
    connection = psycopg2.connect("dbname='gisczech' user='xtesar7' password='' port='5432'")
    cursor = connection.cursor()
    evaluated = 0
    updated = 0
    # highway areas are still without attributes
    null_ways_osm_ids = Way.objects.filter(highway__isnull=True).distinct('osm_id').values_list('osm_id', flat=True)
    print len(null_ways_osm_ids), 'IDs to be evaluated...'
    for osm_id in null_ways_osm_ids:
        query = '''SELECT osm_id, tracktype, oneway, access, bicycle, foot, incline, width, surface, smoothness, maxspeed, "mtb:scale" as mtbscale, "mtb:scale:uphill" as mtbscaleuphill, sac_scale, network, highway FROM planet_osm_polygon WHERE osm_id=%s; ''' % osm_id
        cursor.execute(query)
        description = cursor.description
        rows = [dict(zip([col[0] for col in description], row)) for row in cursor.fetchall()]
        for row in rows:
            update_args = _row_to_arguments(row)
            updated += Way.objects.filter(osm_id=osm_id).update(**update_args)
        evaluated += 1
        if not evaluated % 1000:
            print evaluated, 'evaluated ways...'
    cursor.close()
    print updated, 'ways (areas) updated successfully'
    print 'Time:', (datetime.now()-start).total_seconds()

def _add_routes_attributes():
    '''
    Copy useful attributes from planet_osm_routes2, this time only osmc
    '''
    start = datetime.now()
    connection = psycopg2.connect("dbname='gisczech' user='xtesar7' password='' port='5432'")
    cursor = connection.cursor()
    routes_query = '''SELECT osm_id FROM planet_osm_routes2 WHERE osmcsymbol0<>'mtb:white:mtb_mtb' and osmcsymbol0 is not null;'''
    cursor.execute(routes_query)
    evaluated = 0
    updated = 0
    while True:
        routes_rows = cursor.fetchmany(100)
        if not routes_rows:
            break
        for row in routes_rows:
            osm_id = row[0]
            updated += Way.objects.filter(osm_id=osm_id).update(osmc='use')
        evaluated += 100
        if not evaluated % 1000:
            print evaluated, 'evaluated records:'
    print updated, 'osmc attrs updated successfully'
    print 'Time:', (datetime.now()-start).total_seconds()


def _to_float(value):
    '''
    String to float for width and mtbscale parsing.
    '''
    # Replace expected characters to floatable strings
    cleansed = value.replace(',', '.').replace('+', '.3').replace('-','.7').replace('grade', '')
    try:
        r = float(cleansed)
        return r
    except ValueError:
        print value
        return None

def update_class_ids():
    conf_file = open('media/class_ids.json', 'r')
    class_json = json.loads(conf_file.read())
    class_conf = class_json['classes']
#    for c in class_conf:
#        classname = c['classname']

    ways = Way.objects.all()
    for way in ways:
        way.class_id = way.compute_class_id(class_conf)
        way.save()
