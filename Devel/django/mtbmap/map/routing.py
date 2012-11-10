#!/usr/bin/python
# -*- coding: utf-8 -*-
from map.models import Way, Vertice
from django.db import connection
from django.contrib.gis.geos import *
#from django.contrib.gis.measure import D

weight = [1, 2, 3, 4, 5]

def find_route(points, params):
    params = recreate_params(params)
    print params
    sqlways = weighted_ways_query(params).replace(';','')
    edge_ids = []
    for i in range(len(points)-1):
        source = nearest_vertice(points[i])
        target = nearest_vertice(points[i+1])
        edge_ids += dijkstra(source.id, target.id, sqlways)
    return connect_edges(edge_ids)


def astar(source, target):
    cursor = connection.cursor()
    cursor.execute("SELECT edge_id FROM shortest_path_astar('SELECT id, source::int4, target::int4, length::double precision AS cost, x1, y1, x2, y2 FROM map_way', %s, %s, false, false)", [source, target])
    rows = cursor.fetchall()
    edge_ids = [elem[0] for elem in rows]
    return edge_ids

def connect_edges(edge_ids):
    edges = Way.objects.filter(id__in=edge_ids)
    lines = [edge.the_geom for edge in edges]
    return MultiLineString(lines)

def dijkstra(source, target, sqlways):
    cursor = connection.cursor()
    cursor.execute("SELECT edge_id FROM shortest_path(%s, %s, %s, false, false)", [sqlways, source, target])
#    cursor.execute("SELECT edge_id FROM shortest_path('SELECT id, source::int4, target::int4,  class_id*length::double precision  AS cost FROM map_way', %s, %s, false, false)", [source, target])
    rows = cursor.fetchall()
    edge_ids = [elem[0] for elem in rows]
    return edge_ids

def nearest_vertice(coords_wkt):
    radius = 50 # initial distance radius in meters
    point = GEOSGeometry('POINT(%s)' % (coords_wkt))
    vertices = Vertice.objects.filter(the_geom__distance_lte=(point, radius)).distance(point).order_by('distance')
    while not len(vertices):
        radius *= 2
        vertices = Vertice.objects.filter(the_geom__distance_lte=(point, radius)).distance(point).order_by('distance')
    return vertices[0]

def weighted_ways_query(params):
    where = where_clause(params)
    cost = cost_clause(params)
#    print cost
    return 'SELECT id, source, target, %s AS cost FROM map_way %s' % (cost, where)

def where_clause(params):
    whereparts = []
    for classname, values in params.items():
        andparts = []
        for feature, preference in values.items():
            if preference:
                if feature=='max':
                    condition = '"%s"<=%s' % (classname, preference)
                    andparts.append(condition)
                elif feature=='min':
                    condition = '"%s">=%s' % (classname, preference)
                    andparts.append(condition)
                elif preference=='5':
                    condition = """ "%s"::text!='%s'""" % (classname, feature)
                    andparts.append(condition)
                else:
                    pass
        andcondition = ' AND '.join(andparts)
        if andcondition:
            whereparts.append('("%s" is NULL OR (%s))' % (classname, andcondition))
    if whereparts:
        where = 'WHERE '
        where += ' AND '.join(whereparts)
    else:
        where = ''
    return where

def cost_clause(params):
    cases = []
    print 'cost start'
    for classname, values in params.items():
        for feature, preference in values.items():
            if not (feature=='max' or feature=='min'):
                case = """WHEN "%s"::text='%s' THEN "length"*%s """ % (classname, feature, weight[int(preference)-1])
                cases.append(case)
    if cases:
        return 'CASE %s ELSE "length" END' % (' '.join(cases))
    else:
        return 'length'

def recreate_params(params):
    new = {}
    for p in params:
#        print p
        classname, feature = p['name'].split('__')
        if not classname in new:
            new[classname] = {}
        new[classname][feature] = p['value']
    return new