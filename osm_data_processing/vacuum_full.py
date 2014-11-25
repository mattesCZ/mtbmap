#!/usr/bin/python
# -*- coding: utf-8 -*-

# Global imports
import os

os.environ['DJANGO_SETTINGS_MODULE'] = 'mtbmap.settings.local'
MAP_DB = 'osm_data'

# Django imports
from django.db import connections

# Local imports
from osm_data_processing.updateroutingdata import vacuum

if __name__ == "__main__":
    vacuum(connections[MAP_DB])
