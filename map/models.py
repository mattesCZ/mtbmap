# -*- coding: utf-8 -*-

# Global imports
import simplejson as json

# Django imports
from django.db import models
from django.contrib.gis.geos import Polygon

# Local imports
from osm_data_processing.models import OsmPoint, OsmLine

class Map(models.Model):
    name = models.CharField(max_length=200)
    attribution = models.CharField(max_length=400)
    url = models.CharField(max_length=400)
    last_update = models.DateField(null=True, blank=True)

    def __unicode__(self):
        return u"%s,%s" % (self.name, self.url)

    def as_dict(self):
        return {'name':self.name, 'url':self.url}


class GeojsonLayer(models.Model):
    slug = models.SlugField(max_length=40, unique=True)
    name = models.CharField(max_length=40)
    filter = models.TextField(null=True, blank=True)
    pointGeom = models.BooleanField(default=False)
    lineGeom = models.BooleanField(default=False)
    polygonGeom = models.BooleanField(default=False)
    attributes = models.TextField(null=True, blank=True)
#    minZoom = models.PositiveIntegerField(default=13)
#    maxZoom = models.PositiveIntegerField(default=18)

    def __unicode__(self):
        return u"%s" % (self.name)

    def attributes_list(self):
        '''
        Cast attributes string to list.
        '''
        return [attr.strip() for attr in self.attributes.split(',')]

    def geojson_feature_collection(self, bbox=[-180.0, -90.0, 180.0, 90.0]):
        '''
        Create geojson feature collection with instances that intersects
        given bounding box.
        '''
        bounding_box = Polygon.from_bbox(bbox)
        filter = json.loads(self.filter)
        att_list = self.attributes_list()
        features = []
        if self.pointGeom:
            points = OsmPoint.objects.filter(the_geom__bboverlaps=bounding_box).filter(**filter)[:200]
            features += [point.geojson_feature(att_list) for point in points]
        if self.lineGeom:
            lines = OsmLine.objects.filter(the_geom__bboverlaps=bounding_box).filter(**filter)[:200]
            features += [line.geojson_feature(att_list) for line in lines]
        feature_collection = {
            "type":"FeatureCollection",
            "features":features
        }
        return json.dumps(feature_collection)


class RoutingEvaluation(models.Model):
    EVALUATION_CHOICES = (
        (1, 'Dokonalé'),
        (2, 'Dobré'),
        (3, 'Použitelné'),
        (4, 'Špatné'),
        (5, 'Nepoužitelné'),
    )
    SPEED_CHOICES = (
        (1, 'Nijak neomezuje'),
        (2, 'Pomalé, ale rád si počkám'),
        (3, 'Pomalé, nepoužitelné'),
    )
    QUALITY_CHOICES = (
        (1, 'Vyhovuje'),
        (2, 'Dobré, ale chci více parametrů'),
        (3, 'Dobré, ale občas po cestách, které nechci'),
        (4, 'Špatné, nevhodně nalezená trasa'),
        (5, 'Špatné, nechápu proč se to takto chová'),
    )
    params = models.TextField()
    linestring = models.TextField()
    timestamp = models.DateTimeField()
    general_evaluation = models.PositiveIntegerField(verbose_name='Celkové hodnocení', choices=EVALUATION_CHOICES, default=3)
    speed = models.PositiveIntegerField(verbose_name='Rychlost', choices=SPEED_CHOICES, default=2)
    quality = models.PositiveIntegerField(verbose_name='Kvalita tras', choices=QUALITY_CHOICES, default=1)
    comment = models.TextField(verbose_name='Komentář', null=True, blank=True)
    email = models.EmailField(null=True, blank=True)

    def __unicode__(self):
        return u"%s, From: %s, Comment: '%s')" % (self.timestamp.date(), self.email, self.comment[:40])
