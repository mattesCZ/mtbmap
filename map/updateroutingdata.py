#!/usr/bin/python
# -*- coding: utf-8 -*-

# Global imports
import simplejson as json
from datetime import datetime

# Django imports
from django.db import connections, transaction
from django.db.models import F

# Local imports
from map.models import *
from map.mathfunctions import total_seconds

MAP_DB = 'osm_data'

sac_scale_values = ['hiking', 'mountain_hiking', 'demanding_mountain_hiking',
                    'alpine_hiking', 'demanding_alpine_hiking', 'difficult_alpine_hiking']

def copy_osmpoints():
    '''
    Copy useful records from planet_osm_points table.
    '''
    cursor = connections[MAP_DB].cursor()
    cursor.execute('DELETE FROM map_osmpoint')
    column_names = verbose_names(obj=OsmPoint(), underscores=True)
    column_names.remove('ID')
    column_names.remove('osm_id')
    column_names.remove('the_geom')
    columns = ', '.join([ '"' + column + '"' for column in column_names])
    substr_columns = ', '.join([ 'substr("' + column + '", 0, 40) as "' + column + '" ' for column in column_names])
    or_clause = ' OR '.join([ '"' + column + '" IS NOT NULL' for column in column_names])
    query = "INSERT INTO map_osmpoint (osm_id, the_geom, %s) SELECT osm_id, ST_TRANSFORM(way, 4326) as the_geom, %s FROM planet_osm_point WHERE %s;" % (columns, substr_columns, or_clause)
    print query
    cursor.execute(query)
    transaction.commit_unless_managed(using=MAP_DB)
    cursor.close()
    
def copy_osmlines():
    '''
    Copy useful records from planet_osm_line table.
    '''
    cursor = connections[MAP_DB].cursor()
    cursor.execute('DELETE FROM map_osmline')
    column_names = verbose_names(obj=OsmLine(), underscores=True)
    column_names.remove('ID')
    column_names.remove('osm_id')
    column_names.remove('the_geom')
    columns = ', '.join([ '"' + column + '"' for column in column_names]).replace(':', '')
    print column_names
    print columns
    substr_columns = ', '.join([ 'substr("' + column + '", 0, 200) as "' + column + '" ' for column in column_names])
    or_clause = ' OR '.join([ '"' + column + '" IS NOT NULL' for column in column_names])
    query = "INSERT INTO map_osmline (osm_id, the_geom, %s) SELECT osm_id, ST_TRANSFORM(way, 4326) as the_geom, %s FROM planet_osm_line WHERE %s;" % (columns, substr_columns, or_clause)
    print query
    cursor.execute(query)
    transaction.commit_unless_managed(using=MAP_DB)
    cursor.close()

def copy_ways():
    '''
    copy data generated with osm2po to map_way table
    '''
    start = datetime.now()
    cursor = connections[MAP_DB].cursor()
    cursor.execute('DELETE FROM map_way')
    insert = """
       insert into map_way (class_id, length, name, x1, y1, x2, y2, reverse_cost, osm_id, source, target, the_geom)
       select clazz, km, osm_name, x1, y1, x2, y2, reverse_cost, osm_id, source, target, geom_way
       from osm_2po_4pgr
    """
    cursor.execute(insert)
    transaction.commit_unless_managed(using=MAP_DB)
    count = Way.objects.all().count()
    print count, " ways inserted successfully"
    print 'Total time:', total_seconds(datetime.now()-start)
    print 'Run python vacuum_full.py now'

def add_attributes():
    '''
    Add attributes from osm2pgsql created database to our Way objects
    '''
    start = datetime.now()
    _update_reverse_cost()
    _add_line_attributes()
    _add_polygon_attributes()
    _add_routes_attributes()
    print 'All attributes updated successfully.'
    print 'Total time:', total_seconds(datetime.now()-start)
    print 'Run python vacuum_full.py again'

def _row_to_arguments(row):
    '''
    Get database row as column:value pairs dictionary, create kwargs suitable for Way updates
    return
    '''
    update_args = {}
    for key, value in row.items():
        if value:
            if key in ('tracktype', 'width', 'mtbscale', 'mtbscaleuphill', 'class_bicycle', 'class_mtb', 'class_mtb_technical'):
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

def _update_reverse_cost():
    Way.objects.filter(reverse_cost__lt=1000000).update(reverse_cost=F('length'))

def _add_line_attributes():
    '''
    Copy useful attributes from planet_osm_line
    '''
    start = datetime.now()
    cursor = connections[MAP_DB].cursor()
    column_bicycle = """CASE WHEN (cycleway IN ('opposite','opposite_lane')
                                      OR "oneway:bicycle"='no')
                                  AND oneway IN ('yes','-1')
                             THEN 'opposite'
                             ELSE bicycle
                        END AS bicycle"""
    column_class_bicycle = """CASE WHEN ("class:bicycle:touring" IS NOT NULL) THEN "class:bicycle:touring"
                                   ELSE "class:bicycle"
                              END AS class_bicycle"""
    query = '''SELECT osm_id, tracktype, oneway, access, %s, foot, incline,
                      width, surface, smoothness, maxspeed, "mtb:scale" as mtbscale,
                      "mtb:scale:uphill" as mtbscaleuphill, sac_scale, network,
                      replace(highway, '_link', '') AS highway, %s, "class:bicycle:mtb" as class_mtb,
                      "class:bicycle:mtb:technical" as class_mtb_technical
               FROM planet_osm_line
               WHERE osm_id>0; ''' % (column_bicycle, column_class_bicycle)
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
    print 'Time:', total_seconds(datetime.now()-start)

def _add_polygon_attributes():
    '''
    Copy useful attributes from planet_osm_polygon for routable areas
    '''
    start = datetime.now()
    cursor = connections[MAP_DB].cursor()
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
    print 'Time:', total_seconds(datetime.now()-start)

def _add_routes_attributes():
    '''
    Copy useful attributes from planet_osm_routes2, this time only osmc
    '''
    start = datetime.now()
    cursor = connections[MAP_DB].cursor()
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
            updated += Way.objects.filter(osm_id=osm_id).update(osmc=1)
        evaluated += 100
        if not evaluated % 1000:
            print evaluated, 'evaluated records:'
    print updated, 'osmc attrs updated successfully'
    print 'Time:', total_seconds(datetime.now()-start)


def _to_float(value):
    '''
    String to float for width and mtbscale parsing.
    '''
    # Replace expected characters to floatable strings
    try:
        r = float(value)
        return r
    except ValueError:
        try:
            cleansed = value.replace(',', '.').replace('+', '.3').replace('-','.7').replace('grade', '')
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

def vacuum(conn):
    query = "VACUUM FULL"
    print 'running %s' % query
    old_isolation_level = conn.isolation_level
    conn.isolation_level = 0
    cursor = conn.cursor()
    cursor.execute(query)
    cursor.close()
    conn.isolation_level = old_isolation_level
    print '%s finished successfully' % query
