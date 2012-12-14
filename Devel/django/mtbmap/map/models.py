#!/usr/bin/python
# -*- coding: utf-8 -*-
from django.db import models
from django.contrib.gis.db import models as geomodels
from django.contrib.gis.geos import *
from copy import deepcopy
from random import randint

SAC_SCALE_CHOICES = (
 (0, 'hiking'),
 (1, 'mountain_hiking'),
 (2, 'demanding_mountain_hiking'),
 (3, 'alpine_hiking'),
 (4, 'demanding_alpine_hiking'),
 (5, 'difficult_alpine_hiking'),
)
class Map(models.Model):
    name = models.CharField(max_length=200)
    attribution = models.CharField(max_length=400)
    url = models.CharField(max_length=400)

    def __unicode__(self):
        return u"Map(%s,%s)" % (self.name, self.url)

    def as_dict(self):
        return {'name':self.name, 'url':self.url}

class Way(geomodels.Model):
    class_id = models.BigIntegerField(null=True, blank=True)
    length = models.FloatField(null=True, blank=True)
    name = models.CharField(max_length=200)
    x1 = models.FloatField()
    y1 = models.FloatField()
    x2 = models.FloatField()
    y2 = models.FloatField()
    reverse_cost = models.FloatField(null=True, blank=True)
    osm_id = models.PositiveIntegerField(null=True, blank=True)
    the_geom = geomodels.LineStringField()
    source = models.IntegerField()
    target = models.IntegerField()
    osm_source = models.PositiveIntegerField(null=True, blank=True)
    osm_target = models.PositiveIntegerField(null=True, blank=True)

    #cost attributes
    highway = models.TextField(null=True, blank=True)
    tracktype = models.IntegerField(null=True, blank=True)
    oneway = models.TextField(null=True, blank=True)
    access = models.TextField(null=True, blank=True)
    bicycle = models.TextField(null=True, blank=True)
    foot = models.TextField(null=True, blank=True)
    incline = models.TextField(null=True, blank=True)
    width = models.FloatField(null=True, blank=True)
    surface = models.TextField(null=True, blank=True)
    smoothness = models.TextField(null=True, blank=True)
    maxspeed = models.TextField(null=True, blank=True)
    osmc = models.TextField(null=True, blank=True)
    mtbscale = models.IntegerField(null=True, blank=True)
    mtbscaleuphill = models.IntegerField(null=True, blank=True)
    sac_scale = models.IntegerField(null=True, blank=True)
    network = models.TextField(null=True, blank=True)

    objects = geomodels.GeoManager()

    def __unicode__(self):
        return u"Way(%s, %s)" % (self.osm_id, self.highway)

    # project point(latlon) on the way
    # return tuple (projected point on the way, index of the previous way coordinate)
    def point_intersection(self, point):
        segment, index = self._nearest_segment(point)
        a = Point(segment[0])
        b = Point(segment[-1])
        ux = b.x - a.x
        uy = b.y - a.y
        t = ((point.x - a.x)*ux + (point.y - a.y)*uy)/(ux**2 + uy**2)
        if t<=0:
            ret = a
        elif t>=1:
            ret = b
        else:
            x = a.x + ux*t
            y = a.y + uy*t
            ret = Point(x, y)
        return ret, index

    # find nearest segment of given line
    # return as tuple (linestring, index of starting point of segment)
    def _nearest_segment(self, point):
        distances = [ LineString(self.the_geom[i], self.the_geom[i+1]).distance(point) for i in range(len(self.the_geom)-1)]
        index = distances.index(min(distances))
        return LineString(self.the_geom[index], self.the_geom[index+1]), index

    # given point(latlon), find out geometries of splitted points
    # return tuple (line to source, line to target)
    def lines_to_endpoints(self, point):
        split_point, index = self.point_intersection(point)
        to_source = LineString(self.the_geom[:index+1] + [split_point])
        to_target = LineString([split_point] + self.the_geom[index+1:])
        return (to_source, to_target)

    # project two points(latlon) on the way, find line between the projections
    # return LineString
    # used when both points have the same nearest way
    def point_to_point(self, start, end):
        start_split, start_index = self.point_intersection(start)
        end_split, end_index = self.point_intersection(end)
        if start_index<end_index:
            return LineString([start_split] + self.the_geom[start_index+1:end_index+1] + [end_split])
        else:
            return LineString([end_split] + self.the_geom[end_index+1:start_index+1] + [start_split])

    # split way in the projected point, save them to the database
    # return tuple (line to source ID, line to target ID, new routing vertice ID)
    # these new ways should be deleted after route is found
    def split(self, point):
        to_source = deepcopy(self)
        to_source.id = None
        to_target = deepcopy(self)
        to_target.id = None
        to_source.the_geom, to_target.the_geom = self.lines_to_endpoints(point)
        split_point, index = self.point_intersection(point)
        vertice = randint(-100000, -100)
        to_source.target = vertice
        to_target.source = vertice
        to_source.x2 = split_point.x
        to_source.y2 = split_point.y
        to_target.x1 = split_point.x
        to_target.y1 = split_point.y
        to_source.osm_target = None
        to_target.osm_source = None
        to_source.save()
        to_target.save()

        wts = Way.objects.filter(id=to_source.id).length()
        to_source.length = wts[0].length.km
        wtt = Way.objects.filter(id=to_target.id).length()
        to_target.length = wtt[0].length.km
        to_source.save()
        to_target.save()
        return (to_source.id, to_target.id, vertice)

    def weight(self, params, distance=None):
        weights = [1, 2, 3, 4, 5]
        preferences = {'highway':1, 'tracktype':1, 'width':1, 'sac_scale':1, 'mtbscale':1, 'surface':1, 'osmc':1}
        print params
#        print self.__dict__
        for feature in preferences.keys():
#            print feature
            if self.__dict__[feature]!=None:
                if params[feature].has_key('min'):
                    try:
                        print 'has min', feature
                        minvalue = float(params[feature]['min'])
                    except ValueError:
                        pass
                    else:
                        if self.__dict__[feature]<minvalue:
                            preferences[feature] = 5
            if self.__dict__[feature]!=None:
                if params[feature].has_key('max'):
                    try:
                        print 'has max', feature
                        maxvalue = float(params[feature]['max'])
                    except ValueError:
                        pass
                    else:
                        if self.__dict__[feature]>maxvalue:
                            preferences[feature] = 5
#                if feature=='width':
#                    try:
#                        maxwidth = float(params[feature]['max'])
#                        minwidth = float(params[feature]['min'])
#                    except ValueError:
#                        preferences[feature] = 1
#                        continue
#                    else:
#                        if self.width>maxwidth or self.width<minwidth:
#                            preferences[feature] = 5
#                            continue
#
#                print 'ok', feature
                try:
                    preferences[feature] = int(params[feature][str(self.__dict__[feature])])
                except KeyError, ValueError:
                    print params[feature]
                    print 'KeyError', feature, self.__dict__[feature]
                    preferences[feature] = 1
        if distance:
            return weights[max(preferences.values())-1]*distance
        else:
            return weights[max(preferences.values())-1]*self.length

    def compute_class_id(self, class_conf):
        class_id = ''
        for c in class_conf:
            classname = c['classname']
            types = c['types']
            if self.__dict__[classname]==None:
                class_id += str(c['null'])
            else:
                if classname=='incline':
                    in_percents = self.incline.replace('%', '')
                    if self.incline != in_percents:
                        try:
                            percents = float(in_percents)
                        except ValueError:
                            id = c['null']
                        else:
                            if percents>=0: id = types['positive']
                            else: id = types['negative']
                        class_id += str(id)
                        continue
                if classname=='width':
                    cleansed = self.width.replace(',', '.')
                    limits = sorted([float(elem) for elem in types.keys()])
                    try:
                        value = float(cleansed)
                    except ValueError:
                        id = c['null']
                    else:
                        id = c['null']
                        for l in limits:
                            if value<l:
                                id = types[str(l)]
                                break
                else:
                    try:
                        id = types[self.__dict__[classname]]
                    except KeyError:
                        print classname, 'unexpected type:', self.__dict__[classname]
                        id = c['null']
                class_id += str(id)
        return int(class_id)


#class Vertice(geomodels.Model):
#    the_geom = geomodels.PointField()
#
#    objects = geomodels.GeoManager()
#
#
#class Node(geomodels.Model):
#    the_geom = geomodels.PointField()
#
#    objects = geomodels.GeoManager()
#

class WeightClass(models.Model):
    classname = models.CharField(max_length=40)
    cz = models.CharField(max_length=40)
    type = models.CharField(max_length=40)
    order = models.PositiveIntegerField(null=True, blank=True)
    max = models.FloatField(null=True, blank=True)
    min = models.FloatField(null=True, blank=True)

    def orderedweights(self):
        return self.weight_set.all().order_by('feature')

    def __unicode__(self):
        return self.classname

    def get_when_clauses(self, params):
        clauses = []
#        print params
        for w in self.orderedweights():
            try:
                preference = int(params[w.feature])
            except ValueError:
                print 'ValueError', self.classname, w.feature, params
            else:
                when = """WHEN "%s"::text='%s' THEN "length"*%s """ % (self.classname, w.feature, preference)
                clauses.append(when)
        return clauses

    def get_where_clauses(self, params):
        andparts = []
        if params.has_key('max'):
            try:
                value = float(params['max'])
                condition = '"%s"<=%s' % (self.classname, value)
            except ValueError:
                print 'ValueError', self.classname, params
            else:
                andparts.append(condition)
        if params.has_key('min'):
            try:
#                print 'MINVALUE:', params['min']
                value = float(params['min'])
                condition = '"%s">=%s' % (self.classname, value)
            except ValueError:
                print 'ValueError', self.classname, params
            else:
                andparts.append(condition)
        for w in self.orderedweights():
            preference = params[w.feature]
            if preference=='5':
                condition = """ "%s"::text!='%s'""" % (self.classname, w.feature)
                andparts.append(condition)
        andcondition = ' AND '.join(andparts)
        if andcondition:
            return '("%s" is NULL OR (%s))' % (self.classname, andcondition)
        else:
            return


class Weight(models.Model):
    PREFERENCE_CHOICES = (
        (1, 'Ideální'),
        (2, 'Vhodné'),
        (3, 'Nevadí'),
        (4, 'Výjimečně'),
        (5, 'Vůbec'),
    )
    classname = models.ForeignKey('WeightClass')
    feature = models.CharField(max_length=40)
    cz = models.CharField(max_length=40)
    preference = models.PositiveIntegerField(null=True, blank=True, choices=PREFERENCE_CHOICES)
    order = models.PositiveIntegerField(null=True, blank=True)
    description = models.TextField(null=True, blank=True)
    def __unicode__(self):
        return self.feature

class GPXDoc(models.Model):
    docfile = models.FileField(upload_to='gpx')
