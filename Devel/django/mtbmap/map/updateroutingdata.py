#!/usr/bin/python
# -*- coding: utf-8 -*-

#from django.contrib.gis.geos.geometry import GEOSGeometry
from django.db import connection, transaction
from map.models import Way#, Vertice
import psycopg2
import simplejson as json

sac_scale_values = ['hiking', 'mountain_hiking', 'demanding_mountain_hiking',
                    'alpine_hiking', 'demanding_alpine_hiking', 'difficult_alpine_hiking']

def dictfetchall(cursor):
    "Returns all rows from a cursor as a dict"
    desc = cursor.description
    return [
        dict(zip([col[0] for col in desc], row))
        for row in cursor.fetchall()
    ]

#def string_to_type(value, type):
#    try:
#        if type=='string':
#            return value
#        if type=='int':
#            res = int(value)
#        elif type=='float':
#            res = float(value)
#        else:
#            return None
#    except ValueError:
#        return None
#    else:
#        return res
#
def copy_ways():
    cursor = connection.cursor()
    cursor.execute('DELETE FROM map_way')
    insert = """
       insert into map_way (class_id, length, name, x1, y1, x2, y2, reverse_cost, osm_id, source, target, osm_source, osm_target, the_geom)
       select clazz, km, osm_name, x1, y1, x2, y2, reverse_cost, osm_id, source, target, osm_source_id, osm_target_id, geom_way
       from osm_2po_4pgr
    """
    cursor.execute(insert)
    transaction.commit_unless_managed()
    print "All ways uploaded successfully"

#def create_vertices():
#    Vertice.objects.all().delete()
#    vertices = {}
#    for w in Way.objects.all():
#        vertices[w.source] = GEOSGeometry('POINT(%s %s)' % (w.x1, w.y1))
#        vertices[w.target] = GEOSGeometry('POINT(%s %s)' % (w.x2, w.y2))
#    for id, geom in vertices.items():
#        vertice = Vertice(id=id, the_geom=geom)
#        vertice.save()
#
#def copy_vertices():
#    cursor = connection.cursor()
#    cursor.execute('DELETE FROM map_vertice')
#    insert = """
#       insert into map_vertice (id, the_geom)
#       select id, the_geom
#       from vertices_tmp
#    """
#    cursor.execute(insert)
#    transaction.commit_unless_managed()
#    print "All vertices uploaded successfully"
#
#def copy_nodes():
#    cursor = connection.cursor()
#    cursor.execute('DELETE FROM map_node')
#    insert = """
#       insert into map_node (id, the_geom)
#       select id, ST_SetSRID(ST_Point(lon, lat), 4326) as the_geom
#       from nodes
#    """
#    cursor.execute(insert)
#    transaction.commit_unless_managed()
#    print "All nodes uploaded successfully"

def add_attributes():
    connection = psycopg2.connect("dbname='gisczech' user='xtesar7' password='' port='5432'")
    cursor = connection.cursor()
    ways = Way.objects.all()
    for way in ways:
        select_lines = 'SELECT tracktype, oneway, access, bicycle, foot, incline, width, surface, smoothness, maxspeed, "mtb:scale" as mtbscale, "mtb:scale:uphill" as mtbscaleuphill, sac_scale, network, highway FROM planet_osm_line WHERE osm_id=%i' % (way.osm_id)
        cursor.execute(select_lines)
        rows = dictfetchall(cursor)
        for row in rows:
            for key, value in row.items():
#                way.__dict__[key] = value
                if value:
                    if key in ('tracktype', 'width', 'mtbscale', 'mtbscaleuphill'):
                        floatvalue = to_float(value)
                        if key == 'width':
                            way.__dict__[key] = floatvalue
                        else:
                            if floatvalue:
                                way.__dict__[key] = int(floatvalue)
                            else:
                                way.__dict__[key] = None
                    elif key in ('sac_scale'):
                        if value in sac_scale_values:
                            way.__dict__[key] = sac_scale_values.index(value)
                    else:
                        way.__dict__[key] = value
        way.save()
    cursor.close()
    print 'All attributes updated successfully'

def to_float(value):
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
