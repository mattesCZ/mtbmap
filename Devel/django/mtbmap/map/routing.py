#!/usr/bin/python
# -*- coding: utf-8 -*-
from django.contrib.gis.geos import MultiLineString
from map.models import Way, WeightClass#, Weight
from django.db import connection
from django.contrib.gis.geos import *
from django.db.models import Sum

#from copy import deepcopy
#from django.contrib.gis.measure import D

weight = [1, 2, 3, 4, 5]

class MultiRoute:
    def __init__(self, points, params):
        self.params = RouteParams(self.recreate_params(params))
        self.points = points
        self.route_result = None
        self.length = 0

    # given json like object, create better python dictionary
    def recreate_params(self, params):
        new = {}
        for p in params:
            classname, feature = p['name'].split('__')
            if not classname in new:
                new[classname] = {}
            new[classname][feature] = p['value']
        return new

    # find route between all points, satisfy given params
    # return MultiLineString with route coordinates
    def find_route(self):
#        sqlways = self.weighted_ways_query()
        multilinestrings = []
        for i in range(len(self.points)-1):
            start_point = GEOSGeometry('POINT(%s)' % (self.points[i]))
            end_point = GEOSGeometry('POINT(%s)' % (self.points[i+1]))
            r = Route(start_point, end_point, self.params)
#            routeline, route_length = r.best_route()
            self.length += r.length
            multilinestrings += r.route
        return MultiLineString(multilinestrings)

class Route:
    def __init__(self, start_point, end_point, params):
        self.start_point = start_point
        self.end_point = end_point
        self.bbox = MultiPoint(self.start_point, self.end_point).envelope
#        self.sqlways = sqlways
        self.params = params
        self.start_way = self.nearest_way(start_point)
        self.end_way = self.nearest_way(end_point)
        self.start_to_source, self.start_to_target = self.start_way.lines_to_endpoints(start_point)
        self.end_to_source, self.end_to_target = self.end_way.lines_to_endpoints(end_point)
        self.length = 0
        self.route = self.best_route()

    # find route with the smallest cost
    # return route LineString
    def best_route(self):
#        print self.bbox
        if self.start_way.id==self.end_way.id:
            route = self.start_way.point_to_point(self.start_point, self.end_point)
            return MultiLineString(route)
        else:
            temp1, temp2, start_id = self.start_way.split(self.start_point)
            temp3, temp4, end_id = self.end_way.split(self.end_point)
            edge_ids = self.dijkstra(start_id, end_id)
            route, route_length = self.connect_edges(edge_ids)
            self.length = route_length
            remove = temp1, temp2, temp3, temp4
            for t in remove:
                Way.objects.get(pk=t).delete()
            return route

#        routes = []
#        routes.append(self._route(self.start_way.source, self.end_way.source, self.start_to_source, self.end_to_source))
#        routes.append(self._route(self.start_way.source, self.end_way.target, self.start_to_source, self.end_to_target))
#        routes.append(self._route(self.start_way.target, self.end_way.source, self.start_to_target, self.end_to_source))
#        routes.append(self._route(self.start_way.target, self.end_way.target, self.start_to_target, self.end_to_target))
#        inverse_lengths = []
#        for r in routes:
#            if r:
#                inverse_lengths.append(1/r.length)
#            else:
#                inverse_lengths.append(0)
#        return routes[inverse_lengths.index(max(inverse_lengths))]
#
#    def _route(self, source, target, to_start, to_end):
#        edge_ids = self.astar(source, target)
#        if self.start_way.id in edge_ids or self.end_way.id in edge_ids:
#            return None
#        return MultiLineString(to_start) + self.connect_edges(edge_ids) + MultiLineString(to_end)

    # shortcut for shortest_path_astar by pgrouting
    def astar(self, source, target):
        print 'astar started'
        cursor = connection.cursor()
        cursor.execute("SELECT edge_id, cost FROM shortest_path_astar(%s, %s, %s, false, false)", [self.params.sql_astar, source, target])
        rows = cursor.fetchall()
        edge_ids = [elem[0] for elem in rows]
        return edge_ids

    def connect_edges(self, edge_ids):
        edges = Way.objects.filter(id__in=edge_ids)
#        edges[0].weight(self.params)
        lines = [edge.the_geom for edge in edges]
        length = edges.aggregate(Sum('length'))['length__sum']
        return MultiLineString(lines), length

    # shortcut for shortest_path by pgrouting (uses dijkstra algorithm)
    def dijkstra(self, source, target):
        cursor = connection.cursor()
        cursor.execute("SELECT edge_id FROM shortest_path(%s, %s, %s, false, false)", [self.params.sql_dijkstra, source, target])
    #    cursor.execute("SELECT edge_id FROM shortest_path('SELECT id, source::int4, target::int4,  class_id*length::double precision  AS cost FROM map_way', %s, %s, false, false)", [source, target])
        rows = cursor.fetchall()
        edge_ids = [elem[0] for elem in rows]
        return edge_ids

    # find nearest way from given point(latlon) and apply weight of the way
    # return Way
    def nearest_way(self, point):
        radius = 0.000005 # initial distance radius in meters
        bbox = point.buffer(radius).envelope
        ways = Way.objects.filter(the_geom__intersects=bbox).extra(where=[self.params.extra_where()]).distance(point).order_by('distance')
        found = False
        while not found:
            radius *= 2
            bbox = point.buffer(radius).envelope
            ways = Way.objects.filter(the_geom__intersects=bbox).extra(where=[self.params.extra_where()]).distance(point).order_by('distance')
            if len(ways):
                print ways
                best_weight = ways[0].weight(self.params.params, ways[0].distance.km)
                nearest_way = ways[0]
                for way in ways:
                    print way
                    distance = way.distance.km
                    if distance>best_weight:
                        found=True
                        break
                    else:
                        weighted_distance = way.weight(self.params.params, way.distance.km)
                        if weighted_distance<best_weight:
                            best_weight = weighted_distance
                            nearest_way = way
        print nearest_way.osm_id, nearest_way.weight(self.params.params, nearest_way.distance.km), nearest_way.distance.km
        return nearest_way

class RouteParams:
    def __init__(self, params):
        self.params = params
        self.sql_astar = self.weighted_ways_astar()
        self.sql_dijkstra = self.weighted_ways_dijkstra()

    # create sql query for pgrouting astar
    # return sql query string
    def weighted_ways_astar(self):
        where = self.where_clause()
        cost = self.cost_clause()
#        where = ''
#        cost = 'length'
        return 'SELECT id, source, target, %s AS cost, x1, x2, y1, y2 FROM map_way %s' % (cost, where)

    # create sql query for pgrouting dijkstra
    # return sql query string
    def weighted_ways_dijkstra(self):
        where = self.where_clause()
        cost = self.cost_clause()
        return 'SELECT id, source, target, %s AS cost FROM map_way %s' % (cost, where)

    # given routing params, create WHERE clause of SQL query
    # return string
    def where_clause(self):
        weightclasses = WeightClass.objects.all()
        whereparts = []
        for wc in weightclasses:
            part = wc.get_where_clauses(self.params[wc.classname])
            if part:
                whereparts.append(part)
        if whereparts:
            where = 'WHERE ' + ' AND '.join(whereparts)
        else:
            where = ''
        return where

    # given routing params, create cost column definition
    # return string
    def cost_clause(self):
        weightclasses = WeightClass.objects.all()
        cases = []
        for wc in weightclasses:
            cases += wc.get_when_clauses(self.params[wc.classname])
        if cases:
            return 'CASE %s ELSE "length" END' % (' '.join(cases))
        else:
            return 'length'

    def extra_where(self):
        return self.where_clause().replace('WHERE ', '')




