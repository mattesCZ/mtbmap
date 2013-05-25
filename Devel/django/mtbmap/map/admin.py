#!/usr/bin/python
# -*- coding: utf-8 -*-

# Django imports
from django.contrib import admin

# Local imports
from map.models import *

class WeightInline(admin.StackedInline):
    model = Weight
    extra = 1

class WeightClassAdmin(admin.ModelAdmin):
    inlines = [WeightInline]

admin.site.register(Map)
admin.site.register(WeightClass, WeightClassAdmin)
admin.site.register(Weight)
