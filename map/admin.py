# -*- coding: utf-8 -*-

# Django imports
from django.contrib import admin

# Local imports
from map.models import *

admin.site.register(Map)
admin.site.register(GeojsonLayer)
admin.site.register(RoutingEvaluation)
