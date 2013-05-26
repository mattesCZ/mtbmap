#!/usr/bin/python
# -*- coding: utf-8 -*-

# Global imports
import os
import sys

os.environ['DJANGO_SETTINGS_MODULE'] = 'settings'

# Local imports
from map.models import Map

if (len(sys.argv)>1):
    config_file = sys.argv[1]
    print "Reading configuration file: ", config_file
else:
    config_file = 'default.conf'
map = Map.objects.all()[0]
map.update_rendering_data(config_file)