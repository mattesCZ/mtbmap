# -*- coding: utf-8 -*-

# Django imports
from django.core.management.base import BaseCommand

# Local imports
from map.models import Map
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
            map = Map.objects.all()[0]
            map.last_update = date
            map.save()
        else:
            self.stderr.write('An error occured')
