# -*- coding: utf-8 -*-

# Global imports
import simplejson as json
from textwrap import wrap

# Django imports
from django.db import models
from django.contrib.gis.db import models as geomodels

## PLANET_OSM_MODELS
class OsmModel(geomodels.Model):
    osm_id = models.BigIntegerField()
    
    class Meta:
        abstract = True
        
    def __unicode__(self):
        return u"OsmModel(%s)" % (self.osm_id)

    def geojson_feature(self, tags=[]):
        '''
        Create GeoJSON feature representation.
        '''
        feature = {}
        feature["type"] = "Feature"
        feature["id"] = self.id
        feature["properties"] = {"osm_id": self.osm_id}
        if self.has_geometry():
            feature["geometry"] = json.loads(self.the_geom.geojson)
        feature["properties"]["popupContent"] = self.popupContent(tags)
        feature["properties"]["label"] = self._wrapText(self.label(tags[0]), 30)
        return feature
    
    def geojson_feature_string(self, tags=[]):
        '''
        Dump GeoJSON representation as string.
        '''
        return json.dumps(self.geojson_feature(tags))
    
    def has_geometry(self):
        return hasattr(self, "the_geom") and self.the_geom != None 

    def label(self, attribute='name'):
        '''
        Value of label. Created as value for given attribute.
        '''
        if hasattr(self, attribute):
            return getattr(self, attribute)
        else:
            return ""
    
    def popupContent(self, att_list):
        '''
        Feature popup content, label created from first item in attribute 
        list is used as heading.
        '''
        content = ''
        if len(att_list)>0:
            header = self.label(att_list[0])
            if header:
                content += '<h3>%s</h3>' % (header)
            content += '<p class="geojsonPopup">'
            for attr in att_list[1:]:
                if hasattr(self, attr) and getattr(self, attr):
                    content += '%s: %s <br>' % (attr, getattr(self, attr))
            content += 'OSM ID: %s' % (self.osmLink())
            content += '</p>'
        else:
            content += '<h2>%s</h2>' % (self.osmLink())
        return content
    
    def osmLink(self, url='http://www.openstreetmap.org/browse/', geometry='way'):
        '''
        HTML anchor linking to OSM browse page by default.
        '''
        if self.osm_id < 0:
            # hacked 32 bit integer problem, osm_id is negative
            if geometry == 'node':
                self.osm_id += 2**32
            else:
                # osm_id is negative if it is a relation
                self.osm_id = abs(self.osm_id)
                geometry = 'relation'
        href = '%s%s/%s' % (url, geometry, self.osm_id)
        return '<a target="_blank" href="%s">%s</a>' % (href, self.osm_id)
    
    def _wrapText(self, text, width=70, wrap_str='<br>'):
        if text:
            return wrap_str.join(wrap(text, width))
        else:
            return ''
        

class OsmPoint(OsmModel):
    the_geom = geomodels.PointField()
    name = models.CharField(max_length=400, null=True, blank=True)
    amenity = models.CharField(max_length=200, null=True, blank=True)
    ele = models.CharField(max_length=200, null=True, blank=True)
    highway = models.CharField(max_length=200, null=True, blank=True)
    historic = models.CharField(max_length=200, null=True, blank=True)
    information = models.CharField(max_length=200, null=True, blank=True)
    leisure = models.CharField(max_length=200, null=True, blank=True)
    man_made = models.CharField(max_length=200, null=True, blank=True)
    natural = models.CharField(max_length=200, null=True, blank=True)
    noexit = models.CharField(max_length=200, null=True, blank=True)
    opening_hours = models.CharField(max_length=200, null=True, blank=True)
    place = models.CharField(max_length=200, null=True, blank=True)
    protect_class = models.CharField(max_length=200, null=True, blank=True)
    railway = models.CharField(max_length=200, null=True, blank=True)
    ref = models.CharField(max_length=200, null=True, blank=True)
    ruins = models.CharField(max_length=200, null=True, blank=True)
    shop = models.CharField(max_length=200, null=True, blank=True)
    sport = models.CharField(max_length=200, null=True, blank=True)
    tourism = models.CharField(max_length=200, null=True, blank=True)

    objects = geomodels.GeoManager()
    
    def osmLink(self, url='http://www.openstreetmap.org/browse/', geometry='node'):
        return super(OsmPoint, self).osmLink(url, geometry)
    
class OsmLine(OsmModel):
    the_geom = geomodels.LineStringField()
    name = models.CharField(max_length=400, null=True, blank=True)
    mtbscale = models.CharField(verbose_name='mtb:scale', max_length=200, null=True, blank=True)
    mtbdescription = models.CharField(verbose_name='mtb:description', max_length=200, null=True, blank=True)
    mtbscaleuphill = models.CharField(verbose_name='mtb:scale:uphill', max_length=200, null=True, blank=True)
    
    objects = geomodels.GeoManager()
    

