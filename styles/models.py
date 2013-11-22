# -*- coding: utf-8 -*-

# Global imports
from math import log
import libxml2
import mapnik
from string import upper
from os import remove, system
import os.path
import PIL.Image
from transmeta import TransMeta

# Django imports
from django.db import models, transaction
from django.core.files import File
from django.conf import settings
from django.utils.translation import activate, ugettext_lazy as _

# Local imports
from styles.xmlfunctions import *

zooms = [250000000000, 500000000, 200000000, 100000000, 50000000, 25000000, 12500000,
6500000, 3000000, 1500000, 750000, 400000, 200000, 100000, 50000, 25000, 12500, 5000, 2500, 1000, 500, 250, 125]

style_path = settings.MAPNIK_STYLES
db_password = settings.DATABASES['default']['PASSWORD']
LANG_CODES = [lang_code for lang_code, lang_name in settings.LANGUAGES]

class StylesModel(models.Model):
    PROPERTIES = ()

    class Meta:
        abstract = True

    def write_xml_properties(self, node):
        for property in self.PROPERTIES:
            set_xml_param(node, self._xml_property_name(property), getattr(self, property))

    def import_xml_properties(self, node):
        for property in self.PROPERTIES:
            default = getattr(self, property)
            value = xpath_query(node, './@%s' % self._xml_property_name(property))
            # Don't replace empty string for None
            if not (default=='' and value==None):
                setattr(self, property, value)

    def zoom_to_scale(self, zoom, max=True):
        if not max:
            # minzoom
            zoom += 1
        return str(zooms[zoom])

    def scale_to_zoom(self, scale, max=True):
        zoom = zooms.index(int(scale))
        if not max:
            zoom -= 1
        return zoom

    def _xml_property_name(self, property):
        return property.replace('_', '-')


class Map(StylesModel):
    PROPERTIES = (
        'srs', 'background_color', 'background_image', 'font_directory', 'buffer_size',
        'paths_from_xml', 'maximum_extent', 'minimum_version',
    )
    name = models.CharField(max_length=200)
    background_color = models.CharField(max_length=200, null=True, blank=True,
                                        default='rgba(255, 255, 255, 0)')
    background_image = models.CharField(max_length=400, null=True, blank=True)
    font_directory = models.CharField(max_length=400, null=True, blank=True)
    srs = models.CharField('Spatial reference system', max_length=400)
    buffer_size = models.PositiveIntegerField(default=0, null=True, blank=True)
    maximum_extent = models.CharField(max_length=400, null=True, blank=True)
    paths_from_xml = models.NullBooleanField(default=True)
    minimum_version = models.CharField(max_length=20, null=True, blank=True)

    layers = models.ManyToManyField('Layer', through='MapLayer')
    styles = models.ManyToManyField('Style', through='StyleMap')

    def __unicode__(self):
        return '%i, %s' % (self.id, self.name)

    @transaction.commit_manually
    def import_map(self, path, name=None):
        try:
            # open document and create xPath context
            doc = libxml2.readFile(path, 'utf-8', 2)
            ctxt = doc.xpathNewContext()
            node = ctxt.xpathEval('/Map')[0]

            # save basic map info
            self.import_xml_properties(node)
            if not name:
                # use filename without extension as map name
                name = path.split('/')[-1].split('.')[0]
            self.name = name
            self.save()

            # save styles
            style_nodes = ctxt.xpathEval('//Style')
            for node in style_nodes:
                style = Style()
                new_style = style.import_style(node)
                stylemap = StyleMap()
                stylemap.map_id = self
                stylemap.style_id = new_style
                stylemap.save()

            # save layers
            layer_nodes = ctxt.xpathEval('//Layer')
            order = 0
            for node in layer_nodes:
                layer = Layer()
                new_layer = layer.import_layer(node, self)
                maplayer = MapLayer()
                maplayer.map_id = self
                maplayer.layer_id = new_layer
                maplayer.layer_order = order
                maplayer.save()
                order += 1
            ctxt.xpathFreeContext()
            doc.freeDoc()
        except Exception as e:
            transaction.rollback()
            print e
            return None
        else:
            transaction.commit()
            return self

    def write_xml_doc(self, outputfile, scale_factor=1):
        output_doc = libxml2.parseDoc('<Map/>')
        root_node = output_doc.getRootElement()
        self.write_xml_properties(root_node)
        add_xml_fonts(root_node)
        for style in self.styles.all().order_by('name'):
            root_node.addChild(style.get_xml(scale_factor))
        for layer in self.layers.all().order_by('maplayer__layer_order'):
            root_node.addChild(layer.get_xml())
        str = output_doc.serialize('utf-8', 1)
        lines = str.split('\n')

        # insert doctype and external entities, ie. password
        lines.insert(1, '<!DOCTYPE Map [ <!ENTITY % ent SYSTEM "../inc/ent.xml.inc"> %ent; ]>')
        f = open(outputfile, 'w')
        for line in lines:
            f.write(line + '\n')
        f.close()

    def mapnik(self, height=100, width=100, scale_factor=1):
        # TODO:
        # Handle unused attributes (paths_from_xml, font_directory, minimum_version)
        # if necessary.
        m = mapnik.Map(height, width)
        if self.background_color:
            m.background_color = mapnik.Color(self.background_color.encode('utf-8'))
        if self.background_image:
            m.background_image = self.background_image.encode('utf-8')
        m.srs = self.srs.encode('utf-8')
        if self.buffer_size:
            m.buffer_size = self.buffer_size
        if self.maximum_extent:
            m.maximum_extent = self.maximum_extent.encode('utf-8')
        for style in self.styles.all():
            m.append_style(style.name.encode('utf-8'), style.mapnik(scale_factor))
        for layer in self.layers.all().order_by('maplayer__layer_order'):
            m.layers.append(layer.mapnik())
        return m

    def create_legend(self):
        legend = Legend()
        legend.map = self
        legend.save()
        legend.create()


class Layer(StylesModel):
    PROPERTIES = (
        'name', 'srs', 'clear_label_cache', 'cache_features', 'minzoom', 'maxzoom',
        'queryable', 'status', 'abstract', 'title',
    )
    ZOOM_CHOICES = zip(range(0, 21), range(0, 21))
    name = models.CharField(max_length=200)
    status = models.NullBooleanField()
    clear_label_cache = models.NullBooleanField()
    cache_features = models.NullBooleanField()
    srs = models.CharField('Spatial reference system', max_length=200)
    abstract = models.TextField(default='')
    title = models.CharField(max_length=200, default='')
    minzoom = models.IntegerField(choices=ZOOM_CHOICES, default=18, null=True, blank=True)
    maxzoom = models.IntegerField(choices=ZOOM_CHOICES, default=0, null=True, blank=True)
    queryable = models.NullBooleanField()

    datasource = models.ForeignKey('DataSource')
    maps = models.ManyToManyField('Map', through='MapLayer')
    styles = models.ManyToManyField('Style', through='StyleLayer')

    def __unicode__(self):
        return 'ID: %i, %s' % (self.id, self.name)

    def import_layer(self, node, map):
        self.import_xml_properties(node)
        datasource = DataSource()
        self.datasource = datasource.import_datasource(node.xpathEval('./Datasource')[0])
        if self.minzoom:
            self.minzoom = self.scale_to_zoom(scale=self.minzoom, max=False)
        if self.maxzoom:
            self.maxzoom = self.scale_to_zoom(scale=self.maxzoom, max=True)
        self.save()
        style_names = node.xpathEval('./StyleName/text()')
        for style_name in style_names:
            stylelayer = StyleLayer()
            stylelayer.layer_id = self
            stylemaps = StyleMap.objects.filter(map_id=map)
            for sm in stylemaps:
                if sm.style_id.name == unicode(style_name.getContent()):
                    stylelayer.style_id = sm.style_id
                    break
            stylelayer.save()
        return self

    def get_xml(self):
        node = libxml2.newNode('Layer')
        self.write_xml_properties(node)
        for style in self.styles.all():
            add_xml_node(node, 'StyleName', style.name)
        node.addChild(self.datasource.get_xml())
        return node

    def mapnik(self):
        layer = mapnik.Layer(self.name.encode('utf-8'))
        layer.clear_label_cache = self.clear_label_cache
        layer.srs = self.srs.encode('utf-8')
        layer.cache_features = self.clear_label_cache
        layer.queryable = self.queryable
        if self.minzoom:
            layer.minzoom = zooms[self.minzoom + 1]
        if self.maxzoom:
            layer.maxzoom = zooms[self.maxzoom]
        if not self.status==None:
            layer.status = self.status
        layer.datasource = self.datasource.mapnik()
        for style in self.styles.all():
            layer.styles.append(style.name.encode('utf-8'))
        return layer

    def geometry(self):
        return self.datasource.geometry()

    def write_xml_properties(self, node):
        # zooms must be converted to scale
        minzoom = self.minzoom
        maxzoom = self.maxzoom
        self.minzoom = self.zoom_to_scale(zoom=self.minzoom, max=False)
        self.maxzoom = self.zoom_to_scale(zoom=self.maxzoom, max=True)
        super(Layer, self).write_xml_properties(node)
        self.minzoom = minzoom
        self.maxzoom = maxzoom


class DataSource(models.Model):
    # TODO: sync Datasource with current mapnik version.
    TYPE_CHOICES = (
        ('gdal', 'gdal'),
        ('postgis', 'postgis'),
        ('raster', 'raster'),
        ('shape', 'shape'),
    )
    type = models.CharField(max_length=10, choices=TYPE_CHOICES)

    def __unicode__(self):
        return 'ID: %i, %s' % (self.id, self.type)

    def import_datasource(self, node):
        self.type = xpath_query(node, "./Parameter[@name='type']")
        ds = None
        if self.type == 'gdal':
            ds = Gdal()
        elif self.type == 'postgis':
            ds = PostGIS()
        elif self.type == 'shape':
            ds = Shape()
        else:
            self.save()
            return self
        return ds.import_datasource(node)

    def specialized(self):
        if hasattr(self, self.type):
            return getattr(self, self.type)
        else:
            print "not specialized"
            return self

    def get_xml(self):
        datasource_node = libxml2.newNode('Datasource')
        add_xml_node_with_param(datasource_node, 'Parameter', self.type, 'name', 'type')
        self.specialized().xml_params(datasource_node)
        return datasource_node

    def mapnik(self):
        return self.specialized().mapnik()

    def geometry(self):
        return self.specialized().geometry()


class Gdal(DataSource):
    file = models.CharField(max_length=400)

    def __unicode__(self):
        return 'ID: %i, %s, %s' % (self.id, self.type, self.file)

    def import_datasource(self, node):
        self.type = 'gdal'
        self.file = xpath_query(node, "./Parameter[@name='file']")
        self.save()
        return self

    def xml_params(self, node):
        add_xml_node_with_param(node, 'Parameter', self.file, 'name', 'file')

    def mapnik(self):
        file = os.path.join(style_path, self.file)
        return mapnik.Gdal(file=str(file))

    def geometry(self):
        return self.mapnik().type().name


class PostGIS(DataSource):
    dbname = models.CharField(max_length=40)
    estimate_extent = models.NullBooleanField()
    extent = models.CharField(max_length=200, null=True, blank=True)
    host = models.CharField(max_length=200)
    password = models.CharField(max_length=200)
    port = models.PositiveIntegerField(null=True, blank=True, default=5432)
    table = models.TextField()
    user = models.CharField(max_length=40)

    def __unicode__(self):
        return 'ID: %i, %s, %s' % (self.id, self.type, self.dbname)

    def import_datasource(self, node):
        self.type = 'postgis'
        self.dbname = xpath_query(node, "./Parameter[@name='dbname']")
        self.estimate_extent = xpath_query(node, "./Parameter[@name='estimate_extent']")
        self.extent = xpath_query(node, "./Parameter[@name='extent']")
        self.host = xpath_query(node, "./Parameter[@name='host']")
        self.password = xpath_query(node, "./Parameter[@name='password']")
        self.port = xpath_query(node, "./Parameter[@name='port']")
        self.table = xpath_query(node, "./Parameter[@name='table']")
        self.user = xpath_query(node, "./Parameter[@name='user']")
        self.save()
        return self

    def xml_params(self, node):
        add_xml_node_with_param(node, 'Parameter', self.table, 'name', 'table')
        add_xml_node_with_param(node, 'Parameter', '&passwd;', 'name', 'password')
        add_xml_node_with_param(node, 'Parameter', self.host, 'name', 'host')
        add_xml_node_with_param(node, 'Parameter', self.port, 'name', 'port')
        add_xml_node_with_param(node, 'Parameter', self.user, 'name', 'user')
        add_xml_node_with_param(node, 'Parameter', self.dbname, 'name', 'dbname')
        add_xml_node_with_param(node, 'Parameter', self.estimate_extent, 'name', 'estimate_extent')
        add_xml_node_with_param(node, 'Parameter', self.extent, 'name', 'extent')

    def mapnik(self):
        return mapnik.PostGIS(dbname=self.dbname.encode('utf-8'), estimate_extent=self.estimate_extent,
                              extent=self.extent.encode('utf-8'), host=self.host.encode('utf-8'),
                              port=self.port, user=self.user.encode('utf-8'),
                              table=self.table.encode('utf-8'), password=self.password.encode('utf-8'))

    def geometry(self):
        return self.mapnik().geometry_type().name


class Shape(DataSource):
    file = models.CharField(max_length=400)
    encoding = models.CharField(max_length=40, null=True, blank=True)

    def __unicode__(self):
        return 'ID: %i, %s, %s' % (self.id, self.type, self.file)

    def import_datasource(self, node):
        self.type = 'shape'
        self.file = xpath_query(node, "./Parameter[@name='file']")
        self.format = xpath_query(node, "./Parameter[@name='encoding']")
        self.save()
        return self

    def xml_params(self, node):
        add_xml_node_with_param(node, 'Parameter', self.file, 'name', 'file')
        add_xml_node_with_param(node, 'Parameter', self.encoding, 'name', 'encoding')

    def mapnik(self):
        file = os.path.join(style_path, self.file)
        return mapnik.Shapefile(file=str(file))

    def geometry(self):
        return self.mapnik().type().name


class MapLayer(models.Model):
    map_id = models.ForeignKey('Map')
    layer_order = models.PositiveIntegerField()
    layer_id = models.ForeignKey('Layer')


class Style(StylesModel):
    PROPERTIES = ('name', 'opacity',)
    name = models.CharField(max_length=200)
    opacity = models.DecimalField(max_digits=3, decimal_places=2, null=True, blank=True)

    maps = models.ManyToManyField('Map', through='StyleMap')
    layers = models.ManyToManyField('Layer', through='StyleLayer')
    rules = models.ManyToManyField('Rule', through='RuleStyle')

    def __unicode__(self):
        return 'ID: %i, %s' % (self.id, self.name)

    def import_style(self, node):
        self.import_xml_properties(node)
        rule_nodes = node.xpathEval('./Rule')
        self.save()
        order = 0
        for node in rule_nodes:
            rule = Rule()
            new_rule = rule.import_rule(node)
            rulestyle = RuleStyle()
            rulestyle.style_id = self
            rulestyle.rule_id = new_rule
            rulestyle.order = order
            rulestyle.save()
            order += 1
        return self

    def get_xml(self, scale_factor=1):
        node = libxml2.newNode('Style')
        self.write_xml_properties(node)
        for rule in self.rules.all().order_by('rulestyle__order'):
            node.addChild(rule.get_xml(scale_factor))
        return node

    def mapnik(self, scale_factor=1):
        style = mapnik.Style()
        if self.opacity:
            style.opacity = self.opacity
        for rule in self.rules.all().order_by('rulestyle__order'):
            style.rules.append(rule.mapnik(scale_factor))
        return style


class StyleLayer(models.Model):
    style_id = models.ForeignKey('Style')
    layer_id = models.ForeignKey('Layer')


class StyleMap(models.Model):
    style_id = models.ForeignKey('Style')
    map_id = models.ForeignKey('Map')


class Rule(StylesModel):
# TODO: Add AlsoFilter
    PROPERTIES = ('name', 'title', 'filter', 'minscale', 'maxscale',)
    SCALE_CHOICES = zip(range(0, 21), range(0, 21))

    name = models.CharField(max_length=200, null=True, blank=True)
    title = models.CharField(max_length=200, null=True, blank=True)
    filter = models.CharField(max_length=2000, null=True, blank=True)
    minscale = models.IntegerField(choices=SCALE_CHOICES, default=18)
    maxscale = models.IntegerField(choices=SCALE_CHOICES, default=0)

    styles = models.ManyToManyField('Style', through='RuleStyle')
    symbolizers = models.ManyToManyField('Symbolizer', through='SymbolizerRule')

    def __unicode__(self):
        return 'ID: %i, %s, %i, %i' % (self.id, self.name, self.maxscale, self.minscale)

    def import_rule(self, node):
        self.name = xpath_query(node, './@name')
        self.title = xpath_query(node, './@title')
        self.filter = xpath_query(node, './Filter')
        if not self.filter:
            elsefilter = xpath_query(node, './ElseFilter')
            if elsefilter != None:
                self.filter = 'ELSEFILTER'
        minscale = xpath_query(node, './MinScaleDenominator')
        if minscale:
            self.minscale = self.scale_to_zoom(scale=minscale, max=False)
        maxscale = xpath_query(node, './MaxScaleDenominator')
        if maxscale:
            self.maxscale = self.scale_to_zoom(scale=maxscale, max=True)
        self.save()
        elements = node.xpathEval('./*')
        order = 0
        for element in elements:
            if element.name.endswith('Symbolizer'):
                symbolizer = Symbolizer()
                new_symbolizer = symbolizer.import_symbolizer(element)
                symbolizerrule = SymbolizerRule()
                symbolizerrule.rule_id = self
                symbolizerrule.symbid = new_symbolizer
                symbolizerrule.order = order
                symbolizerrule.save()
                order += 1
        return self

    def scale(self, factor=1):
        if factor != 1:
            zoom_shift = int(round(log(factor, 2)))
            self.minscale += zoom_shift
            self.maxscale += zoom_shift

    def get_xml(self, scale_factor=1):
        self.scale(scale_factor)
        node = libxml2.newNode('Rule')
        set_xml_param(node, 'name', self.name)
        set_xml_param(node, 'title', self.title)
        if self.filter:
            if self.filter=='ELSEFILTER':
                node.addChild(libxml2.newNode('ElseFilter'))
            else:
                filter_node = libxml2.newNode('Filter')
                filter_node.setContent(self.filter)
                node.addChild(filter_node)
        add_xml_node(node, 'MinScaleDenominator', str(zooms[self.minscale + 1]))
        add_xml_node(node, 'MaxScaleDenominator', str(zooms[self.maxscale]))
        for symbolizer in self.symbolizers.all().order_by('symbolizerrule__order'):
            node.addChild(symbolizer.specialized().get_xml(scale_factor))
        return node

    def mapnik(self, scale_factor=1, offset=True):
        self.scale(scale_factor)
        rule = mapnik.Rule()
        if self.filter:
            if self.filter=='ELSEFILTER':
                rule.set_else
            else:
                rule.filter = mapnik.Expression(self.filter.encode('utf-8'))
        if self.maxscale:
            rule.max_scale = zooms[self.maxscale]
        if self.minscale:
            rule.min_scale = zooms[self.minscale + 1]
        if self.name:
            rule.name = self.name.encode('utf-8')
        for symbolizer in self.symbolizers.all().order_by('symbolizerrule__order'):
            spec_symbolizer = symbolizer.specialized()
            if not offset and spec_symbolizer.symbtype in ['Line', 'LinePattern']:
                spec_symbolizer.offset = 0
            rule.symbols.append(spec_symbolizer.mapnik(scale_factor))
        return rule


class RuleStyle(models.Model):
    order = models.PositiveIntegerField()
    rule_id = models.ForeignKey('Rule')
    style_id = models.ForeignKey('Style')


class Symbolizer(StylesModel):
    # TODO: Add DebugSymbolizer
    CONTENT_PROPERTY = None
    SYMBOLIZER_CHOICES = (
        ('Building', 'Building'),
        ('Line', 'Line'),
        ('LinePattern', 'LinePattern'),
        ('Markers', 'Markers'),
        ('Point', 'Point'),
        ('Polygon', 'Polygon'),
        ('PolygonPattern', 'PolygonPattern'),
        ('Raster', 'Raster'),
        ('Shield', 'Shield'),
        ('Text', 'Text'),
    )
    symbtype = models.CharField(max_length=30, choices=SYMBOLIZER_CHOICES)

    rules = models.ManyToManyField('Rule', through='SymbolizerRule')

    def __unicode__(self):
        return 'ID: %i, %s' % (self.id, self.symbtype)

    def import_symbolizer(self, node):
        specialized_symbolizer = globals()[node.name]()
        specialized_symbolizer.symbtype = node.name.replace('Symbolizer', '')
        specialized_symbolizer.import_xml_properties(node)
        if specialized_symbolizer.CONTENT_PROPERTY:
            setattr(specialized_symbolizer, specialized_symbolizer.CONTENT_PROPERTY, xpath_query(node, '.'))
        specialized_symbolizer.save()
        return specialized_symbolizer

    def specialized(self):
        return getattr(self, self.symbtype.lower() + 'symbolizer')

    def scale(self, factor=1):
        pass

    def symbol_size(self):
        # tuple (height, width)
        return (None, None)


class SymbolizerRule(models.Model):
    order = models.PositiveIntegerField()
    symbid = models.ForeignKey('Symbolizer')
    rule_id = models.ForeignKey('Rule')


class BuildingSymbolizer(Symbolizer):
    PROPERTIES = ('fill', 'fill_opacity', 'height',)
    fill = models.CharField(max_length=200, default='rgb(127, 127, 127)', null=True, blank=True)
    fill_opacity = models.DecimalField(max_digits=3, decimal_places=2, null=True, blank=True)
    height = models.PositiveIntegerField()

    def __unicode__(self):
        return 'ID: %i, %s, %i' % (self.id, self.fill, self.height)

    def scale(self, factor=1):
        if factor != 1:
            self.height = int(factor * self.height)

    def get_xml(self, scale_factor=1):
        self.scale(scale_factor)
        node = libxml2.newNode('BuildingSymbolizer')
        self.write_xml_properties(node)
        return node

    def symbol_size(self):
        return (self.height, 0)


class LineSymbolizer(Symbolizer):
    PROPERTIES = (
        'stroke', 'stroke_width', 'stroke_opacity', 'stroke_linejoin',
        'stroke_linecap', 'stroke_dasharray', 'offset', 'smooth',
    )
    LINEJOIN = (
        ('bevel', 'bevel'),
        ('round', 'round'),
        ('miter', 'miter'),
        ('miter_revert', 'miter_revert'),
    )
    LINECAP = (
        ('butt', 'butt'),
        ('round', 'round'),
        ('square', 'square'),
    )
    stroke = models.CharField(max_length=200, default='rgb(0, 0, 0)', null=True, blank=True)
    stroke_width = models.DecimalField(max_digits=5, decimal_places=2, null=True, blank=True)
    stroke_opacity = models.DecimalField(max_digits=3, decimal_places=2, null=True, blank=True)
    stroke_linejoin = models.CharField(max_length=15, choices=LINEJOIN, default='round', null=True, blank=True)
    stroke_linecap = models.CharField(max_length=8, choices=LINECAP, default='butt', null=True, blank=True)
    stroke_dasharray = models.CharField(max_length=200, null=True, blank=True)
    offset = models.DecimalField(max_digits=5, decimal_places=2, null=True, blank=True)
    smooth = models.DecimalField(max_digits=3, decimal_places=2, null=True, blank=True)

    def __unicode__(self):
        return 'ID: %i, %s, %s, %s' % (self.id, self.stroke, self.stroke_width, self.stroke_dasharray)

    def scale(self, factor=1):
        if factor != 1:
            if self.stroke_width:
                self.stroke_width *= factor
            if self.stroke_dasharray:
                dash_parts = self.stroke_dasharray.split(',')
                for i in range(len(dash_parts)):
                    dash_parts[i] = str(int(int(dash_parts[i]) * factor))
                self.stroke_dasharray = ', '.join(dash_parts)
            if self.offset:
                self.offset *= factor

    def get_xml(self, scale_factor=1):
        self.scale(scale_factor)
        node = libxml2.newNode('LineSymbolizer')
        self.write_xml_properties(node)
        return node

    def mapnik(self, scale_factor=1):
        self.scale(scale_factor)
        ls = mapnik.LineSymbolizer()
        s = mapnik.Stroke()
        if self.stroke:
            s.color = mapnik.Color(self.stroke.encode('utf-8'))
        if self.stroke_width:
            s.width = float(self.stroke_width)
        if self.stroke_opacity:
            s.opacity = float(self.stroke_opacity)
        if self.stroke_linejoin:
            s.line_join = mapnik.line_join.names[self.stroke_linejoin.encode('utf-8')]
        if self.stroke_linecap:
            s.line_cap = mapnik.line_cap.names[self.stroke_linecap.encode('utf-8')]
        if self.stroke_dasharray:
            dash_parts = self.stroke_dasharray.split(',')
            for i in range(0, len(dash_parts), 2):
                s.add_dash(float(dash_parts[i]), float(dash_parts[i+1]))
        ls.stroke = s
        if self.offset:
            ls.offset = float(self.offset)
        if self.smooth:
            ls.smooth = float(self.smooth)
        return ls

    def symbol_size(self):
        if not self.stroke_width:
            self.stroke_width = 1
        if not self.offset:
            self.offset = 0
        return (0, self.stroke_width + abs(self.offset))


class LinePatternSymbolizer(Symbolizer):
    PROPERTIES = ('file',)
    # TODO: add 'base' property
    file = models.CharField(max_length=400)

    def __unicode__(self):
        return 'ID: %i, %s' % (self.id, self.file)

    def scale(self, factor=1):
        if factor == 2:
            if self.file:
                self.file = '/'.join(self.file.split('/')[0:-1]) + '/print-' + self.file.split('/')[-1]

    def get_xml(self, scale_factor=1):
        self.scale(scale_factor)
        node = libxml2.newNode('LinePatternSymbolizer')
        self.write_xml_properties(node)
        return node

    def mapnik(self, scale_factor=1):
        self.scale(scale_factor)
        lps = mapnik.LinePatternSymbolizer(mapnik.PathExpression(style_path + self.file.encode('utf-8')))
        return lps

    def symbol_size(self):
        im = PIL.Image.open(style_path + self.file.encode('utf-8'))
        height = im.size[1]
        width = im.size[0]
        return (height, width)


class MarkersSymbolizer(Symbolizer):
    PROPERTIES = (
        'allow_overlap', 'file', 'fill', 'height', 'ignore_placement', 'marker_type',
        'max_error', 'opacity', 'placement', 'spacing', 'stroke', 'stroke_opacity',
        'stroke_width', 'transform', 'width',
    )
    PLACEMENT = (
        ('point', 'point'),
        ('line', 'line'),
        ('vertex', 'vertex'),
    )
    MARKER_TYPE = (
        ('arrow', 'arrow'),
        ('ellipse', 'ellipse'),
    )
    allow_overlap = models.NullBooleanField()
    spacing = models.PositiveIntegerField(null=True, blank=True)
    max_error = models.DecimalField(max_digits=3, decimal_places=2, null=True, blank=True)
    file = models.CharField(max_length=400)
    transform = models.CharField(max_length=200, null=True, blank=True)
    opacity = models.DecimalField(max_digits=3, decimal_places=2, null=True, blank=True)
    fill = models.CharField(max_length=200, default='rgb(0, 0, 0)', null=True, blank=True)
    stroke = models.CharField(max_length=200, default='rgb(0, 0, 0)', null=True, blank=True)
    stroke_width = models.DecimalField(max_digits=5, decimal_places=2, null=True, blank=True)
    stroke_opacity = models.DecimalField(max_digits=3, decimal_places=2, null=True, blank=True)
    height = models.PositiveIntegerField()
    width = models.PositiveIntegerField()
    placement = models.CharField(max_length=10, choices=PLACEMENT, null=True, blank=True)
    ignore_placement = models.NullBooleanField()
    marker_type = models.CharField(max_length=10, choices=MARKER_TYPE, null=True, blank=True)

    def __unicode__(self):
        return 'ID: %i, %s' % (self.id, self.file)

    def scale(self, factor=1):
        if factor != 1:
            if self.spacing:
                self.spacing = int(factor * self.spacing)
            if self.stroke_width:
                self.stroke_width *= factor
        if factor == 2:
            if self.file:
                self.file = '/'.join(self.file.split('/')[0:-1]) + '/print-' + self.file.split('/')[-1]

    def get_xml(self, scale_factor=1):
        self.scale(scale_factor)
        node = libxml2.newNode('MarkersSymbolizer')
        self.write_xml_properties(node)
        return node

    def symbol_size(self):
        im = PIL.Image.open(style_path + self.file.encode('utf-8'))
        height = im.size[1]
        width = im.size[0]
        return (max(height, self.stroke_width), width)


class PointSymbolizer(Symbolizer):
    PROPERTIES = ('file', 'allow_overlap', 'opacity', 'transform', 'ignore_placement',)
    file = models.CharField(max_length=400)
    allow_overlap = models.NullBooleanField()
    opacity = models.DecimalField(max_digits=3, decimal_places=2, null=True, blank=True)
    transform = models.CharField(max_length=200, null=True, blank=True)
    ignore_placement = models.NullBooleanField()

    def __unicode__(self):
        return 'ID: %i, %s' % (self.id, self.file)

    def scale(self, factor=1):
        if factor == 2:
            if self.file:
                self.file = '/'.join(self.file.split('/')[0:-1]) + '/print-' + self.file.split('/')[-1]

    def get_xml(self, scale_factor=1):
        self.scale(scale_factor)
        node = libxml2.newNode('PointSymbolizer')
        self.write_xml_properties(node)
        return node

    def mapnik(self, scale_factor=1):
        self.scale(scale_factor)
        ps = mapnik.PointSymbolizer()
        ps.file = style_path + self.file.encode('utf-8')
        ps.filename = style_path + self.file.encode('utf-8')
        ps.allow_overlap = self.allow_overlap
        if self.opacity:
            ps.opacity = float(self.opacity)
        if self.transform:
            ps.transform = self.transform.encode('utf-8')
        ps.ignore_placement = self.ignore_placement
        return ps

    def symbol_size(self):
        im = PIL.Image.open(style_path + self.file.encode('utf-8'))
        height = im.size[1]
        width = im.size[0]
        return (height, width)


class PolygonSymbolizer(Symbolizer):
    PROPERTIES = ('fill', 'fill_opacity', 'gamma',)
    fill = models.CharField(max_length=200, default='rgb(127, 127, 127)', null=True, blank=True)
    fill_opacity = models.DecimalField(max_digits=3, decimal_places=2, null=True, blank=True)
    gamma = models.DecimalField(max_digits=3, decimal_places=2, null=True, blank=True)

    def __unicode__(self):
        return 'ID: %i, %s, %s' % (self.id, self.fill, self.fill_opacity)

    def get_xml(self, scale_factor=1):
        self.scale(scale_factor)
        node = libxml2.newNode('PolygonSymbolizer')
        self.write_xml_properties(node)
        return node

    def mapnik(self, scale_factor=1):
        self.scale(scale_factor)
        ps = mapnik.PolygonSymbolizer()
        if self.fill:
            ps.fill = mapnik.Color(self.fill.encode('utf-8'))
        if self.fill_opacity:
            ps.fill_opacity = float(self.fill_opacity)
        if self.gamma:
            ps.gamma = float(self.gamma)
        return ps

    def symbol_size(self):
        return (0, 0)


class PolygonPatternSymbolizer(Symbolizer):
    PROPERTIES = ('file',)
    file = models.CharField(max_length=400)

    def __unicode__(self):
        return 'ID: %i, %s' % (self.id, self.file)

    def scale(self, factor=1):
        if factor == 2:
            if self.file:
                self.file = '/'.join(self.file.split('/')[0:-1]) + '/print-' + self.file.split('/')[-1]

    def get_xml(self, scale_factor=1):
        self.scale(scale_factor)
        node = libxml2.newNode('PolygonPatternSymbolizer')
        self.write_xml_properties(node)
        return node

    def mapnik(self, scale_factor=1):
        self.scale(scale_factor)
        pps = mapnik.PolygonPatternSymbolizer(mapnik.PathExpression(style_path + self.file.encode('utf-8')))
        return pps

    def symbol_size(self):
        im = PIL.Image.open(style_path + self.file.encode('utf-8'))
        height = im.size[1]
        width = im.size[0]
        return (height, width)


class RasterSymbolizer(Symbolizer):
    PROPERTIES = ('opacity', 'comp_op', 'scaling',)
    COMP_OP = (
        ('grain_merge', 'grain_merge'),
        ('grain_merge2', 'grain_merge2'),
        ('multiply', 'multiply'),
        ('multiply2', 'multiply2'),
        ('divide', 'divide'),
        ('divide2', 'divide2'),
        ('screen', 'screen'),
        ('hard_light', 'hard_light'),
        ('normal', 'normal'),
    )
    SCALING = (
        ('bilinear', 'bilinear'),
        ('bilinear8', 'bilinear8'),
        ('fast', 'fast'),
    )
    opacity = models.DecimalField(max_digits=3, decimal_places=2, null=True, blank=True)
    comp_op = models.CharField(max_length=20, choices=COMP_OP, default='normal', null=True, blank=True)
    scaling = models.CharField(max_length=10, choices=SCALING, default='bilinear8', null=True, blank=True)

    def __unicode__(self):
        return 'ID: %i, %s, %s' % (self.id, self.comp_op, self.opacity)

    def get_xml(self, scale_factor=1):
        self.scale(scale_factor)
        node = libxml2.newNode('RasterSymbolizer')
        self.write_xml_properties(node)
        return node

    def mapnik(self, scale_factor=1):
        self.scale(scale_factor)
        rs = mapnik.RasterSymbolizer()
        if self.opacity:
            rs.opacity = float(self.opacity)
        if self.comp_op:
            rs.comp_op = mapnik.CompositeOp().names[self.comp_op.encode('utf-8')]
        if self.scaling:
            rs.scaling = mapnik.scaling_method.names[upper(self.scaling.encode('utf-8'))]
        return rs

    def symbol_size(self):
        return (0, 0)


class ShieldSymbolizer(Symbolizer):
    PROPERTIES = (
        'allow_overlap', 'avoid_edges', 'character_spacing', 'dx', 'dy',
        'face_name', 'file', 'fill', 'fontset_name', 'halo_fill',
        'halo_radius', 'horizontal_alignment', 'justify_alignment',
        'line_spacing', 'minimum_distance', 'minimum_padding',
        'opacity', 'placement', 'shield_dx', 'shield_dy', 'size',
        'spacing', 'text_opacity', 'text_transform', 'transform',
        'unlock_image', 'vertical_alignment', 'wrap_before',
        'wrap_character', 'wrap_width',
    )
    CONTENT_PROPERTY = 'name'
    HORIZONTAL = (
        ('left', 'left'),
        ('middle', 'middle'),
        ('right', 'right'),
    )
    PLACEMENT = (
        ('point', 'point'),
        ('line', 'line'),
        ('vertex', 'vertex'),
    )
    TEXT_TRANSFORM = (
        ('none', 'none'),
        ('toupper', 'toupper'),
        ('tolower', 'tolower'),
    )
    VERTICAL = (
        ('top', 'top'),
        ('middle', 'middle'),
        ('bottom', 'bottom'),
    )
    allow_overlap = models.NullBooleanField()
    avoid_edges = models.NullBooleanField()
    character_spacing = models.PositiveIntegerField(null=True, blank=True)
    dx = models.IntegerField(null=True, blank=True)
    dy = models.IntegerField(null=True, blank=True)
    face_name = models.CharField(max_length=200, null=True, blank=True)
    file = models.CharField(max_length=400)
    fill = models.CharField(max_length=200, default='rgb(0, 0, 0)', null=True, blank=True)
    fontset_name = models.CharField(max_length=200, null=True, blank=True)
    halo_fill = models.CharField(max_length=200, null=True, blank=True)
    halo_radius = models.PositiveIntegerField(null=True, blank=True)
    horizontal_alignment = models.CharField(max_length=10, choices=HORIZONTAL, null=True, blank=True)
    justify_alignment = models.CharField(max_length=10, choices=HORIZONTAL, null=True, blank=True)
    line_spacing = models.PositiveIntegerField(null=True, blank=True)
    minimum_distance = models.PositiveIntegerField(null=True, blank=True)
    minimum_padding = models.DecimalField(max_digits=5, decimal_places=2, null=True, blank=True)
    name = models.CharField(max_length=200, null=True, blank=True)
    opacity = models.DecimalField(max_digits=3, decimal_places=2, null=True, blank=True)
    placement = models.CharField(max_length=10, choices=PLACEMENT, null=True, blank=True)
    shield_dx = models.IntegerField(null=True, blank=True)
    shield_dy = models.IntegerField(null=True, blank=True)
    size = models.PositiveIntegerField(null=True, blank=True)
    spacing = models.PositiveIntegerField(null=True, blank=True)
    text_opacity = models.DecimalField(max_digits=3, decimal_places=2, null=True, blank=True)
    text_transform = models.CharField(max_length=200, choices=TEXT_TRANSFORM, null=True, blank=True)
    unlock_image = models.NullBooleanField()
    vertical_alignment = models.CharField(max_length=10, choices=VERTICAL, null=True, blank=True)
    wrap_before = models.NullBooleanField()
    wrap_character = models.CharField(max_length=200, null=True, blank=True)
    wrap_width = models.PositiveIntegerField(null=True, blank=True)
    transform = models.CharField(max_length=200, null=True, blank=True)

    def __unicode__(self):
        return 'ID: %i, %s' % (self.id, self.file)

    def scale(self, factor=1):
        if factor != 1:
            if self.character_spacing:
                self.character_spacing = int(factor * self.character_spacing)
            if self.dx:
                self.dx = int(factor * self.dx)
            if self.dy:
                self.dy = int(factor * self.dy)
            if self.halo_radius:
                self.halo_radius = int(factor * self.halo_radius)
            if self.line_spacing:
                self.line_spacing = int(factor * self.line_spacing)
            if self.minimum_distance:
                self.minimum_distance = int(factor * self.minimum_distance)
            if self.minimum_padding:
                self.minimum_padding = float(factor * self.minimum_padding)
            if self.shield_dx:
                self.shield_dx = int(factor * self.shield_dx)
            if self.shield_dy:
                self.shield_dy = int(factor * self.shield_dy)
            if self.size:
                self.size = int(factor * self.size)
            if self.spacing:
                self.spacing = int(factor * self.spacing)
            if self.wrap_width:
                self.wrap_width = int(factor * self.wrap_width)
        if factor == 2:
            if self.file:
                self.file = '/'.join(self.file.split('/')[0:-1]) + '/print-' + self.file.split('/')[-1]

    def get_xml(self, scale_factor=1):
        self.scale(scale_factor)
        node = libxml2.newNode('ShieldSymbolizer')
        set_xml_content(node, self.name)
        self.write_xml_properties(node)
        return node

    def mapnik(self, scale_factor=1):
        self.scale(scale_factor)
        if self.name:
            name = mapnik.Expression(self.name.encode('utf-8'))
        else:
            name = mapnik.Expression('[osm_id]')
        font_name = 'DejaVu Sans Bold'
        if self.face_name:
            font_name = self.face_name.encode('utf-8')
        text_size = 10
        if self.size != None:
            text_size = self.size
        text_color = mapnik.Color('black')
        if self.fill:
            text_color = mapnik.Color(self.fill.encode('utf-8'))
        path = mapnik.PathExpression(style_path + self.file.encode('utf-8'))
        ss = mapnik.ShieldSymbolizer(name, font_name, text_size, text_color, path)
        ss.allow_overlap = self.allow_overlap
        ss.avoid_edges = self.avoid_edges
        if self.character_spacing:
            ss.character_spacing = self.character_spacing
        displacement = (0, 0)
        if self.dx:
            displacement = (self.dx, 0)
        if self.dy:
            displacement = (displacement[0], self.dy)
        ss.displacement = displacement
        if self.fontset_name:
            fs = mapnik.Fontset(self.fontset_name.encode('utf-8'))
            fs.add_face_name(self.fontset_name.encode('utf-8'))
            ss.fontset = fs
        if self.halo_fill:
            ss.halo_fill = mapnik.Color(self.halo_fill.encode('utf-8'))
        if self.halo_radius:
            ss.halo_radius = self.halo_radius
        if self.horizontal_alignment:
            ss.horizontal_alignment = mapnik.horizontal_alignment.names[self.horizontal_alignment.encode('utf-8')]
        if self.justify_alignment:
            ss.justify_alignment = mapnik.justify_alignment.names[self.justify_alignment.encode('utf-8')]
        if self.line_spacing:
            ss.line_spacing = self.line_spacing
        if self.minimum_distance:
            ss.minimum_distance = self.minimum_distance
        if self.minimum_padding:
            ss.minimum_padding = self.minimum_padding
        if self.opacity:
            ss.opacity = self.opacity
        if self.placement:
            ss.label_placement = mapnik.label_placement.names[self.placement.encode('utf-8')]
        shield_displacement = (0, 0)
        if self.dx:
            shield_displacement = (self.shield_dx, 0)
        if self.dy:
            shield_displacement = (shield_displacement[0], self.shield_dy)
        ss.shield_displacement = shield_displacement
        if self.spacing:
            ss.label_spacing = self.spacing
        if self.text_opacity:
            ss.text_opacity = self.text_opacity
        if self.text_transform:
            if self.text_transform == 'none' or self.text_transform == 'capitalize':
                ss.text_transform = mapnik.text_transform.names[self.text_transform.encode('utf-8')]
            else:
                name = self.text_transform.encode('utf-8')[2:] + 'case'
                ss.text_transform = mapnik.text_transform.names[name]
        if self.unlock_image:
            ss.unlock_image = self.unlock_image
        if self.vertical_alignment:
            ss.vertical_alignment = mapnik.vertical_alignment.names[self.vertical_alignment.encode('utf-8')]
        ss.wrap_before = self.wrap_before
        if self.wrap_character:
            ss.wrap_char = self.wrap_character.encode('utf-8')
        if self.wrap_width:
            ss.wrap_width = self.wrap_width
        if self.transform:
            ss.transform = self.transform.encode('utf-8')
        return ss

    def symbol_size(self):
        im = PIL.Image.open(style_path + self.file.encode('utf-8'))
        height = im.size[1]
        width = im.size[0]
        if not self.dx:
            self.dx = 0
        if not self.dy:
            self.dy = 0
        return (height + abs(self.dx), width + abs(self.dy))


class TextSymbolizer(Symbolizer):
    # TODO:
    # Add other properties to class methods: orientation, placement_type,
    # placements, upright, rotate_displacement, halo_rasterizer, largest_bbox_only
    #
    # Add support to placement type: list
    PROPERTIES = (
        'allow_overlap', 'avoid_edges', 'character_spacing', 'clip', 'dx', 'dy',
        'face_name', 'fill', 'fontset_name', 'force_odd_labels', 'halo_fill',
        'halo_radius', 'horizontal_alignment', 'justify_alignment',
        'label_position_tolerance', 'line_spacing', 'max_char_angle_delta',
        'minimum_distance', 'minimum_padding', 'minimum_path_length',
        'opacity', 'orientation', 'placement', 'placement_type', 'placements',
        'rotate_displacement', 'size', 'spacing', 'text_ratio', 'text_transform',
        'upright', 'vertical_alignment', 'wrap_before', 'wrap_character',
        'wrap_width', 'halo_rasterizer', 'largest_bbox_only',
    )
    CONTENT_PROPERTY = 'name'
    HORIZONTAL = (
        ('left', 'left'),
        ('middle', 'middle'),
        ('right', 'right'),
    )
    PLACEMENT = (
        ('point', 'point'),
        ('line', 'line'),
        ('vertex', 'vertex'),
    )
    TEXT_TRANSFORM = (
        ('none', 'none'),
        ('toupper', 'toupper'),
        ('tolower', 'tolower'),
    )
    VERTICAL = (
        ('top', 'top'),
        ('middle', 'middle'),
        ('bottom', 'bottom'),
    )
    PLACEMENT_TYPE = (
        ('dummy', 'dummy'),
        ('simple', 'simple'),
        ('list', 'list'),
    )
    UPRIGHT = (
        ('right', 'right'),
        ('left', 'left'),
        ('auto', 'auto'),
        ('right_only', 'right_only'),
        ('left_only', 'left_only'),
    )
    HALO_RASTERIZER = (
        ('fast', 'fast'),
        ('full', 'full'),
    )

    # content field
    name = models.CharField(max_length=200, null=True, blank=True)

    # whole symbolizer options
    text_ratio = models.PositiveIntegerField(null=True, blank=True)
    wrap_width = models.PositiveIntegerField(null=True, blank=True)
    wrap_before = models.NullBooleanField()
    spacing = models.PositiveIntegerField(null=True, blank=True)
    label_position_tolerance = models.PositiveIntegerField(null=True, blank=True)
    force_odd_labels = models.NullBooleanField()
    max_char_angle_delta = models.DecimalField(max_digits=5, decimal_places=2, null=True, blank=True)
    halo_rasterizer = models.CharField(max_length=10, choices=HALO_RASTERIZER, null=True, blank=True)
    dx = models.IntegerField(null=True, blank=True)
    dy = models.IntegerField(null=True, blank=True)
    avoid_edges = models.NullBooleanField()
    minimum_distance = models.PositiveIntegerField(null=True, blank=True)
    allow_overlap = models.NullBooleanField()
    placement = models.CharField(max_length=10, choices=PLACEMENT, null=True, blank=True)
    vertical_alignment = models.CharField(max_length=10, choices=VERTICAL, null=True, blank=True)
    horizontal_alignment = models.CharField(max_length=10, choices=HORIZONTAL, null=True, blank=True)
    justify_alignment = models.CharField(max_length=10, choices=HORIZONTAL, null=True, blank=True)
    opacity = models.DecimalField(max_digits=3, decimal_places=2, null=True, blank=True)
    minimum_padding = models.DecimalField(max_digits=5, decimal_places=2, null=True, blank=True)
    minimum_path_length = models.DecimalField(max_digits=5, decimal_places=2, null=True, blank=True)
    orientation = models.DecimalField(max_digits=5, decimal_places=2, null=True, blank=True)
    rotate_displacement = models.NullBooleanField()
    placement_type = models.CharField(max_length=10, choices=PLACEMENT_TYPE, null=True, blank=True)
    placements = models.TextField(null=True, blank=True)
    upright = models.CharField(max_length=10, choices=UPRIGHT, null=True, blank=True)
    clip = models.NullBooleanField()
    largest_bbox_only = models.NullBooleanField()

    # character formatting
    face_name = models.CharField(max_length=200, null=True, blank=True)
    fontset_name = models.CharField(max_length=200, null=True, blank=True)
    size = models.PositiveIntegerField(null=True, blank=True)
    fill = models.CharField(max_length=200, default='rgb(0, 0, 0)', null=True, blank=True)
    halo_fill = models.CharField(max_length=200, null=True, blank=True)
    halo_radius = models.PositiveIntegerField(null=True, blank=True)
    character_spacing = models.PositiveIntegerField(null=True, blank=True)
    line_spacing = models.PositiveIntegerField(null=True, blank=True)
    wrap_character = models.CharField(max_length=200, null=True, blank=True)
    text_transform = models.CharField(max_length=200, choices=TEXT_TRANSFORM, null=True, blank=True)

    def __unicode__(self):
        return 'ID: %i, %i, %s' % (self.id, self.size, self.fill)

    def scale(self, factor=1):
        if factor != 1:
            if self.character_spacing:
                self.character_spacing = int(factor * self.character_spacing)
            if self.dx:
                self.dx = int(factor * self.dx)
            if self.dy:
                self.dy = int(factor * self.dy)
            if self.halo_radius:
                self.halo_radius = int(factor * self.halo_radius)
            if self.label_position_tolerance:
                self.label_position_tolerance = int(factor * self.label_position_tolerance)
            if self.line_spacing:
                self.line_spacing = int(factor * self.line_spacing)
            if self.minimum_distance:
                self.minimum_distance = int(factor * self.minimum_distance)
            if self.size:
                self.size = int(factor * self.size)
            if self.spacing:
                self.spacing = int(factor * self.spacing)
            if self.wrap_width:
                self.wrap_width = int(factor * self.wrap_width)
            if self.minimum_padding:
                ss.minimum_padding = self.minimum_padding
            if self.minimum_path_length:
                ss.minimum_path_length = self.minimum_path_length

    def get_xml(self, scale_factor=1):
        self.scale(scale_factor)
        node = libxml2.newNode('TextSymbolizer')
        set_xml_content(node, self.name)
        self.write_xml_properties(node)
        return node

    def mapnik(self, scale_factor=1):
        self.scale(scale_factor)
        ts = mapnik.TextSymbolizer()
        ts.allow_overlap = self.allow_overlap
        ts.avoid_edges = self.avoid_edges
        if self.character_spacing:
            ts.character_spacing = self.character_spacing
        displacement = (0, 0)
        if self.dx:
            displacement = (self.dx, 0)
        if self.dy:
            displacement = (displacement[0], self.dy)
        ts.displacement = displacement
        if self.face_name:
            ts.face_name = self.face_name.encode('utf-8')
        if self.fill:
            ts.fill = mapnik.Color(self.fill.encode('utf-8'))
        if self.fontset_name:
            fs = mapnik.FontSet(self.fontset_name.encode('utf-8'))
            fs.add_face_name(self.fontset_name.encode('utf-8'))
            ts.fontset = fs
        ts.force_odd_labels = self.force_odd_labels
        if self.halo_fill:
            ts.halo_fill = mapnik.Color(self.halo_fill.encode('utf-8'))
        if self.halo_radius:
            ts.halo_radius = self.halo_radius
        if self.horizontal_alignment:
            ts.horizontal_alignment = mapnik.horizontal_alignment.names[self.horizontal_alignment.encode('utf-8')]
        if self.justify_alignment:
            ts.justify_alignment = mapnik.justify_alignment.names[self.justify_alignment.encode('utf-8')]
        if self.label_position_tolerance:
            ts.label_position_tolerance = self.label_position_tolerance
        if self.line_spacing:
            ts.line_spacing = self.line_spacing
        if self.max_char_angle_delta:
            ts.maximum_angle_char_delta = float(self.max_char_angle_delta)
        if self.minimum_distance:
            ts.minimum_distance = self.minimum_distance
        if self.opacity:
            ts.text_opacity = self.opacity
        if self.placement:
            ts.label_placement = mapnik.label_placement.names[self.placement.encode('utf-8')]
        if self.size != None:
            ts.text_size = self.size
        if self.spacing:
            ts.label_spacing = self.spacing
        if self.text_transform:
            if self.text_transform == 'none' or self.text_transform == 'capitalize':
                ts.text_transform = mapnik.text_transform.names[self.text_transform.encode('utf-8')]
            else:
                name = self.text_transform.encode('utf-8')[2:] + 'case'
                ts.text_transform = mapnik.text_transform.names[name]
        if self.text_ratio:
            ts.text_ratio = self.text_ratio
        if self.vertical_alignment:
            ts.vertical_alignment = mapnik.vertical_alignment.names[self.vertical_alignment.encode('utf-8')]
        ts.wrap_before = self.wrap_before
        if self.wrap_character:
            ts.wrap_char = self.wrap_character.encode('utf-8')
        if self.wrap_width:
            ts.wrap_width = self.wrap_width
        if self.minimum_padding:
            ts.minimum_padding = self.minimum_padding
        if self.minimum_path_length:
            ts.minimum_path_length = self.minimum_path_length
        if self.clip:
            ts.clip = self.clip
        return ts

    def symbol_size(self):
        if not self.dx:
            self.dx = 0
        return (self.size + abs(self.dx), 0)


class Legend(models.Model):
    map = models.OneToOneField('Map')

    def __unicode__(self):
        return 'ID: %i,Map: %s' % (self.id, self.map)

    def create(self):
        for layer in self.map.layers.all().order_by('maplayer__layer_order'):
            for style in layer.styles.all():
                for rule in style.rules.all().order_by('rulestyle__order'):
                    if rule.name:
                        for zoom in range(rule.maxscale, rule.minscale + 1):
                            l = LegendItem()
                            l.save_legend(self, rule, zoom)

    def create_legenditems(self, zoom):
        for li in self.legenditem_set.filter(zoom=zoom):
            li.delete()
        for layer in self.map.layers.all().order_by('maplayer__layer_order'):
            for style in layer.styles.all():
                for rule in style.rules.all().order_by('rulestyle__order').exclude(maxscale__gt=zoom).exclude(minscale__lt=zoom):
                    if rule.name:
                        l = LegendItem()
                        l.save_legend(self, rule, zoom)
        self.create_images(zoom)
        self.create_images(zoom, 2)

    def create_images(self, zoom, scale_factor=1):
        for item in self.legenditem_set.select_related().filter(zoom=zoom):
            if item.legend_item_name.name:
                item.create_image(scale_factor)

    def create_all_images(self, scale_factor=1):
        for zoom in range(0, 19):
            self.create_images(zoom, scale_factor)

    def create_all_name_images(self, font_size=12, scale_factor=1):
        for lin in LegendItemName.objects.all():
            lin.render_names(font_size, scale_factor)

    def estimated_min_size(self, zoom, gap):
        items = self.legend_items(zoom)
        params = items.aggregate(models.Max('width'), models.Max('title_width'))
        width = 3*gap + params['width'] + params['title_width']
        height = gap
        for item in items:
            height += max(item.title_height, item.height)
        return width*height

    def legend_items(self, zoom):
        return self.legenditem_set.select_related().filter(zoom=zoom).exclude(image='').order_by('legend_item_name__group', 'legend_item_name__order', 'legend_item_name__slug')


class LegendItem(models.Model):
    SCALE_CHOICES = zip(range(0, 21), range(0, 21))
    legend_item_name = models.ForeignKey('LegendItemName', null=True, blank=True)
    image = models.ImageField(upload_to='legend/', height_field='height', width_field='width', null=True, blank=True)
    image_highres = models.ImageField(upload_to='legend/', height_field='height_highres', width_field='width_highres', null=True, blank=True)
    geometry = models.CharField(max_length=200, null=True, blank=True)
    zoom =  models.IntegerField(choices=SCALE_CHOICES)
    height = models.PositiveIntegerField(null=True, blank=True)
    width = models.PositiveIntegerField(null=True, blank=True)
    height_highres = models.PositiveIntegerField(null=True, blank=True)
    width_highres = models.PositiveIntegerField(null=True, blank=True)

    legend = models.ForeignKey('Legend')
    rules = models.ManyToManyField('Rule', through='LegendItemRule')

    def __unicode__(self):
        return 'ID: %i, %s, %i' % (self.id, self.legend_item_name, self.zoom)

    def save_legend(self, legend, rule, zoom):
        related = legend.legenditem_set.select_related().filter(legend_item_name__slug=rule.name, zoom=zoom)
        if not len(related):
            self.geometry = rule.styles.all()[0].layers.all()[0].geometry()
            self.zoom = zoom
            self.legend = legend
            lins = LegendItemName.objects.filter(slug=rule.name)
            if lins.count():
                self.legend_item_name = lins[0]
            else:
                lin = LegendItemName(slug=rule.name)
                lin.save()
                print 'Created new LegendItemName( slug=%s, id=%s). Fill other fields.' % (lin.slug, lin.id)
                self.legend_item_name = lin
            self.save()
            lr = LegendItemRule()
            lr.legenditem_id = self
            lr.order = 1
            lr.rule_id = rule
            lr.save()
        else:
            for legenditem in related:
                lr = LegendItemRule()
                lr.legenditem_id = legenditem
                lr.rule_id = rule
                lr.order = len(legenditem.rules.all()) + 1
                lr.save()

    def image_size(self, scale_factor=1):
        size = (12, 12)
        add_outline = 0
        for rule in self.rules.order_by('legenditemrule__order'):
            for symbolizer in rule.symbolizers.all().order_by('symbolizerrule__order'):
                if symbolizer.symbtype=='Text':
                    continue
                specialized = symbolizer.specialized()
                specialized.scale(scale_factor)
                symb_size = specialized.symbol_size()
                size = (max(size[0], int(symb_size[0]) + 1), max(size[1], int(symb_size[1]) + 1))
                # increase the size, if polygon has an outline
                if self.geometry=='Collection' and 'Line' in symbolizer.symbtype:
                    add_outline = max(add_outline, int(float(symb_size[1]) + 0.5))
        if add_outline:
            size = (size[0] + add_outline, size[1] + add_outline)
        return size

    def create_image(self, scale_factor=1):
        if self.legend_item_name.slug.startswith('_'):
            return
        if scale_factor>=2:
            if self.image_highres and os.path.exists(self.image_highres.path):
                remove(self.image_highres.path)
        else:
            if self.image and os.path.exists(self.image.path):
                remove(self.image.path)
        size = self.image_size(scale_factor)
        name = ('%i_%i.png' % (self.zoom, self.id)).encode('utf-8')
        if scale_factor >= 2:
            name = 'highres_' + name
        directory = 'media/legend/'
        tmpfilename = directory + 'tmp/' + name
        if self.render(size, tmpfilename, scale_factor):
            #render() returns non-zero integer, ie. image is not rendered
            pass
        else:
            if scale_factor>=2:
                if self.image_highres:
                    self.image_highres.delete()
                self.image_highres.save(directory + name, File(open(tmpfilename)))
            else:
                if self.image:
                    self.image.delete()
                self.image.save(directory + name, File(open(tmpfilename)))
            self.save()
            remove(tmpfilename)

    def render(self, size, path, scale_factor=1):
        if self.geometry in ('Point', 'LineString', 'Collection'):
            ds = mapnik.GeoJSON(file='styles/fixtures/geojson_%s.json' % self.geometry.lower())
        else:
            # Raster... special legend creation should be provided
            print "Raster Layer, legend not created, id: %s, slug: %s" % (self.id, self.legend_item_name.slug)
            return 1
        s = mapnik.Style()
        for rule in self.rules.all().order_by('legenditemrule__order'):
            rule.filter = None
#            rule.maxscale = 0
#            rule.minscale = 18

            # TODO: offset should not be disabled for all rules. Use Rule.name ! notation.
            mapnik_rule = rule.mapnik(scale_factor=scale_factor, offset=False)
            mapnik_rule.max_scale = zooms[0]
            mapnik_rule.min_scale = zooms[19]
            s.rules.append(mapnik_rule)
        if self.geometry=='LineString':
            size = (size[1], 3*size[1])
        if self.geometry=='Collection':
            size = (35, 50)
        l = mapnik.Layer('legend')
        l.datasource = ds
        l.styles.append('Legend_style')
        # create map object with specified width and height
        m = mapnik.Map(size[1], size[0])
        # transparent background
        m.background = mapnik.Color('rgba(0,0,0,0)')
        m.append_style('Legend_style', s)
        m.layers.append(l)
        prj = mapnik.Projection("+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over")
        lon = 0.01
        lat = 0.01
        if size[0] > size[1]:
            lat = lat * size[0] / size[1]
        else:
            lon = lat * size[1] / size[0]
        ll = (-lon, -lat, lon, lat)
        c0 = prj.forward(mapnik.Coord(ll[0],ll[1]))
        c1 = prj.forward(mapnik.Coord(ll[2],ll[3]))
        bbox = mapnik.Box2d(c0.x,c0.y,c1.x,c1.y)
        m.zoom_to_box(bbox)
        im = mapnik.Image(size[1], size[0])
        mapnik.render(m, im)
        view = im.view(0, 0, size[1], size[0])
        view.save(path, 'png')
        return 0


class LegendItemName(models.Model):
    __metaclass__ = TransMeta

    slug = models.SlugField(max_length=200, unique=True)
    name = models.CharField(verbose_name=_('name'), max_length=200, null=True, blank=True)
    group = models.CharField(max_length=200, null=True, blank=True)
    order = models.PositiveIntegerField(null=True, blank=True)
    image = models.ImageField(verbose_name=_('image'), upload_to='legend/', height_field='height', width_field='width', null=True, blank=True)
    image_highres = models.ImageField(verbose_name=_('highres image'), upload_to='legend/', height_field='height_highres', width_field='width_highres', null=True, blank=True)
    height = models.PositiveIntegerField(null=True, blank=True)
    width = models.PositiveIntegerField(null=True, blank=True)
    height_highres = models.PositiveIntegerField(null=True, blank=True)
    width_highres = models.PositiveIntegerField(null=True, blank=True)

    class Meta:
        translate = ('name', 'image', 'image_highres',)

    def __unicode__(self):
        return self.slug

    def render_names(self, font_size=12, scale_factor=1):
        font_size = scale_factor*font_size
        height = font_size + font_size/2
        width = max(font_size*len(self.name)*2/3, 150)
        for lang_code in LANG_CODES:
            activate(lang_code)
            image = getattr(self, 'image_%s' % lang_code)
            image_highres = getattr(self, 'image_highres_%s' % lang_code)
            filename = 'name_%s_%s.png' % (lang_code, self.slug)
            if scale_factor>=2:
                filename = 'highres_%s' % filename
            directory = 'media/legend'
            tmppath = os.path.join(directory, 'tmp', filename)
            path = os.path.join(directory, filename)
            fo = file(tmppath + '.svg', 'w')
            fo.write('<?xml version="1.0" encoding="UTF-8"?>\n')
            fo.write('<!DOCTYPE svg PUBLIC "-//W3C//DTD SVG 1.0//EN" "http://www.w3.org/TR/2001/REC-SVG-20010904/DTD/svg10.dtd">\n')
            fo.write('<svg width="%i" height="%i" xmlns="http://www.w3.org/2000/svg">\n' % (width, height))
            fo.write('    <text fill="black" text-anchor="left" font-family="Dejavu Sans" x="%i" y="%i" font-size="%i" >%s</text>' % (2, height-font_size/2, font_size, self.name.encode('utf-8')))
            fo.write('</svg>')
            fo.close()
            system("rsvg-convert -o %s %s" % (tmppath, tmppath + '.svg'))
            remove(tmppath + '.svg')
            if scale_factor>=2:
                if image_highres:
                    if os.path.exists(image_highres.path):
                        remove(image_highres.path)
                    image_highres.delete()
                image_highres.save(path, File(open(tmppath)))
            else:
                if image:
                    if os.path.exists(image.path):
                        remove(image.path)
                    image.delete()
                image.save(path, File(open(tmppath)))
            self.save()
            remove(tmppath)


class LegendItemRule(models.Model):
    order = models.PositiveIntegerField()
    rule_id = models.ForeignKey('Rule')
    legenditem_id = models.ForeignKey('LegendItem')
