#!/usr/bin/python
# -*- coding: utf-8 -*-

# Global imports
import os
import sys

os.environ['DJANGO_SETTINGS_MODULE'] = 'mtbmap.settings'

# Local imports
from map.models import Map
from osm_data_processing.updatemap import updatemap
from osm_data_processing.create_osm_objects import copy_osmpoints, copy_osmlines

if __name__ == "__main__":
    """
    Update data used for map rendering and timestamp.
    """
    if (len(sys.argv)>1):
        config_file = sys.argv[1]
        print "Reading configuration file: ", config_file
    else:
        config_file = 'default.conf'
    date = updatemap(config_file)
    if date:
        copy_osmpoints()
        copy_osmlines()
        map = Map.objects.all()[0]
        map.last_update = date
        map.save()
    else:
        print 'An error occured'
