# -*- coding: utf-8 -*-
# Django settings for updating rendering database used in production.

from .production import *

DATABASES['osm_data']['NAME'] = get_secret('DB_NAME_DATA_UPDATE')
