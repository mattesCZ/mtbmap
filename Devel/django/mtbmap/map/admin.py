from map.models import *
from django.contrib import admin

class WeightInline(admin.StackedInline):
    model = Weight
    extra = 1

class WeightClassAdmin(admin.ModelAdmin):
    inlines = [WeightInline]

admin.site.register(Map)
admin.site.register(WeightClass, WeightClassAdmin)
admin.site.register(Weight)
