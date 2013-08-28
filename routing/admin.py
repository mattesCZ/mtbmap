# -*- coding: utf-8 -*-

# Django imports
from django.contrib import admin

# Local imports
from routing.models import *

class WeightInline(admin.StackedInline):
    model = Weight
    extra = 1

class WeightClassAdmin(admin.ModelAdmin):
    inlines = [WeightInline]

admin.site.register(WeightCollection)
admin.site.register(WeightClass, WeightClassAdmin)
admin.site.register(Weight)
admin.site.register(Preferred)
