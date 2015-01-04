# -*- coding: utf-8 -*-
# Production django settings for mtbmap project.

from .base import *

DEBUG = False
TEMPLATE_DEBUG = DEBUG

ALLOWED_HOSTS = ['.mtbmap.cz', '.tchor.fi.muni.cz']

DATABASES['osm_data']['NAME'] = get_secret('DB_NAME_DATA_MASTER')

OSM2PGSQL_CACHE = 24576

SERVER_EMAIL = 'server_message@mtbmap.cz'

EMAIL_SUBJECT_PREFIX = '[mtbmap.cz admin] '
