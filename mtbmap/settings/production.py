# -*- coding: utf-8 -*-
# Local django settings for mtbmap project.

from .base import *

DEBUG = False
TEMPLATE_DEBUG = DEBUG

ALLOWED_HOSTS = ['.mtbmap.cz', '.tchor.fi.muni.cz']

OSM2PGSQL_CACHE = 24576

SERVER_EMAIL = 'server_message@mtbmap.cz'

EMAIL_SUBJECT_PREFIX = '[mtbmap.cz admin] '
