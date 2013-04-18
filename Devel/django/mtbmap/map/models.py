#!/usr/bin/python
# -*- coding: utf-8 -*-
from django.db import models
from django.contrib.gis.db import models as geomodels
from django.contrib.gis.geos import *
from copy import deepcopy
from random import randint
import simplejson as json
from map.mathfunctions import haversine
from map.updatemap import updatemap

SAC_SCALE_CHOICES = (
 (0, 'hiking'),
 (1, 'mountain_hiking'),
 (2, 'demanding_mountain_hiking'),
 (3, 'alpine_hiking'),
 (4, 'demanding_alpine_hiking'),
 (5, 'difficult_alpine_hiking'),
)

WEIGHTS = [1, 2, 3, 4, 5]
MAX_WEIGHT = max(WEIGHTS)
MIN_WEIGHT = min(WEIGHTS)

class Map(models.Model):
    name = models.CharField(max_length=200)
    attribution = models.CharField(max_length=400)
    url = models.CharField(max_length=400)
    last_update = models.DateField(null=True, blank=True)

    def __unicode__(self):
        return u"Map(%s,%s)" % (self.name, self.url)

    def as_dict(self):
        return {'name':self.name, 'url':self.url}
    
    def update_rendering_data(self, config_file):
        date = updatemap(config_file)
        if date:
            self.last_update = date
            self.save()
        else:
            print 'An error occured'

class Way(geomodels.Model):
    class_id = models.BigIntegerField(null=True, blank=True)
    length = models.FloatField(null=True, blank=True)
    name = models.CharField(max_length=200)
    x1 = models.FloatField()
    y1 = models.FloatField()
    x2 = models.FloatField()
    y2 = models.FloatField()
    reverse_cost = models.FloatField(null=True, blank=True)
    osm_id = models.BigIntegerField(null=True, blank=True)
    the_geom = geomodels.LineStringField()
    source = models.BigIntegerField()
    target = models.BigIntegerField()

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

    def point_intersection(self, point):
        '''
        Project Point(latlon) on the way.
        return tuple (projected point on the way, index of the previous way coordinate)
        '''
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

    def _nearest_segment(self, point):
        '''
        Find nearest segment of Way to the given point.
        return tuple (linestring, index of starting point of segment)
        '''
        distances = [ LineString(self.the_geom[i], self.the_geom[i+1]).distance(point) for i in range(len(self.the_geom)-1)]
        index = distances.index(min(distances))
        return LineString(self.the_geom[index], self.the_geom[index+1]), index

    def lines_to_endpoints(self, point):
        '''
        Project point attribute on this Way, find out geometries of this Way
        splitted in intersection point.
        return tuple (line to source, line to target)
        '''
        split_point, index = self.point_intersection(point)
        to_source = LineString(self.the_geom[:index+1] + [split_point])
        to_target = LineString([split_point] + self.the_geom[index+1:])
        return (to_source, to_target)

    def point_to_point(self, start, end):
        '''
        Project two points(latlon) on the way, find line between the projections.
        Used when both points have this Way as nearest_way.
        return Way with correctly computed geometry and length
        '''
        start_split, start_index = self.point_intersection(start)
        end_split, end_index = self.point_intersection(end)
        if start_index<end_index:
            geometry = LineString([start_split] + self.the_geom[start_index+1:end_index+1] + [end_split])
        else:
            geometry = LineString([end_split] + self.the_geom[end_index+1:start_index+1] + [start_split])
        way = deepcopy(self)
        way.id = None
        way.the_geom = geometry
        way.length = way.compute_length()
        print way.length
        return way

    def split(self, point):
        '''
        Split Way in the projected point, save both parts to the database.
        Way source or target are random negative values (new vertice).
        return tuple(way to source, way to target, new routing vertice ID)
        '''
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
        geom = LineString(point, split_point)
        geom.set_srid(4326)
        way_to_intersection = Way(the_geom=geom)
        way_to_intersection.length = way_to_intersection.compute_length()

        # workaround to compute correct lengths
        to_source.length = Way.objects.length().get(pk=to_source.id).length.km
        to_target.length = Way.objects.length().get(pk=to_target.id).length.km
        if self.length != self.reverse_cost:
            to_source.reverse_cost = self.reverse_cost
            to_target.reverse_cost = self.reverse_cost
        else:
            to_source.reverse_cost = to_source.length
            to_target.reverse_cost = to_target.length
        to_source.save()
        to_target.save()
        return (to_source, to_target, vertice, way_to_intersection)

    def weight(self, params):
        '''
        Compute weight according to given parameters.
        return int
        '''
        if self.highway=='temp':
            # Rare case, probably impossible to find correct route
            # Temporary Way should be deleted
            print 'returning temp weight', self.length, self.id
            return 3*MAX_WEIGHT
        preferences = {'highway':MIN_WEIGHT, 'tracktype':MIN_WEIGHT, 'sac_scale':MIN_WEIGHT, 'mtbscale':MIN_WEIGHT, 'surface':MIN_WEIGHT, 'osmc':MIN_WEIGHT}
        for feature_name in preferences.keys():
            feature_value = self.__dict__[feature_name]
            if feature_value!=None and params.has_key(feature_name):
                if params[feature_name].has_key('min'):
                    try:
                        minvalue = float(params[feature_name]['min'])
                    except ValueError:
                        pass
                    else:
                        if feature_value<minvalue:
                            return MAX_WEIGHT
                if params[feature_name].has_key('max'):
                    try:
                        maxvalue = float(params[feature_name]['max'])
                    except ValueError:
                        pass
                    else:
                        if feature_value>maxvalue:
                            return MAX_WEIGHT
                try:
                    preferences[feature_name] = float(params[feature_name][str(feature_value)])
                except KeyError, ValueError:
                    preferences[feature_name] = MIN_WEIGHT
        weight = max(preferences.values())
        prefer = False
        if params.has_key('prefered_classes'):
            for classname in params['prefered_classes']:
                if hasattr(self, classname):
                    value = getattr(self, classname)
                    if value:
                        prefer = True
                        break
        if prefer:
            weight = max(weight-1, MIN_WEIGHT)
        return weight

    def compute_class_id(self, class_conf):
        '''
        Compute class ID during import.
        return int
        '''
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
#                if classname=='width':
#                    cleansed = self.width.replace(',', '.')
#                    limits = sorted([float(elem) for elem in types.keys()])
#                    try:
#                        value = float(cleansed)
#                    except ValueError:
#                        id = c['null']
#                    else:
#                        id = c['null']
#                        for l in limits:
#                            if value<l:
#                                id = types[str(l)]
#                                break
#                else:
                try:
                    id = types[self.__dict__[classname]]
                except KeyError:
                    print classname, 'unexpected type:', self.__dict__[classname]
                    id = c['null']
                class_id += str(id)
        return int(class_id)

    def feature(self, params, status):
        '''
        Create GeoJSON Feature object.
        return JSON like dictionary
        '''
        return {
            'type': 'Feature',
            'id': self.id,
            'properties': {
                'weight': self.weight(params),
                'length': self.length,
                'status': status,
                'name': self.name,
                'osm_id': self.osm_id
            },
            'geometry': json.loads(self.the_geom.geojson)
        }

    def compute_length(self):
        '''
        Compute aproximate length using haversine formula.
        return length in kilometers
        '''
        coords = self.the_geom.coords
        length = 0
        for i in range(len(coords)-1):
            lon1, lat1 = coords[i]
            lon2, lat2 = coords[i+1]
            length += haversine(lon1, lat1, lon2, lat2)
        return length

class WeightCollection(models.Model):
    VEHICLE_CHOICES = (
        ('foot', 'foot'),
        ('bicycle', 'bicycle'),
    )
    name = models.CharField(max_length=40)
    oneway = models.BooleanField(default=True)
    vehicle = models.CharField(max_length=40, default='bicycle', choices=VEHICLE_CHOICES)
    
    def get_cost_where_clause(self, params):
        where = '(id IS NOT NULL)'
        cost = 'length'
        reverse_cost = ''
        preferences = {}
        reverse_cases = []
        # conditions for oneways
        if self.vehicle == 'bicycle':
            # bicycles are allowed to go in some oneways reversely
            reverse_cases += ['''WHEN (bicycle!='opposite' OR bicycle IS NULL) AND reverse_cost!=length THEN reverse_cost ''']
        elif self.vehicle == 'foot':
            # consider oneway only on paths, tracks, steps and footways
            reverse_cases += ['''WHEN highway IN ('path', 'track', 'steps', 'footway') AND reverse_cost!=length THEN reverse_cost ''']
        else:
            # probably car, never route on oneway=yes
            reverse_cases += ['''WHEN reverse_cost!=length THEN reverse_cost ''']
        whereparts = []
        whereparts += self._access()
        for wc in self.weightclass_set.all():
            if wc.classname in params:
                class_preferences = wc.get_when_clauses(params[wc.classname], params['prefered_classes'])
                for preference in class_preferences:
                     if preference in preferences:
                         preferences[preference] += class_preferences[preference]
                     else:
                         preferences[preference] = class_preferences[preference] 
                part = wc.get_where_clauses(params[wc.classname])
                if part:
                    whereparts.append(part)
        cases = []
        # use cases ordered by descending preference
        for key in sorted(preferences.iterkeys(), reverse=True):
            cases += preferences[key]
        if cases:
            reverse_cases += cases
            cost = 'CASE %s ELSE "length" END' % (' '.join(cases))
        if whereparts:
            where = "(" + " AND ".join(whereparts) + ")"
        reverse_cost = 'CASE %s ELSE "length" END' % (' '.join(reverse_cases))
        return cost, reverse_cost, where
    
    def _access(self):
        '''
        Create access clause according to given role (car, bike, pedestrian,...)
        '''
        # TODO: add vehicle access control, needs vehicle column in database and model
        access_clauses = []
        default_access = '''(access IS NULL OR access NOT IN ('no', 'private'))'''
        if self.vehicle in ('bicycle', 'foot'):
            access_restrictions = '''((access IS NULL OR access NOT IN ('no', 'private')) OR (access IN ('no', 'private') AND %s IN ('yes', 'designated')))''' % (self.vehicle)
            vehicle_restrictions = '''(%s IS NULL OR NOT %s IN ('no', 'private'))''' % (self.vehicle, self.vehicle)
            access_clauses += [access_restrictions, vehicle_restrictions]
        else:
            access_clauses.append(default_access)
        return access_clauses

    
class WeightClass(models.Model):
    classname = models.CharField(max_length=40)
    collection = models.ForeignKey('WeightCollection')
    use = models.CharField(max_length=40, default='yes')
    order = models.PositiveIntegerField(null=True, blank=True)
    max = models.FloatField(null=True, blank=True)
    min = models.FloatField(null=True, blank=True)
    prefer = models.NullBooleanField(default=None)

    class Meta:
        ordering = ('order', 'classname',)

    def __unicode__(self):
        return self.classname

    def get_when_clauses(self, params, prefered_classes):
        default = min(WEIGHTS)
        preference_to_when_dict = {}
        for w in self.weight_set.all():
            try:
                preference = int(params[w.feature])
            except ValueError:
                print 'ValueError', self.classname, w.feature, params
            else:
                if preference != default:
                    whens = []
                    for classname in prefered_classes:
                        prefered_preference = max(preference-1, MIN_WEIGHT)
                        whens.append("""WHEN "%s"::text='%s' AND "%s" IS NOT NULL
                                  THEN "length"*%s """ % (self.classname, w.feature, classname, prefered_preference)
                                  )
                    default_when = """WHEN "%s"::text='%s' THEN "length"*%s """ % (self.classname, w.feature, preference)
                    whens.append(default_when)
                    if preference in preference_to_when_dict:
                        preference_to_when_dict[preference] += whens
                    else:
                        preference_to_when_dict[preference] = whens
        return preference_to_when_dict

    def get_where_clauses(self, params):
        andparts = []
        if params.has_key('max'):
            try:
                value = float(params['max'])
                condition = '"%s"<=%s' % (self.classname, value)
            except ValueError:
                print 'ValueError', self.classname, params
            else:
                # only if smaller than default max value
                if value<self.max:
                    andparts.append(condition)
        if params.has_key('min'):
            try:
#                print 'MINVALUE:', params['min']
                value = float(params['min'])
                condition = '"%s">=%s' % (self.classname, value)
            except ValueError:
                print 'ValueError', self.classname, params
            else:
                # only if bigger than default min value
                if value>self.min:
                    andparts.append(condition)
        for w in self.weight_set.all():
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
    GUI_CHOICES = (
        ('select', 'select'),
        ('radio', 'radio'),
        ('checkbox', 'checkbox'),
    )
    classname = models.ForeignKey('WeightClass')
    feature = models.CharField(max_length=40)
    cz = models.CharField(max_length=40)
    preference = models.PositiveIntegerField(null=True, blank=True, choices=PREFERENCE_CHOICES)
    type = models.CharField(max_length=20, null=True, blank=True, choices=GUI_CHOICES)
    order = models.PositiveIntegerField(null=True, blank=True)
    description = models.TextField(null=True, blank=True)
    visible = models.BooleanField(default=True)

    class Meta:
        ordering = ('order', 'feature',)

    def __unicode__(self):
        return self.feature

class GPXDoc(models.Model):
    docfile = models.FileField(upload_to='gpx')
