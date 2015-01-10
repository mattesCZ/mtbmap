# -*- coding: utf-8 -*-
# Local django settings for mtbmap project.

from .base import *

DEBUG = True
TEMPLATE_DEBUG = DEBUG

ALLOWED_HOSTS = ['*']

OSM_DOWNLOAD = False
OSM_SOURCE_URI = 'saarland-latest.osm.pbf'

OSM2PGSQL = root('..', '../', 'sw', 'geo', 'osm2pgsql', 'osm2pgsql')
OSM2PGSQL_CACHE = 2048

EMAIL_BACKEND = 'django.core.mail.backends.console.EmailBackend'
