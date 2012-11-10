#!/usr/bin/python
# -*- coding: utf-8 -*-
from django.db import models
from django.contrib.gis.db import models as geomodels

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
    class_id = models.PositiveIntegerField(null=True, blank=True)
    length = models.FloatField(null=True, blank=True)
    name = models.CharField(max_length=200)
    x1 = models.FloatField()
    y1 = models.FloatField()
    x2 = models.FloatField()
    y2 = models.FloatField()
    reverse_cost = models.FloatField(null=True, blank=True)
    rule = models.TextField(null=True, blank=True)
    to_cost = models.FloatField(null=True, blank=True)
    osm_id = models.PositiveIntegerField(null=True, blank=True)
    the_geom = geomodels.LineStringField()
    source = models.PositiveIntegerField()
    target = models.PositiveIntegerField()

    #cost attributes
    highway = models.TextField(null=True, blank=True)
    tracktype = models.FloatField(null=True, blank=True)
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
    mtbscale = models.FloatField(null=True, blank=True)
    mtbscaleuphill = models.FloatField(null=True, blank=True)
    sac_scale = models.FloatField(null=True, blank=True)
    network = models.TextField(null=True, blank=True)

    objects = geomodels.GeoManager()


class Vertice(geomodels.Model):
    the_geom = geomodels.PointField()
    
    objects = geomodels.GeoManager()

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
    

