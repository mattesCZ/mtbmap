#!/usr/bin/python
# -*- coding: utf-8 -*-

from django.db import models
from math import log
import libxml2
import mapnik
from django.core import serializers
from string import upper
from django.core.files import File

zooms = [250000000000, 500000000, 200000000, 100000000, 50000000, 25000000, 12500000,
6500000, 3000000, 1500000, 750000, 400000, 200000, 100000, 50000, 25000, 12500, 5000, 2500, 1000, 500, 250, 125]

style_path = '/home/xtesar7/Devel/mtbmap-czechrep/Devel/mapnik/my_styles/'

def _add_xml_node(parent_node, name, value):
    if value != None:
        node = libxml2.newNode(name)
        node.setContent(str(value))
        parent_node.addChild(node)

def _attr_to_string(value):
    if value == None:
        return None
    elif value == True:
        return '1'
    elif value == False:
        return '0'
    else:
        if type(value).__name__=='unicode':
            if len(value) > 0:
                return str(value.encode('utf-8'))
            else:
                return None
        else:
            return str(value)

def _add_xml_css(node, parameter_name, parameter_value):
    if _attr_to_string(parameter_value) != None:
        cssnode = libxml2.newNode('CssParameter')
        cssnode.setProp('name', parameter_name.replace('_', '-'))
        cssnode.setContent(_attr_to_string(parameter_value))
        node.addChild(cssnode)

def _set_xml_param(parent_node, parameter_name, parameter_value):
    if _attr_to_string(parameter_value) != None:
        parent_node.setProp(parameter_name, _attr_to_string(parameter_value))

def _add_xml_node_with_param(parent_node, node_name, node_value, parameter_name, parameter_value):
    if _attr_to_string(node_value) != None:
        node = libxml2.newNode(node_name)
        node.setContent(_attr_to_string(node_value))
        _set_xml_param(node, parameter_name, parameter_value)
        parent_node.addChild(node)

def _add_xml_fonts(parent_node):
    _add_xml_font(parent_node, 'book-fonts', 'DejaVu Sans Book')
    _add_xml_font(parent_node, 'bold-fonts', 'DejaVu Sans Bold')
    _add_xml_font(parent_node, 'oblique-fonts', 'DejaVu Sans Oblique')
    _add_xml_font(parent_node, 'cond-book-fonts', 'DejaVu Sans Condensed')
    _add_xml_font(parent_node, 'cond-bold-fonts', 'DejaVu Sans Condensed Bold')
    _add_xml_font(parent_node, 'cond-oblique-fonts', 'DejaVu Sans Condensed Oblique')
    _add_xml_font(parent_node, 'serif-book-fonts', 'DejaVu Serif Book')
    _add_xml_font(parent_node, 'serif-bold-fonts', 'DejaVu Serif Bold')
    _add_xml_font(parent_node, 'serif-oblique-fonts', 'DejaVu Serif Italic')
    _add_xml_font(parent_node, 'cond-serif-book-fonts', 'DejaVu Serif Condensed')
    _add_xml_font(parent_node, 'cond-serif-bold-fonts', 'DejaVu Serif Condensed Bold')
    _add_xml_font(parent_node, 'extralight-fonts', 'DejaVu Sans ExtraLight')

def _add_xml_font(parent_node, name, faceName):
    fontset = libxml2.newNode('FontSet')
    fontset.setProp('name', name)
    font = libxml2.newNode('Font')
    font.setProp('face_name', faceName)
    fontset.addChild(font)
    parent_node.addChild(fontset)

def _compare_params(self_value, other_value, default=None):
    return self_value==other_value or (self_value==None and other_value==default) or (self_value==default and other_value==None)

class Map(models.Model):
    m_name = models.CharField(max_length=200, primary_key=True)
    m_abstract = models.TextField(null=True, blank=True)
    m_bgcolor = models.CharField('Background color', max_length=200,
                                 null=True, blank=True, default='rgba(255, 255, 255, 0)')
    m_srs = models.CharField('Spatial reference system', max_length=200)

    m_layers = models.ManyToManyField('Layer', through='MapLayer')

    def __unicode__(self):
        return self.m_name

    def layernames(self):
        return MapLayer.objects.filter(ml_mapname=self.m_name).order_by('ml_layerorder').values_list('ml_layername', flat=True)

    def stylenames(self):
        stylenames = []
        for layername in self.layernames():
            stylenames += StyleLayer.objects.filter(sl_layername=layername).values_list('sl_stylename', flat=True)
        return sorted(stylenames)

    def write_xml_doc(self, outputfile, scale_factor=1):
        output_doc = libxml2.parseDoc('<Map/>')
        root_node = output_doc.getRootElement()
#        _set_xml_param(root_node, 'name', self.m_name)
        _set_xml_param(root_node, 'srs', self.m_srs)
        _set_xml_param(root_node, 'bgcolor', self.m_bgcolor)
        _add_xml_fonts(root_node)
        for stylename in self.stylenames():
            style = Style.objects.get(pk=stylename)
            root_node.addChild(style.get_xml(scale_factor))
        for layername in self.layernames():
            layer = Layer.objects.get(pk=layername)
            root_node.addChild(layer.get_xml())
        str = output_doc.serialize('utf-8', 1)
        lines = str.split('\n')
        lines.insert(1, '<!DOCTYPE Map [ <!ENTITY % ent SYSTEM "../inc/ent.xml.inc"> %ent; ]>')

        f = open(outputfile, 'w')
        for line in lines:
            f.write(line + '\n')
        f.close()

    def mapnik(self, height=100, width=100):
        m = mapnik.Map(height, width)
        if self.m_bgcolor:
            m.background = mapnik.Color(self.m_bgcolor.encode('utf-8'))
        m.srs = self.m_srs.encode('utf-8')
        for stylename in self.stylenames():
            style = Style.objects.get(pk=stylename)
            m.append_style(stylename.encode('utf-8'), style.mapnik())
        for id in self.layernames():
            layer = Layer.objects.get(pk=id)
            m.layers.append(layer.mapnik())
        return m

    def create_legend(self):
        legend_items = {}
        for stylename in self.stylenames():
            ruleids = Style.objects.get(pk=stylename).ruleids()
            for id in ruleids:
                rule = Rule.objects.get(pk=id)
                if len(r_title) > 0:
                    if not r_title in legend_items:
                        legend_items[r_title] = [id]
                    else:
                        legend_items[r_title].append(id)
        for item in legend_items:
            l = Legend()
            l.import_item(legend_items[item][0])



class Layer(models.Model):
    DATATYPE_CHOICES = (
        ('gdal', 'gdal'),
        ('postgis', 'postgis'),
        ('raster', 'raster'),
    )
    DATAFORMAT_CHOICES = (
        ('png', 'png'),
        ('tiff', 'tiff'),
    )

    l_abstract = models.TextField(null=True, blank=True)
    l_clear_label_cache = models.NullBooleanField()
    l_name = models.CharField(max_length=200, primary_key=True)
    l_srs = models.CharField('Spatial reference system', max_length=200)
    l_datatype = models.CharField(max_length=10, choices=DATATYPE_CHOICES)
    l_datatable = models.TextField(null=True, blank=True)
    l_datafile = models.CharField(max_length=200, null=True, blank=True)
    l_dataformat = models.CharField(max_length=4, choices=DATAFORMAT_CHOICES, null=True, blank=True)
    l_dataextent = models.CharField(max_length=200, null=True, blank=True)

    l_maps = models.ManyToManyField('Map', through='MapLayer')

    def __unicode__(self):
        return self.l_name

    def stylenames(self):
        return StyleLayer.objects.filter(sl_layername=self.l_name).values_list('sl_stylename', flat=True)

    def maps(self):
        mapnames = MapLayer.objects.filter(ml_layername=self.l_name).values_list('ml_mapname', flat=True)
        maps = []
        for name in mapnames:
            maps.append(Map.objects.get(pk=name))
        return maps

    def get_xml(self):
        layer_node = libxml2.newNode('Layer')
        _set_xml_param(layer_node, 'name', self.l_name)
        _set_xml_param(layer_node, 'srs', self.l_srs)
        _set_xml_param(layer_node, 'clear_label_cache', self.l_clear_label_cache)
        for stylename in self.stylenames():
            _add_xml_node(layer_node, 'StyleName', stylename)
        datasource_node = libxml2.newNode('Datasource')
        _add_xml_node_with_param(datasource_node, 'Parameter', self.l_datatype, 'name', 'type')
        if self.l_datatype==unicode('gdal'):
            _add_xml_node_with_param(datasource_node, 'Parameter', self.l_datafile, 'name', 'file')
            _add_xml_node_with_param(datasource_node, 'Parameter', self.l_dataformat, 'name', 'format')
        elif self.l_datatype==unicode('postgis'):
            _add_xml_node_with_param(datasource_node, 'Parameter', self.l_datatable, 'name', 'table')
            _add_xml_node_with_param(datasource_node, 'Parameter', '&passwd;', 'name', 'password')
            _add_xml_node_with_param(datasource_node, 'Parameter', 'localhost', 'name', 'host')
            _add_xml_node_with_param(datasource_node, 'Parameter', '5432', 'name', 'port')
            _add_xml_node_with_param(datasource_node, 'Parameter', 'xtesar7', 'name', 'user')
            _add_xml_node_with_param(datasource_node, 'Parameter', 'gisczech', 'name', 'dbname')
            _add_xml_node_with_param(datasource_node, 'Parameter', 'false', 'name', 'estimate_extent')
            _add_xml_node_with_param(datasource_node, 'Parameter', self.l_dataextent, 'name', 'extent')
        layer_node.addChild(datasource_node)
        return layer_node

    def usages(self):
        return len(MapLayer.objects.filter(ml_layername=self))

    def mapnik(self):
        layer = mapnik.Layer(self.l_name.encode('utf-8'))
        layer.clear_label_cache = self.l_clear_label_cache
        layer.srs = self.l_srs.encode('utf-8')
#        if self.l_datatype==unicode('postgis'):
#            datasource = mapnik.Datasource(type=self.l_datatype.encode('utf-8'), table=self.l_datatable.encode('utf-8'))
#        elif self.l_datatype==unicode('gdal'):
#            layer.datasource = datasource
        for stylename in self.stylenames():
            layer.styles.append(stylename.encode('utf-8'))
        return layer


class MapLayer(models.Model):
    ml_mapname = models.ForeignKey(Map)
    ml_layerorder = models.PositiveIntegerField()
    ml_layername = models.ForeignKey(Layer)

    def __unicode__(self):
        return 'Map: %s, Layer: %s' % (self.ml_mapname.m_name,
                                       self.ml_layername.l_name)


class Style(models.Model):
    s_name = models.CharField(max_length=200, primary_key=True)
    s_abstract = models.TextField(null=True, blank=True)

    def __unicode__(self):
        return self.s_name

    def ruleids(self):
        return RuleStyle.objects.filter(rs_stylename=self.s_name).order_by('rs_order').values_list('rs_ruleid', flat=True)

    def get_xml(self, scale_factor=1):
        style_node = libxml2.newNode('Style')
        _set_xml_param(style_node, 'name', self.s_name)
        for id in self.ruleids():
            rule = Rule.objects.get(pk=id)
            style_node.addChild(rule.get_xml(scale_factor))
        return style_node

    def usages(self):
        return len(StyleLayer.objects.filter(sl_stylename=self))

    def mapnik(self):
        style = mapnik.Style()
        for id in self.ruleids():
            rule = Rule.objects.get(pk=id)
            style.rules.append(rule.mapnik())
        return style


class StyleLayer(models.Model):
    sl_stylename = models.ForeignKey(Style)
    sl_layername = models.ForeignKey(Layer)

    def __unicode__(self):
        return 'Layer: %s, Style: %s' % (self.sl_layername.l_name,
                                         self.sl_stylename.s_name)


class Rule(models.Model):
    SCALE_CHOICES = zip(range(0, 21), range(0, 21))

    r_id = models.PositiveIntegerField(primary_key=True)
    r_name = models.CharField(max_length=200, null=True, blank=True)
    r_title = models.CharField(max_length=200, null=True, blank=True)
    r_abstract = models.TextField(null=True, blank=True)
    r_filter = models.CharField(max_length=2000, null=True, blank=True)
    r_minscale = models.IntegerField(choices=SCALE_CHOICES, default=18)
    r_maxscale = models.IntegerField(choices=SCALE_CHOICES, default=0)

    def __unicode__(self):
        if self.r_title:
            return self.r_title
        else:
            return unicode(self.r_id)

    def symbolizerids(self):
        return SymbolizerRule.objects.filter(sr_ruleid=self).order_by('sr_order').values_list('sr_symbid', flat=True)

    def scale(self, factor=1):
        if factor != 1:
            zoom_shift = int(round(log(factor, 2)))
            self.r_minscale += zoom_shift
            self.r_maxscale += zoom_shift

    def get_xml(self, scale_factor=1):
        self.scale(scale_factor)
        rule_node = libxml2.newNode('Rule')
#        _set_xml_param(rule_node, 'title', self.r_title)
        _set_xml_param(rule_node, 'name', self.r_name)
        if self.r_filter:
            if self.r_filter=='ELSEFILTER':
                rule_node.addChild(libxml2.newNode('ElseFilter'))
            else:
                filter_node = libxml2.newNode('Filter')
                filter_node.setContent(self.r_filter)
                rule_node.addChild(filter_node)
        _add_xml_node(rule_node, 'MinScaleDenominator', str(zooms[self.r_minscale + 1]))
        _add_xml_node(rule_node, 'MaxScaleDenominator', str(zooms[self.r_maxscale]))
        for id in self.symbolizerids():
            symbolizer = Symbolizer.objects.get(pk=id).specialized()
            rule_node.addChild(symbolizer.get_xml(scale_factor))
        return rule_node

    def usages(self):
        return len(RuleStyle.objects.filter(rs_ruleid=self))

    def mapnik(self):
        rule = mapnik.Rule()
        if self.r_filter:
            if self.r_filter=='ELSEFILTER':
                rule.set_else
            else:
                rule.filter = mapnik.Filter(self.r_filter.encode('utf-8'))
        if self.r_maxscale:
            rule.max_scale = zooms[self.r_maxscale]
        if self.r_minscale:
            rule.min_scale = zooms[self.r_minscale + 1]
        if self.r_name:
            rule.name = self.r_name.encode('utf-8')
        for id in self.symbolizerids():
            symbolizer = Symbolizer.objects.get(pk=id).specialized().mapnik()
            rule.symbols.append(symbolizer)
        return rule

    def legend(self, path):
        m = mapnik.Map(400, 400)
        m.background = mapnik.Color('white')
        s = mapnik.Style()

        complete_rule = self.mapnik()
        # rule without filters and scales
        r = mapnik.Rule()
        for i in range(len(complete_rule.symbols)):
            if complete_rule.symbols[i].__class__ != mapnik.TextSymbolizer:
                r.symbols.append(complete_rule.symbols[i])

        s.rules.append(r)
        m.append_style('Legend_style', s)
        ds = mapnik.PostGIS(dbname='legend', host='localhost', port=5432, table='(select * from polygon) as ln', user='xtesar7', password='')
        l = mapnik.Layer('legend')
        l.datasource = ds
        l.styles.append('Legend_style')
        m.layers.append(l)

        prj = mapnik.Projection("+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over")
#        ll = (13.72, 51.04, 13.74, 51.06)
        ll = (-0.01, -0.01, 0.01, 0.01)
        c0 = prj.forward(mapnik.Coord(ll[0],ll[1]))
        c1 = prj.forward(mapnik.Coord(ll[2],ll[3]))
        print c0, c1
        bbox = mapnik.Envelope(c0.x,c0.y,c1.x,c1.y)
        m.zoom_to_box(bbox)
        im = mapnik.Image(400, 400)
        mapnik.render(m, im)
        view = im.view(0, 0, 400, 400)
        view.save(path, 'png')
        print 'legend rendered'


class RuleStyle(models.Model):
    rs_order = models.PositiveIntegerField()
    rs_ruleid = models.ForeignKey(Rule)
    rs_stylename = models.ForeignKey(Style)

    def __unicode__(self):
        return 'Order: %i, Style: %s, Rule: %i, %s' % (self.rs_order,
                                                       self.rs_stylename.s_name,
                                                       self.rs_ruleid.r_id,
                                                       self.rs_ruleid.r_title)


class Symbolizer(models.Model):
    symbid = models.AutoField(primary_key=True)
    abstract = models.CharField(max_length=200, null=True, blank=True)

    def specialized(self):
        if BuildingSymbolizer.objects.filter(pk=self.symbid):
            return self.buildingsymbolizer
        elif LineSymbolizer.objects.filter(pk=self.symbid):
            return self.linesymbolizer
        elif LinePatternSymbolizer.objects.filter(pk=self.symbid):
            return self.linepatternsymbolizer
        elif MarkersSymbolizer.objects.filter(pk=self.symbid):
            return self.markerssymbolizer
        elif PointSymbolizer.objects.filter(pk=self.symbid):
            return self.pointsymbolizer
        elif PolygonSymbolizer.objects.filter(pk=self.symbid):
            return self.polygonsymbolizer
        elif PolygonPatternSymbolizer.objects.filter(pk=self.symbid):
            return self.polygonpatternsymbolizer
        elif RasterSymbolizer.objects.filter(pk=self.symbid):
            return self.rastersymbolizer
        elif ShieldSymbolizer.objects.filter(pk=self.symbid):
            return self.shieldsymbolizer
        elif TextSymbolizer.objects.filter(pk=self.symbid):
            return self.textsymbolizer
        else:
            return self

    def scale(self, factor=1):
        pass

    def usages(self):
        return len(SymbolizerRule.objects.filter(sr_symbid=self))

    def serialize(self, nonevalues=False):
        complete = serializers.serialize('xml', [self.specialized(), ])
        if nonevalues:
            return complete
        #output without None fields
        else:
            doc = libxml2.parseDoc(complete)
            ctxt = doc.xpathNewContext()
            noneParents = ctxt.xpathEval('//None/..')
            for np in noneParents:
                np.unlinkNode()
                np.freeNode()
            ctxt.xpathFreeContext()
            return doc.serialize('utf-8', 0)

    def __unicode__(self):
        spec_type = unicode(type(self.specialized())).split('.')[-1].replace("'>","")
        return 'SymbID: %i, Type: %s' % (self.symbid, spec_type)


class SymbolizerRule(models.Model):
    SYMBOLIZER_CHOICES = (
        ('BuildingSymbolizer', 'BuildingSymbolizer'),
        ('LineSymbolizer', 'LineSymbolizer'),
        ('LinePatternSymbolizer', 'LinePatternSymbolizer'),
        ('MarkersSymbolizer', 'MarkersSymbolizer'),
        ('PointSymbolizer', 'PointSymbolizer'),
        ('PolygonSymbolizer', 'PolygonSymbolizer'),
        ('PolygonPatternSymbolizer', 'PolygonPatternSymbolizer'),
        ('RasterSymbolizer', 'RasterSymbolizer'),
        ('ShieldSymbolizer', 'ShieldSymbolizer'),
        ('TextSymbolizer', 'TextSymbolizer'),
    )
    sr_order = models.PositiveIntegerField()
    sr_symbid = models.ForeignKey(Symbolizer)
    sr_type = models.CharField(max_length=30, choices=SYMBOLIZER_CHOICES)
    sr_ruleid = models.ForeignKey(Rule)

    def __unicode__(self):
        return 'Order: %i, Rule: %i, %s, Type: %s' % (self.sr_order,
                                                      self.sr_ruleid.r_id,
                                                      self.sr_ruleid.r_title,
                                                      self.sr_type)


class BuildingSymbolizer(Symbolizer):
    fill = models.CharField(max_length=200, default='rgb(127, 127, 127)', null=True, blank=True)
    fill_opacity = models.DecimalField('fill-opacity', max_digits=3, decimal_places=2, null=True, blank=True)
    height = models.PositiveIntegerField()

    def __eq__(self, other):
        if isinstance(other, BuildingSymbolizer):
            return self.fill==other.fill and self.fill_opacity==other.fill_opacity and self.height==other.height
        else:
            return False

    def __ne__(self, other):
        return not self.__eq__(other)


    def scale(self, factor=1):
        if factor != 1:
            self.height = int(factor * self.height)

    def get_xml(self, scale_factor=1):
        self.scale(scale_factor)
        symbolizer_node = libxml2.newNode('BuildingSymbolizer')
        _set_xml_param(symbolizer_node, 'fill', self.fill)
        _set_xml_param(symbolizer_node, 'fill_opacity', self.fill_opacity)
        _set_xml_param(symbolizer_node, 'height', self.height)
        return symbolizer_node

    def __unicode__(self):
        return 'ID: %i, Height: %s' % (self.symbid, self.height)


class LineSymbolizer(Symbolizer):
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
    stroke_width = models.DecimalField('stroke-width', max_digits=5, decimal_places=2, null=True, blank=True)
    stroke_opacity = models.DecimalField('stroke-opacity', max_digits=3, decimal_places=2, null=True, blank=True)
    stroke_linejoin = models.CharField('stroke-linejoin', max_length=15, choices=LINEJOIN, default='round', null=True, blank=True)
    stroke_linecap = models.CharField('stroke-linecap', max_length=8, choices=LINECAP, default='butt', null=True, blank=True)
    stroke_dasharray = models.CharField('stroke-dasharray', max_length=200, null=True, blank=True)
    stroke_offset = models.DecimalField('stroke-offset', max_digits=5, decimal_places=2, null=True, blank=True)

#    def __eq__(self, other):
#        if isinstance(other, LineSymbolizer):
#            return self.stroke==other.stroke and self.stroke_width==other.stroke_width
#        else:
#            return False
#
#    def __ne__(self, other):
#        return not self.__eq__(other)

    def scale(self, factor=1):
        if factor != 1:
            if self.stroke_width:
                self.stroke_width *= factor
            if self.stroke_dasharray:
                dash_parts = self.stroke_dasharray.split(',')
                for i in range(len(dash_parts)):
                    dash_parts[i] = str(int(int(dash_parts[i]) * factor))
                self.stroke_dasharray = ', '.join(dash_parts)
            if self.stroke_offset:
                self.stroke_offset *= factor

    def get_xml(self, scale_factor=1):
        self.scale(scale_factor)
        symbolizer_node = libxml2.newNode('LineSymbolizer')
        _add_xml_css(symbolizer_node, 'stroke', self.stroke)
        _add_xml_css(symbolizer_node, 'stroke_width', self.stroke_width)
        _add_xml_css(symbolizer_node, 'stroke_opacity', self.stroke_opacity)
        _add_xml_css(symbolizer_node, 'stroke_linejoin', self.stroke_linejoin)
        _add_xml_css(symbolizer_node, 'stroke_linecap', self.stroke_linecap)
        _add_xml_css(symbolizer_node, 'stroke_dasharray', self.stroke_dasharray)
        _add_xml_css(symbolizer_node, 'stroke_offset', self.stroke_offset)
#mapnik        _add_xml_css(symbolizer_node, 'offset', self.stroke_offset)
        return symbolizer_node

    def __unicode__(self):
        ret = 'ID: %i' % (self.symbid)
        if self.stroke:
            ret += ', Color: %s' % (self.stroke)
        if self.stroke_width:
            ret += ', Width: %s' % (self.stroke_width)
        return ret

    def mapnik(self):
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
                s.add_dash(int(dash_parts[i]), int(dash_parts[i+1]))
        ls.stroke = s
        return ls


class LinePatternSymbolizer(Symbolizer):
    TYPE = (
        ('png', 'png'),
        ('tiff', 'tiff'),
    )

    file = models.CharField(max_length=400)
    type = models.CharField(max_length=4, choices=TYPE, default='png', null=True, blank=True)
    height = models.PositiveIntegerField()
    width = models.PositiveIntegerField()

    def scale(self, factor=1):
        if factor != 1:
            self.height = int(factor * self.height)
            self.width = int(factor * self.width)
        if factor == 2:
            if self.file:
                self.file = '/'.join(self.file.split('/')[0:-1]) + '/print-' + self.file.split('/')[-1]

    def get_xml(self, scale_factor=1):
        self.scale(scale_factor)
        symbolizer_node = libxml2.newNode('LinePatternSymbolizer')
        _set_xml_param(symbolizer_node, 'file', self.file)
        _set_xml_param(symbolizer_node, 'type', self.type)
        _set_xml_param(symbolizer_node, 'height', self.height)
        _set_xml_param(symbolizer_node, 'width', self.width)
        return symbolizer_node

    def __unicode__(self):
        return 'ID: %i, File: %s, Height: %i, Width: %i' % (self.symbid, self.file, self.height, self.width)

    def mapnik(self):
        lps = mapnik.LinePatternSymbolizer(mapnik.PathExpression(style_path + self.file.encode('utf-8')))
        return lps


class MarkersSymbolizer(Symbolizer):
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
    filename = models.CharField(max_length=400)
    transform = models.CharField(max_length=200, null=True, blank=True)
    opacity = models.DecimalField(max_digits=3, decimal_places=2, null=True, blank=True)
    fill = models.CharField(max_length=200, default='rgb(0, 0, 0)', null=True, blank=True)
    stroke = models.CharField(max_length=200, default='rgb(0, 0, 0)', null=True, blank=True)
    stroke_width = models.DecimalField('stroke-width', max_digits=5, decimal_places=2, null=True, blank=True)
    stroke_opacity = models.DecimalField('stroke-opacity', max_digits=3, decimal_places=2, null=True, blank=True)
    height = models.PositiveIntegerField()
    width = models.PositiveIntegerField()
    placement = models.CharField(max_length=10, choices=PLACEMENT, null=True, blank=True)
    ignore_placement = models.NullBooleanField('ignore-placement')
    marker_type = models.CharField(max_length=10, choices=MARKER_TYPE, null=True, blank=True)

    def __unicode__(self):
        return 'ID: %i, Marker: %s' % (self.symbid, self.filename)

    def scale(self, factor=1):
        if factor != 1:
            if self.spacing:
                self.spacing = int(factor * self.spacing)
            if self.stroke_width:
                self.stroke_width *= factor
            self.height = int(factor * self.height)
            self.width = int(factor * self.width)
        if factor == 2:
            if self.filename:
                self.filename = '/'.join(self.filename.split('/')[0:-1]) + '/print-' + self.filename.split('/')[-1]

    def get_xml(self, scale_factor=1):
        self.scale(scale_factor)
        symbolizer_node = libxml2.newNode('MarkersSymbolizer')
        _set_xml_param(symbolizer_node, 'allow_overlap', self.allow_overlap)
        _set_xml_param(symbolizer_node, 'spacing', self.spacing)
        _set_xml_param(symbolizer_node, 'max_error', self.max_error)
        _set_xml_param(symbolizer_node, 'filename', self.filename)
        _set_xml_param(symbolizer_node, 'transform', self.transform)
        _set_xml_param(symbolizer_node, 'opacity', self.opacity)
        _set_xml_param(symbolizer_node, 'fill', self.fill)
        _set_xml_param(symbolizer_node, 'stroke', self.stroke)
        _set_xml_param(symbolizer_node, 'stroke_width', self.stroke_width)
        _set_xml_param(symbolizer_node, 'stroke_opacity', self.stroke_opacity)
        _set_xml_param(symbolizer_node, 'height', self.height)
        _set_xml_param(symbolizer_node, 'width', self.width)
        _set_xml_param(symbolizer_node, 'placement', self.placement)
        _set_xml_param(symbolizer_node, 'ignore_placement', self.ignore_placement)
        _set_xml_param(symbolizer_node, 'marker_type', self.marker_type)
        return symbolizer_node

#    def mapnik(self):
#        ms = mapnik.MarkersSymbolizer()



class PointSymbolizer(Symbolizer):
    TYPE = (
        ('png', 'png'),
        ('tiff', 'tiff'),
    )

    file = models.CharField(max_length=400)
    height = models.PositiveIntegerField()
    width = models.PositiveIntegerField()
    type = models.CharField(max_length=4, choices=TYPE, default='png', null=True, blank=True)
    allow_overlap = models.NullBooleanField()
    opacity = models.DecimalField(max_digits=3, decimal_places=2, null=True, blank=True)
    transform = models.CharField(max_length=200, null=True, blank=True)
    ignore_placement = models.NullBooleanField('ignore-placement')

    def __unicode__(self):
        return 'ID: %i, Image: %s' % (self.symbid, self.file)

    def scale(self, factor=1):
        if factor != 1:
            self.height = int(factor * self.height)
            self.width = int(factor * self.width)
        if factor == 2:
            if self.file:
                self.file = '/'.join(self.file.split('/')[0:-1]) + '/print-' + self.file.split('/')[-1]

    def get_xml(self, scale_factor=1):
        self.scale(scale_factor)
        symbolizer_node = libxml2.newNode('PointSymbolizer')
        _set_xml_param(symbolizer_node, 'file', self.file)
        _set_xml_param(symbolizer_node, 'height', self.height)
        _set_xml_param(symbolizer_node, 'width', self.width)
        _set_xml_param(symbolizer_node, 'type', self.type)
        _set_xml_param(symbolizer_node, 'allow_overlap', self.allow_overlap)
        _set_xml_param(symbolizer_node, 'opacity', self.opacity)
        _set_xml_param(symbolizer_node, 'transform', self.transform)
        _set_xml_param(symbolizer_node, 'ignore_placement', self.ignore_placement)
        return symbolizer_node

    def mapnik(self):
        ps = mapnik.PointSymbolizer()
        ps.filename = style_path + self.file.encode('utf-8')
        ps.allow_overlap = self.allow_overlap
        if self.opacity:
            ps.opacity = float(self.opacity)
        if self.transform:
            ps.transform = self.transform.encode('utf-8')
        ps.ignore_placement = self.ignore_placement
        return ps



class PolygonSymbolizer(Symbolizer):
    fill = models.CharField(max_length=200, default='rgb(127, 127, 127)', null=True, blank=True)
    fill_opacity = models.DecimalField('fill-opacity', max_digits=3, decimal_places=2, null=True, blank=True)
    gamma = models.DecimalField(max_digits=3, decimal_places=2, null=True, blank=True)

    def __unicode__(self):
        return 'ID: %i, Fill Color: %s' % (self.symbid, self.fill)

    def get_xml(self, scale_factor=1):
        self.scale(scale_factor)
        symbolizer_node = libxml2.newNode('PolygonSymbolizer')
        _add_xml_css(symbolizer_node, 'fill', self.fill)
        _add_xml_css(symbolizer_node, 'fill_opacity', self.fill_opacity)
        _add_xml_css(symbolizer_node, 'gamma', self.gamma)
        return symbolizer_node

    def mapnik(self):
        ps = mapnik.PolygonSymbolizer()
        if self.fill:
            ps.fill = mapnik.Color(self.fill.encode('utf-8'))
        if self.fill_opacity:
            ps.fill_opacity = float(self.fill_opacity)
        if self.gamma:
            ps.gamma = float(self.gamma)
        return ps


class PolygonPatternSymbolizer(Symbolizer):
    TYPE = (
        ('png', 'png'),
        ('tiff', 'tiff'),
    )

    file = models.CharField(max_length=400)
    type = models.CharField(max_length=4, choices=TYPE, default='png', null=True, blank=True)
    height = models.PositiveIntegerField()
    width = models.PositiveIntegerField()

    def __unicode__(self):
        return 'ID: %i, Pattern: %s' % (self.symbid, self.file)

    def scale(self, factor=1):
        if factor != 1:
            self.height = factor * self.height
            self.width = factor * self.width
        if factor == 2:
            if self.file:
                self.file = '/'.join(self.file.split('/')[0:-1]) + '/print-' + self.file.split('/')[-1]

    def get_xml(self, scale_factor=1):
        self.scale(scale_factor)
        symbolizer_node = libxml2.newNode('PolygonPatternSymbolizer')
        _set_xml_param(symbolizer_node, 'file', self.file)
        _set_xml_param(symbolizer_node, 'type', self.type)
        _set_xml_param(symbolizer_node, 'height', self.height)
        _set_xml_param(symbolizer_node, 'width', self.width)
        return symbolizer_node

    def mapnik(self):
        pps = mapnik.PolygonPatternSymbolizer(mapnik.PathExpression(style_path + self.file.encode('utf-8')))
        return pps


class RasterSymbolizer(Symbolizer):
    MODE = (
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
    mode = models.CharField(max_length=20, choices=MODE, default='normal', null=True, blank=True)
    scaling = models.CharField(max_length=10, choices=SCALING, default='bilinear8', null=True, blank=True)

    def __unicode__(self):
        return 'ID: %i' % (self.symbid)

    def get_xml(self, scale_factor=1):
        self.scale(scale_factor)
        symbolizer_node = libxml2.newNode('RasterSymbolizer')
        _add_xml_css(symbolizer_node, 'opacity', self.opacity)
        _add_xml_css(symbolizer_node, 'mode', self.mode)
        _add_xml_css(symbolizer_node, 'scaling', self.scaling)
        return symbolizer_node

    def mapnik(self):
        rs = mapnik.RasterSymbolizer()
        if self.opacity:
            rs.opacity = float(self.opacity)
# attribute mode is changing in version 2.1 or 3.0
        if self.mode:
            rs.mode = self.mode.encode('utf-8')
        if self.scaling:
            rs.scaling = mapnik.scaling_method.names[upper(self.scaling.encode('utf-8'))]
        return rs


class ShieldSymbolizer(Symbolizer):
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
    TYPE = (
        ('png', 'png'),
        ('tiff', 'tiff'),
    )
    TEXT_CONVERT = (
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
    height = models.PositiveIntegerField()
    width = models.PositiveIntegerField()
    horizontal_alignment = models.CharField(max_length=10, choices=HORIZONTAL, null=True, blank=True)
    justify_alignment = models.CharField(max_length=10, choices=HORIZONTAL, null=True, blank=True)
    line_spacing = models.PositiveIntegerField(null=True, blank=True)
    min_distance = models.PositiveIntegerField(null=True, blank=True)
    name = models.CharField(max_length=200, null=True, blank=True)
    no_text = models.NullBooleanField()
    opacity = models.DecimalField(max_digits=3, decimal_places=2, null=True, blank=True)
    placement = models.CharField(max_length=10, choices=PLACEMENT, null=True, blank=True)
    size = models.PositiveIntegerField(null=True, blank=True)
    spacing = models.PositiveIntegerField(null=True, blank=True)
    text_convert = models.CharField(max_length=200, choices=TEXT_CONVERT, null=True, blank=True)
    type = models.CharField(max_length=4, choices=TYPE, default='png', null=True, blank=True)
    unlock_image = models.NullBooleanField()
    vertical_alignment = models.CharField(max_length=10, choices=VERTICAL, null=True, blank=True)
    wrap_before = models.NullBooleanField()
    wrap_character = models.CharField(max_length=200, null=True, blank=True)
    wrap_width = models.PositiveIntegerField(null=True, blank=True)
    transform = models.CharField(max_length=200, null=True, blank=True)

    def __unicode__(self):
        return 'ID: %i, Shield: %s' % (self.symbid, self.file)

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
            self.height = int(factor * self.height)
            self.width = int(factor * self.width)
            if self.line_spacing:
                self.line_spacing = int(factor * self.line_spacing)
            if self.min_distance:
                self.min_distance = int(factor * self.min_distance)
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
        symbolizer_node = libxml2.newNode('ShieldSymbolizer')
        _set_xml_param(symbolizer_node, 'allow_overlap', self.allow_overlap)
        _set_xml_param(symbolizer_node, 'avoid_edges', self.avoid_edges)
        _set_xml_param(symbolizer_node, 'character_spacing', self.character_spacing)
        _set_xml_param(symbolizer_node, 'dx', self.dx)
        _set_xml_param(symbolizer_node, 'dy', self.dy)
        _set_xml_param(symbolizer_node, 'face_name', self.face_name)
        _set_xml_param(symbolizer_node, 'file', self.file)
        _set_xml_param(symbolizer_node, 'fill', self.fill)
        _set_xml_param(symbolizer_node, 'fontset_name', self.fontset_name)
        _set_xml_param(symbolizer_node, 'halo_fill', self.halo_fill)
        _set_xml_param(symbolizer_node, 'halo_radius', self.halo_radius)
        _set_xml_param(symbolizer_node, 'height', self.height)
        _set_xml_param(symbolizer_node, 'width', self.width)
        _set_xml_param(symbolizer_node, 'horizontal_alignment', self.horizontal_alignment)
        _set_xml_param(symbolizer_node, 'justify_alignment', self.justify_alignment)
        _set_xml_param(symbolizer_node, 'line_spacing', self.line_spacing)
        _set_xml_param(symbolizer_node, 'min_distance', self.min_distance)
# comment name, no_text for mapnik
        _set_xml_param(symbolizer_node, 'name', self.name)
        _set_xml_param(symbolizer_node, 'no_text', self.no_text)
        _set_xml_param(symbolizer_node, 'opacity', self.opacity)
        _set_xml_param(symbolizer_node, 'placement', self.placement)
        _set_xml_param(symbolizer_node, 'size', self.size)
        _set_xml_param(symbolizer_node, 'spacing', self.spacing)
        _set_xml_param(symbolizer_node, 'text_convert', self.text_convert)
        _set_xml_param(symbolizer_node, 'type', self.type)
        _set_xml_param(symbolizer_node, 'unlock_image', self.unlock_image)
        _set_xml_param(symbolizer_node, 'vertical_alignment', self.vertical_alignment)
        _set_xml_param(symbolizer_node, 'wrap_before', self.wrap_before)
        _set_xml_param(symbolizer_node, 'wrap_character', self.wrap_character)
        _set_xml_param(symbolizer_node, 'wrap_width', self.wrap_width)
        _set_xml_param(symbolizer_node, 'transform', self.transform)
        return symbolizer_node

    def mapnik(self):
        name = mapnik.Expression('[' + self.name.encode('utf-8') + ']')
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
            fs = mapnik.Fonsset()
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
        if self.min_distance:
            ss.minimum_distance = self.min_distance
        if self.opacity:
            ss.text_opacity = self.opacity
        if self.placement:
            ss.label_placement = mapnik.label_placement.names[self.placement.encode('utf-8')]
        if self.spacing:
            ss.label_spacing = self.spacing
        if self.text_convert:
            if self.text_convert == 'none' or self.text_convert == 'capitalize':
                ss.text_transform = mapnik.text_transform.names[self.text_convert.encode('utf-8')]
            else:
                name = self.text_convert.encode('utf-8')[2:] + 'case'
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



class TextSymbolizer(Symbolizer):
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
    TEXT_CONVERT = (
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
    fill = models.CharField(max_length=200, default='rgb(0, 0, 0)', null=True, blank=True)
    fontset_name = models.CharField(max_length=200, null=True, blank=True)
    force_odd_labels = models.NullBooleanField()
    halo_fill = models.CharField(max_length=200, null=True, blank=True)
    halo_radius = models.PositiveIntegerField(null=True, blank=True)
    horizontal_alignment = models.CharField(max_length=10, choices=HORIZONTAL, null=True, blank=True)
    justify_alignment = models.CharField(max_length=10, choices=HORIZONTAL, null=True, blank=True)
    label_position_tolerance = models.PositiveIntegerField(null=True, blank=True)
    line_spacing = models.PositiveIntegerField(null=True, blank=True)
    max_char_angle_delta = models.DecimalField(max_digits=5, decimal_places=2, null=True, blank=True)
    min_distance = models.PositiveIntegerField(null=True, blank=True)
    name = models.CharField(max_length=200, null=True, blank=True)
    opacity = models.DecimalField(max_digits=3, decimal_places=2, null=True, blank=True)
    placement = models.CharField(max_length=10, choices=PLACEMENT, null=True, blank=True)
    size = models.PositiveIntegerField(null=True, blank=True)
    spacing = models.PositiveIntegerField(null=True, blank=True)
    text_convert = models.CharField(max_length=200, choices=TEXT_CONVERT, null=True, blank=True)
    text_ratio = models.PositiveIntegerField(null=True, blank=True)
    vertical_alignment = models.CharField(max_length=10, choices=VERTICAL, null=True, blank=True)
    wrap_before = models.NullBooleanField()
    wrap_character = models.CharField(max_length=200, null=True, blank=True)
    wrap_width = models.PositiveIntegerField(null=True, blank=True)

    def __unicode__(self):
        font = ''
        if self.fontset_name:
            font = self.fontset_name
        elif self.face_name:
            font = self.face_name
        else:
            font = 'Not set!'
        return 'ID: %i, Font: %s, Size: %i' % (self.symbid, font, self.size)

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
            if self.min_distance:
                self.min_distance = int(factor * self.min_distance)
            if self.size:
                self.size = int(factor * self.size)
            if self.spacing:
                self.spacing = int(factor * self.spacing)
            if self.wrap_width:
                self.wrap_width = int(factor * self.wrap_width)

    def get_xml(self, scale_factor=1):
        self.scale(scale_factor)
        symbolizer_node = libxml2.newNode('TextSymbolizer')
        _set_xml_param(symbolizer_node, 'allow_overlap', self.allow_overlap)
        _set_xml_param(symbolizer_node, 'avoid_edges', self.avoid_edges)
        _set_xml_param(symbolizer_node, 'character_spacing', self.character_spacing)
        _set_xml_param(symbolizer_node, 'dx', self.dx)
        _set_xml_param(symbolizer_node, 'dy', self.dy)
        _set_xml_param(symbolizer_node, 'face_name', self.face_name)
        _set_xml_param(symbolizer_node, 'fill', self.fill)
        _set_xml_param(symbolizer_node, 'fontset_name', self.fontset_name)
        _set_xml_param(symbolizer_node, 'halo_fill', self.halo_fill)
        _set_xml_param(symbolizer_node, 'halo_radius', self.halo_radius)
        _set_xml_param(symbolizer_node, 'horizontal_alignment', self.horizontal_alignment)
        _set_xml_param(symbolizer_node, 'justify_alignment', self.justify_alignment)
        _set_xml_param(symbolizer_node, 'label_position_tolerance', self.label_position_tolerance)
        _set_xml_param(symbolizer_node, 'line_spacing', self.line_spacing)
        _set_xml_param(symbolizer_node, 'max_char_angle_delta', self.max_char_angle_delta)
        _set_xml_param(symbolizer_node, 'min_distance', self.min_distance)
        _set_xml_param(symbolizer_node, 'name', self.name)
        _set_xml_param(symbolizer_node, 'opacity', self.opacity)
        _set_xml_param(symbolizer_node, 'placement', self.placement)
        _set_xml_param(symbolizer_node, 'size', self.size)
        _set_xml_param(symbolizer_node, 'spacing', self.spacing)
        _set_xml_param(symbolizer_node, 'text_convert', self.text_convert)
        _set_xml_param(symbolizer_node, 'text_ratio', self.text_ratio)
        _set_xml_param(symbolizer_node, 'vertical_alignment', self.vertical_alignment)
        _set_xml_param(symbolizer_node, 'wrap_before', self.wrap_before)
        _set_xml_param(symbolizer_node, 'wrap_character', self.wrap_character)
        _set_xml_param(symbolizer_node, 'wrap_width', self.wrap_width)
        return symbolizer_node

    def mapnik(self):
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
            fs = mapnik.FontSet()
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
        if self.min_distance:
            ts.minimum_distance = self.min_distance
        if self.opacity:
            ts.text_opacity = self.opacity
        if self.placement:
            ts.label_placement = mapnik.label_placement.names[self.placement.encode('utf-8')]
        if self.size != None:
            ts.text_size = self.size
        if self.spacing:
            ts.label_spacing = self.spacing
        if self.text_convert:
            if self.text_convert == 'none' or self.text_convert == 'capitalize':
                ts.text_transform = mapnik.text_transform.names[self.text_convert.encode('utf-8')]
            else:
                name = self.text_convert.encode('utf-8')[2:] + 'case'
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
        return ts


class DataSource(models.Model):
    TYPE_CHOICES = (
        ('gdal', 'gdal'),
        ('postgis', 'postgis'),
        ('raster', 'raster'),
        ('shape', 'shape'),
    )
    type = models.CharField(max_length=10, choices=TYPE_CHOICES)

class Gdal(DataSource):
    FORMAT_CHOICES = (
        ('png', 'png'),
        ('tiff', 'tiff'),
    )
    file = models.CharField(max_length=400)
    format = models.CharField(max_length=4, choices=FORMAT_CHOICES, null=True, blank=True)

    def get_xml(self):
        datasource_node = libxml2.newNode('Datasource')
        _add_xml_node_with_param(datasource_node, 'Parameter', self.type, 'name', 'type')
        _add_xml_node_with_param(datasource_node, 'Parameter', self.file, 'name', 'file')
        _add_xml_node_with_param(datasource_node, 'Parameter', self.format, 'name', 'format')
        return datasource_node

    def mapnik(self):
        ds = mapnik.Gdal(file=self.file)
#        if self.format:
#            ds.format = self.format.encode('utf-8')
        return ds



class PostGIS(DataSource):
    dbname = models.CharField(max_length=40)
    estimate_extent = models.NullBooleanField()
    extent = models.CharField(max_length=200, null=True, blank=True)
    host = models.CharField(max_length=200)
    password = models.CharField(max_length=200)
    port = models.PositiveIntegerField(null=True, blank=True, default=5432)
    table = models.TextField()
    user = models.CharField(max_length=40)

    def get_xml(self):
        datasource_node = libxml2.newNode('Datasource')
        _add_xml_node_with_param(datasource_node, 'Parameter', self.type, 'name', 'type')
        _add_xml_node_with_param(datasource_node, 'Parameter', self.table, 'name', 'table')
        _add_xml_node_with_param(datasource_node, 'Parameter', self.password, 'name', 'password')
        _add_xml_node_with_param(datasource_node, 'Parameter', self.host, 'name', 'host')
        _add_xml_node_with_param(datasource_node, 'Parameter', self.port, 'name', 'port')
        _add_xml_node_with_param(datasource_node, 'Parameter', self.user, 'name', 'user')
        _add_xml_node_with_param(datasource_node, 'Parameter', self.dbname, 'name', 'dbname')
        _add_xml_node_with_param(datasource_node, 'Parameter', self.estimate_extent, 'name', 'estimate_extent')
        _add_xml_node_with_param(datasource_node, 'Parameter', self.extent, 'name', 'extent')
        return datasource_node

    def mapnik(self):
# add additional params from docs
#        params = {}
#        params{'dbname' : self.dbname.encode('utf-8')}
        ds
        if not self.port:
            self.port = 5432
        if self.extent:
            ds = mapnik.PostGIS(dbname = self.dbname.encode('utf-8'), host=self.host.encode('utf-8'), port=self.port, table=self.table.encode('utf-8'), user=self.user.encode('utf-8'), password=self.password.encode('utf-8'), extent=self.extent.encode('utf-8'))
        else:
            ds = mapnik.PostGIS(dbname = self.dbname.encode('utf-8'), host=self.host.encode('utf-8'), port=self.port, table=self.table.encode('utf-8'), user=self.user.encode('utf-8'), password=self.password.encode('utf-8'))
        return ds


#class Raster(DataSource):
#    FORMAT_CHOICES = (
#        ('png', 'png'),
#        ('tiff', 'tiff'),
#    )
#    file = models.CharField(max_length=400)
#    format = models.CharField(max_length=4, choices=FORMAT_CHOICES, null=True, blank=True)
#    lox = models.DecimalField(max_digits=12, decimal_places=2, null=True, blank=True)
#    loy = models.DecimalField(max_digits=12, decimal_places=2, null=True, blank=True)
#    hix = models.DecimalField(max_digits=12, decimal_places=2, null=True, blank=True)
#    hiy = models.DecimalField(max_digits=12, decimal_places=2, null=True, blank=True)
#
#
#class Shape(DataSource):
#    file = models.CharField(max_length=400)
#    encoding = models.CharField(max_length=20, null=True, blank=True, default='utf-8')
#
#
class Legend(models.Model):
    SCALE_CHOICES = zip(range(0, 21), range(0, 21))

    id = models.AutoField(primary_key=True)
    title = models.CharField(max_length=200, null=True, blank=True)
    image = models.ImageField(upload_to='legend/', height_field='height', width_field='width')
    group = models.CharField(max_length=200, null=True, blank=True)
    maxscale = models.IntegerField(choices=SCALE_CHOICES, default=0)
    minscale = models.IntegerField(choices=SCALE_CHOICES, default=18)
    ruleid = models.PositiveIntegerField(null=True, blank=True)
    height = models.PositiveIntegerField(null=True, blank=True)
    width = models.PositiveIntegerField(null=True, blank=True)

    def import_item(self, ruleid):
        rule = Rule.objects.get(pk=ruleid)
        self.title = rule.r_title
        path = '/home/xtesar7/Devel/mtbmap-czechrep/Web/media/legend/' + str(ruleid) + '.png'
        rule.legend(path)
        self.image.save(path, File(open(path)))

        self.maxscale = rule.r_maxscale
        self.minscale = rule.r_minscale
        self.ruleid = ruleid
        self.save()
