# -*- coding: utf-8 -*-

from styles.models import *
from django.contrib import admin


class MapLayerInline(admin.TabularInline):
    model = MapLayer
    extra = 1


class StyleLayerInline(admin.StackedInline):
    model = StyleLayer
    extra = 0


class RuleStyleInline(admin.StackedInline):
    model = RuleStyle
    extra = 0


class SymbolizerRuleInline(admin.StackedInline):
    model = SymbolizerRule
    extra = 0


class MapAdmin(admin.ModelAdmin):
    inlines = (MapLayerInline,)

#class LayerAdmin(admin.ModelAdmin):
#    inlines = [StyleLayerInline]
#    list_display = ('name', 'maps')
#    search_fields = ['name']
#    readonly_fields = ['maps', 'srs']
#    fields = ['l_name']
#    fieldsets = [
#        ('Basic properties', {'fields': ['l_name', 'l_srs', 'l_datatype']}),
#        ('Advanced properties', {'fields': ['l_abstract',
#                                            'l_clear_label_cache',
#                                            'l_datatable',
#                                            'l_dataformat',
#                                            'l_datafile',
#                                            'l_dataextent'
#                                        ],
#                                 'classes': ['collapse']})
#    ]


class StyleAdmin(admin.ModelAdmin):
    fields = ['name']
    inlines = [StyleLayerInline, RuleStyleInline]


class RuleAdmin(admin.ModelAdmin):
    inlines = [RuleStyleInline, SymbolizerRuleInline]
    search_fields = ['name', 'maxscale']


class SymbolizerAdmin(admin.ModelAdmin):
    list_display = ('specialized_type', 'id', )
    search_fields = ['id', 'symbtype']

    @staticmethod
    def specialized_type(obj):
        spec = obj.specialized()
        spec_type = unicode(type(spec)).split('.')[-1].replace("'>", "")
        ret = spec_type + ', ' + unicode(spec)
        return ret

admin.site.register(Map, MapAdmin)
admin.site.register(Layer)
admin.site.register(MapLayer)

admin.site.register(DataSource)
admin.site.register(PostGIS)
admin.site.register(Gdal)
admin.site.register(Shape)

admin.site.register(Style, StyleAdmin)
admin.site.register(StyleLayer)
admin.site.register(RuleStyle)

admin.site.register(Rule, RuleAdmin)
admin.site.register(SymbolizerRule)
admin.site.register(Symbolizer, SymbolizerAdmin)
admin.site.register(BuildingSymbolizer)
admin.site.register(LineSymbolizer)
admin.site.register(LinePatternSymbolizer)
admin.site.register(MarkersSymbolizer)
admin.site.register(PointSymbolizer)
admin.site.register(PolygonSymbolizer)
admin.site.register(PolygonPatternSymbolizer)
admin.site.register(RasterSymbolizer)
admin.site.register(ShieldSymbolizer)
admin.site.register(TextSymbolizer)

admin.site.register(Legend)
admin.site.register(LegendItem)
admin.site.register(LegendItemName)
