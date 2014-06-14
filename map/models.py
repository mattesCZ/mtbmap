# -*- coding: utf-8 -*-

# Global imports
import simplejson as json
from transmeta import TransMeta

# Django imports
from django.db import models
from django.contrib.gis.geos import Polygon
from django.utils.translation import ugettext_lazy as _

# Local imports
from osm_data_processing.models import OsmPoint, OsmLine


class TileLayer(models.Model):
    __metaclass__ = TransMeta

    slug = models.SlugField(max_length=200, unique=True)
    name = models.CharField(verbose_name=_('name'), max_length=200)
    attribution = models.CharField(max_length=400)
    url = models.CharField(max_length=400)
    last_update = models.DateField(null=True, blank=True)

    class Meta:
        translate = ('name',)

    def __unicode__(self):
        return u"%s,%s" % (self.slug, self.url)

    def as_dict(self):
        return {'slug': self.slug, 'name': self.name, 'url': self.url}


class GeojsonLayer(models.Model):
    __metaclass__ = TransMeta

    slug = models.SlugField(max_length=40, unique=True)
    name = models.CharField(verbose_name=_('name'), max_length=40)
    filter = models.TextField(null=True, blank=True)
    pointGeom = models.BooleanField(default=False)
    lineGeom = models.BooleanField(default=False)
    polygonGeom = models.BooleanField(default=False)
    attributes = models.TextField(null=True, blank=True)
    min_zoom = models.PositiveIntegerField(default=13)

    class Meta:
        translate = ('name',)

    def __unicode__(self):
        return u"%s" % self.slug

    def attributes_list(self):
        """
        Cast attributes string to list.
        """
        return [attr.strip() for attr in self.attributes.split(',')]

    def geojson_feature_collection(self, bbox=(-180.0, -90.0, 180.0, 90.0)):
        """
        Create geojson feature collection with instances that intersects
        given bounding box.
        """
        bounding_box = Polygon.from_bbox(bbox)
        layer_filter = json.loads(self.filter)
        att_list = self.attributes_list()
        features = []
        if self.pointGeom:
            points = OsmPoint.objects.filter(the_geom__bboverlaps=bounding_box).filter(**layer_filter)[:200]
            features += [point.geojson_feature(att_list) for point in points]
        if self.lineGeom:
            lines = OsmLine.objects.filter(the_geom__bboverlaps=bounding_box).filter(**layer_filter)[:200]
            features += [line.geojson_feature(att_list) for line in lines]
        feature_collection = {
            "type": "FeatureCollection",
            "features": features
        }
        return json.dumps(feature_collection)


class RoutingEvaluation(models.Model):
    EVALUATION_CHOICES = (
        (1, _('Perfect')),
        (2, _('Good')),
        (3, _('Usable')),
        (4, _('Bad')),
        (5, _('Unusable')),
    )
    SPEED_CHOICES = (
        (1, _('Does not bother')),
        (2, _('Slow, but it is worth waiting')),
        (3, _('Slow, unusable')),
    )
    QUALITY_CHOICES = (
        (1, _('Great')),
        (2, _('Good, but I want more parameters')),
        (3, _('Good, but sometimes on wrong tracks')),
        (4, _('Bad, route is completely unusable')),
        (5, _("Bad, I don't understand it at all")),
    )
    params = models.TextField()
    linestring = models.TextField()
    timestamp = models.DateTimeField()
    general_evaluation = models.PositiveIntegerField(verbose_name=_('Overall rating'),
                                                     choices=EVALUATION_CHOICES, default=3)
    speed = models.PositiveIntegerField(verbose_name=_('Speed'), choices=SPEED_CHOICES, default=2)
    quality = models.PositiveIntegerField(verbose_name=_('Route quality'), choices=QUALITY_CHOICES, default=1)
    comment = models.TextField(verbose_name=_('Comment'), null=True, blank=True)
    email = models.EmailField(null=True, blank=True)

    def __unicode__(self):
        return u"%s, From: %s, Comment: '%s')" % (self.timestamp.date(), self.email, self.comment[:40])
