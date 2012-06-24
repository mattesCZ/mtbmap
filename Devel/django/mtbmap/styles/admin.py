from styles import models
from django.contrib import admin

class MapLayerInline(admin.TabularInline):
    model = models.MapLayer
    extra = 1

class StyleLayerInline(admin.StackedInline):
    model = models.StyleLayer
    extra = 0


class RuleStyleInline(admin.StackedInline):
    model= models.RuleStyle
    extra = 0


class SymbolizerRuleInline(admin.StackedInline):
    model = models.SymbolizerRule
    extra = 0

class MapAdmin(admin.ModelAdmin):
    inlines = (MapLayerInline,)

class LayerAdmin(admin.ModelAdmin):
    inlines = [StyleLayerInline]
    list_display = ('l_name', 'maps')
    search_fields = ['l_name']
    readonly_fields = ['maps', 'l_srs']
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
    fields = ['s_name']
    inlines = [StyleLayerInline, RuleStyleInline]


class RuleAdmin(admin.ModelAdmin):
    inlines = [RuleStyleInline, SymbolizerRuleInline]
    search_fields = ['r_id']


class SymbolizerAdmin(admin.ModelAdmin):
    list_display = ('specialized_type', 'symbid', )

    def specialized_type(self, obj):
        spec = obj.specialized()
        spec_type = unicode(type(spec)).split('.')[-1].replace("'>","")
        ret = spec_type + ', ' + unicode(spec)
        return ret
    



admin.site.register(models.Map, MapAdmin)
admin.site.register(models.Layer, LayerAdmin)
admin.site.register(models.MapLayer)

admin.site.register(models.Style, StyleAdmin)
admin.site.register(models.StyleLayer)
admin.site.register(models.RuleStyle)


admin.site.register(models.Rule, RuleAdmin)
admin.site.register(models.SymbolizerRule)
admin.site.register(models.Symbolizer, SymbolizerAdmin)
admin.site.register(models.BuildingSymbolizer)
admin.site.register(models.LineSymbolizer)
admin.site.register(models.LinePatternSymbolizer)
admin.site.register(models.MarkersSymbolizer)
admin.site.register(models.PointSymbolizer)
admin.site.register(models.PolygonSymbolizer)
admin.site.register(models.PolygonPatternSymbolizer)
admin.site.register(models.RasterSymbolizer)
admin.site.register(models.ShieldSymbolizer)
admin.site.register(models.TextSymbolizer)
