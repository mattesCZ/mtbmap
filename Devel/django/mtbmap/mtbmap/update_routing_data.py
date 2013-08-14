#!/usr/bin/python
# -*- coding: utf-8 -*-

# Global imports
import os

os.environ['DJANGO_SETTINGS_MODULE'] = 'settings'

# Local imports
from map.models import Map
from map.updateroutingdata import copy_ways, add_attributes

if __name__ == "__main__":
    copy_ways()
    add_attributes()
