#!/usr/bin/python
# -*- coding: utf-8 -*-
from django.db import connection, transaction
from map.models import Way
import psycopg2

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
       insert into map_way (id, class_id, length, name, x1, y1, x2, y2, reverse_cost, rule, to_cost, osm_id, source, target, the_geom)
       select gid, class_id, length, name, x1, y1, x2, y2, reverse_cost, rule, to_cost, osm_id, source, target, the_geom
       from ways
    """
    cursor.execute(insert)
    transaction.commit_unless_managed()
    print "All ways uploaded successfully"

def copy_vertices():
    cursor = connection.cursor()
    cursor.execute('DELETE FROM map_vertice')
    insert = """
       insert into map_vertice (id, the_geom)
       select id, the_geom
       from vertices_tmp
    """
    cursor.execute(insert)
    transaction.commit_unless_managed()
    print "All vertices uploaded successfully"

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
                if value:
                    try:
                        if key in ('tracktype', 'width', 'mtbscale', 'mtbscaleuphill'):
                            way.__dict__[key] = to_float(value)
                        elif key in ('sac_scale'):
                            way.__dict__[key] = sac_scale_values.index(value)
                        else:
                            way.__dict__[key] = value
                    except ValidationError:
                        print 'Wrong value for osm_id:', way.osm_id, 'Key:', key,'Value:' , value
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