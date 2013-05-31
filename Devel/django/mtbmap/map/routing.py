#!/usr/bin/python
# -*- coding: utf-8 -*-

# Global imports
from datetime import datetime
from map.mathfunctions import total_seconds, hypotenuse
import libxml2
import operator
from copy import deepcopy

# Django imports
from django.db import connections
from django.contrib.gis.geos import *

# Local imports
from map.models import Way, WeightCollection, WEIGHTS, THRESHOLD

MAP_DB = 'osm_data'

def line_string_to_points(line_string):
    '''
    Parse line geometry, represented as a string.
    return array of GEOS Points
    '''
    latlngs = [coord.strip().replace('LatLng(', '').replace(')','') for coord in line_string.replace('[', '').replace(']', '').split(',')]
    point_strings = [latlngs[i+1] + ' ' + latlngs[i] for i in range(0, len(latlngs), 2)]
    return [GEOSGeometry('SRID=4326;POINT(%s)' % point) for point in point_strings]

class RoutePoint:
    '''
    Represents points given by user. Finds optimal way, splits it
    and creates vertice for routing.
    '''
    def __init__(self, point, params):
        self.point = point
        self.params = params
        self.nearest_way = self.find_nearest_way(self.point)
        self.to_source, self.to_target, self.vertice_id, self.to_nearest_way = self.nearest_way.split(self.point)

    def find_nearest_way(self, point):
        '''
        Find nearest way from given point(latlon) and apply weight of the way.
        return Way
        '''
        # initial distance radius in degrees
        radius = 0.002
        bbox = point.buffer(radius).envelope
        found = False
        while not found:
            bbox = point.buffer(radius).envelope
            ways = Way.objects.filter(the_geom__bboverlaps=bbox).extra(where=[self.params.where]).distance(point).order_by('distance')
            if ways.count():
                best_weight = ways[0].weight(self.params.raw_params) * ways[0].distance.km
                nearest_way = ways[0]
                for way in ways:
                    distance = way.distance.km
                    if distance>best_weight:
                        found=True
                        break
                    else:
                        weighted_distance = way.weight(self.params.raw_params) * way.distance.km
                        if weighted_distance<best_weight:
                            best_weight = weighted_distance
                            nearest_way = way
            radius *= 2
        return nearest_way
    
    def delete_temp_ways(self):
        '''
        Delete splitted temporal ways at the end of route search.
        '''
        self.to_source.delete()
        self.to_target.delete()


class MultiRoute:
    '''
    Wrapper for route searching, contains all route points and connects
    results of route search.
    '''
    def __init__(self, points, flat_params):
        self.params = RouteParams(flat_params)
        self.points = points
        self.length = 0
        self.cost = 0
        self.status = 'init'
        self.geojson_features = []
        self.route_points = self._create_route_points()
        
    def _create_route_points(self):
        return [RoutePoint(point, self.params) for point in self.points]
            
    def geojson(self):
        '''
        Create GeoJSON like object of type FeatureCollection.
        '''
        return {
            'type': 'FeatureCollection',
            'properties': {
                'status': self.status,
                'length': self.length
            },
            'features': self.geojson_features
        }

    def search_index(self):
        '''
        Compute ratio between cost and real length of the road
        '''
        if self.length>0:
            return self.cost/self.length
        else:
            return -1

    def find_multiroute(self):
        '''
        Find route between all points, according to given params.
        '''
        start = datetime.now()
        for i in range(len(self.route_points)-1):
            start_point = self.route_points[i]
            end_point = self.route_points[i+1]
            route = Route(start_point, end_point, self.params)
            route.find_best_route()
            if route.status == 'notfound':
                self.status = route.status
            self.length += route.length
            self.cost += route.cost
            self.geojson_features += route.geojson()
        for point in self.route_points:
            point.delete_temp_ways()
        if self.status=='init':
            self.status = 'success'
        end = datetime.now()
        print 'Find MultiRoute duration:', total_seconds(end - start)
        return self.status

class Route:
    '''
    Represents route between start and end point. Triggers astar or dijkstra
    search.
    '''
    def __init__(self, start_point, end_point, params):
        self.status = 'init'
        self.start_route_point = start_point
        self.end_route_point = end_point
        self.params = params
        self.length = 0
        self.cost = 0
        self.ways = None

    def find_best_route(self):
        '''
        Find route with minimal cost.
        '''
        start_point = self.start_route_point.point
        end_point = self.end_route_point.point
        start_way = self.start_route_point.nearest_way
        end_way = self.end_route_point.nearest_way
        if start_way.id == end_way.id:
            # both endpoints on the same way
            way_part = start_way.point_to_point(start_point, end_point)
            self.status = 'success'
            self.ways = [way_part]
            self.length = way_part.length
            self.cost = self.length * way_part.weight(self.params.raw_params)
            return self.status
        else:
            start_id = self.start_route_point.vertice_id
            to_start_way = self.start_route_point.to_nearest_way
            end_id = self.end_route_point.vertice_id
            to_end_way = deepcopy(self.end_route_point.to_nearest_way)
            
            limit_way = self.insert_limit_way(start_id, end_id, start_point, end_point)
            # use dijkstra or astar search
            edge_ids = self.astar(start_id, end_id)
#            edge_ids = self.dijkstra(start_id, end_id)
            if limit_way.id in edge_ids:
                self.status = 'notfound'
                limit_way.length = limit_way.length/THRESHOLD
                self.ways = [limit_way]
                self.length = limit_way.length
            else:
                self.status = 'success'
                ways = [to_start_way]
                routed_ways = self._get_routed_ways(edge_ids[:-1])
                ways += self._correct_ways_orientation(routed_ways)
                to_end_way.the_geom.reverse()
                ways.append(to_end_way)
                self.ways = ways
                self.length = sum([way.length for way in self.ways])
            limit_way.delete()
            return self.status

    def _get_routed_ways(self, edge_ids):
        '''
        Retreive route ways from database in order.
        '''
        unordered = Way.objects.filter(pk__in=edge_ids)
        for way in unordered:
            way.index = edge_ids.index(way.id)
        return sorted(unordered, key=operator.attrgetter('index'))

    def _correct_ways_orientation(self, ways):
        '''
        Correct orientation of ways geometry, so that end points are connected.
        '''
        first = ways[0]
        corrected_ways = []
        if first.source < 0:
            next_node = first.target
        else:
            next_node = first.source
            first.the_geom.reverse()
        corrected_ways.append(first)
        for way in ways[1:]:
            if way.source == next_node:
                next_node = way.target
            else:
                next_node = way.source
                way.the_geom.reverse()
            corrected_ways.append(way) 
        return corrected_ways
    

    def geojson(self):
        '''
        Route GeoJSON representation.
        Finds route at first, if it is initialized only.
        '''
        if self.status=='init':
            self.find_best_route()
        return [way.feature(self.params.raw_params, self.status) for way in self.ways]

    def search_index(self):
        '''
        Compute ratio between cost and real length of the road.
        '''
        if self.length>0:
            return self.cost/self.length
        else:
            return -1

    def astar(self, source, target):
        '''
        Search route from source to target points with A Star algorithm
        implemented by pgRouting.
        return array of edge IDs of Way objects
        '''
#        start = datetime.now()
        cursor = connections[MAP_DB].cursor()
        sql = self.params.sql_astar_buffer(self._st_buffer())
#        print self.params.sql_astar
        cursor.execute("SELECT edge_id, cost FROM shortest_path_astar(%s, %s, %s, false, %s)", [sql, source, target, self.params.reverse])
        rows = cursor.fetchall()
        edge_ids = [elem[0] for elem in rows]
        self.cost = sum([elem[1] for elem in rows])
#        end = datetime.now()
#        print 'astar finished', total_seconds(end - start)
        return edge_ids

    def dijkstra(self, source, target):
        '''
        Search route from source to target points with Dijkstra algorithm
        implemented by pgRouting.
        return array of edge IDs of Way objects
        '''
        cursor = connections[MAP_DB].cursor()
        cursor.execute("SELECT edge_id FROM shortest_path(%s, %s, %s, false, %s)", [self.params.sql_dijkstra, source, target, self.params.reverse])
        rows = cursor.fetchall()
        edge_ids = [elem[0] for elem in rows]
        self.cost = sum([elem[1] for elem in rows])
        return edge_ids

    def insert_limit_way(self, start_id, end_id, start_point, end_point):
        '''
        Insert into DB Way between start and end points. Can be used as threshold for route searching.
        return Way
        '''
        limit_way = Way( name='',
                         x1=start_point.x,
                         x2=end_point.x,
                         y1=start_point.y,
                         y2=end_point.y,
                         source=start_id,
                         target=end_id,
                         highway='temp'
                    )
        line = LineString((limit_way.x1, limit_way.y1), (limit_way.x2, limit_way.y2))
        line.set_srid(4326)
        limit_way.the_geom = line
        limit_way.save()        
        # workaround to compute correct length
        limit_way.length = THRESHOLD * Way.objects.length().get(pk=limit_way.id).length.km
        limit_way.reverse_cost = limit_way.length
        limit_way.save()
        return limit_way
    
    def _st_buffer(self):
        '''
        Returns buffer around line connecting start and end point.
        Represented as Extended Well-Known Text (EWKT).
        '''
        start_point = self.start_route_point.point
        end_point = self.end_route_point.point
        dist_divised = hypotenuse(start_point.x, start_point.y, end_point.x, end_point.y)/5
        radius = max(0.02,dist_divised)
        buffer = LineString(start_point, end_point).buffer(radius)
        buffer.set_srid(4326)
        return buffer.ewkt


class RouteParams:
    '''
    Parameters and preferences of route search.
    '''
    def __init__(self, flat_params):
        self.raw_params = self._recreate_params(flat_params)
        self.reverse = self.raw_params['global'].has_key('oneway')
        self.where = '(id IS NOT NULL)'
        self.cost = 'length'
        self.reverse_cost = 'reverse_cost'
        self.raw_params['preferred_classes'] = self._preferred_classes()
        self.weight_collection = WeightCollection.objects.get(pk=self.raw_params['weights']['template'])
        self.weight_collection.vehicle = self.raw_params['global']['vehicle']
        self._cost_and_where()

    def weighted_ways_astar(self):
        '''
        Create sql query for pgRouting A Star.
        return sql query string
        '''
        where = 'WHERE ' + self.where + " OR highway='temp'"
        if self.reverse:
            return 'SELECT id, source::int4, target::int4, %s AS cost, %s AS reverse_cost, x1, x2, y1, y2 FROM map_way %s' % (self.cost, self.reverse_cost, where)
        else:
            return 'SELECT id, source::int4, target::int4, %s AS cost, x1, x2, y1, y2 FROM map_way %s' % (self.cost, where)

    def weighted_ways_dijkstra(self):
        '''
        Create sql query for pgRouting Dijkstra.
        return sql query string
        '''
        where = "WHERE " + self.where + " OR highway='temp'"
        if self.reverse:
            return 'SELECT id, source::int4, target::int4, %s AS cost, %s AS reverse_cost FROM map_way %s' % (self.cost, self.reverse_cost, where)
        else:
            return 'SELECT id, source::int4, target::int4, %s AS cost FROM map_way %s' % (self.cost, where)

    def sql_astar_buffer(self, buffer):
        old = self.where
        self.where = "(the_geom && ST_GeomFromText('%s')) AND (%s)" % (buffer, self.where)
        sql_astar = self.weighted_ways_astar()
        self.where = old
        return sql_astar

    def _cost_and_where(self):
        '''
        Create cost column definition and where clause.
        '''
        self.cost, self.reverse_cost, self.where = self.weight_collection.get_cost_where_clause(self.raw_params)
    
    def _preferred_classes(self):
        preferred_classes = []
        if self.raw_params.has_key('preferred'):
            preferred_classes += self.raw_params['preferred'].keys()
        return preferred_classes

    def _recreate_params(self, flat_params):
        '''
        Given flat JSON like object, create better python dictionary.
        '''
        new = {}
        for p in flat_params:
            classname, feature = p['name'].split('__')
            if not classname in new:
                new[classname] = {}
            new[classname][feature] = p['value']
        return new
    
    def dump_params(self):
        collection = WeightCollection.objects.get(name='default')
        return collection.dump_params(self.raw_params)

def create_gpx(points):
    '''
    Simple creation of GPX XML string.
    '''
    output = libxml2.parseDoc('<gpx/>')
    root_node = output.getRootElement()
    root_node.setProp('creator', 'http://mtbmap.cz/')
    root_node.setProp('version', '1.1')
    root_node.setProp('xmlns', 'http://www.topografix.com/GPX/1/1')
    root_node.setProp('xmlns:xsi', 'http://www.w3.org/2001/XMLSchema-instance')
    root_node.setProp('xsi:schemaLocation', 'http://www.topografix.com/GPX/1/1 gpx.xsd')
    rte_node = libxml2.newNode('rte')
    for point in points:
        rtept = libxml2.newNode('rtept')
        rtept.setProp('lat', str(point[0]))
        rtept.setProp('lon', str(point[1]))
        rte_node.addChild(rtept)
    root_node.addChild(rte_node)
    return output.serialize('utf-8', 1)
        
    