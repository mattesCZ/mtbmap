# -*- coding: utf-8 -*-

# Django imports
from django.core.management.base import BaseCommand

# Local imports
from map.models import TileLayer
from osm_data_processing.updatemap import updatemap
from osm_data_processing.create_osm_objects import copy_osmpoints, copy_osmlines

class Command(BaseCommand):
    args = '<configuration file path>'
    help = 'Update data used for map rendering and timestamp.'

    def handle(self, *args, **options):
        if (len(args)==1):
            config_file = args[0]
            self.stdout.write("Reading configuration file: %s" % config_file)
        else:
            config_file = '../../default.conf'
        date = updatemap(config_file)
        if date:
            copy_osmpoints()
            copy_osmlines()
            tile_layer = TileLayer.objects.get(slug='mtb-map')
            tile_layer.last_update = date
            tile_layer.save()
        else:
            self.stderr.write('An error occured')
