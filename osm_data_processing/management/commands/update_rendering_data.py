# -*- coding: utf-8 -*-

# Django imports
from django.core.management.base import BaseCommand
from django.core.mail import mail_admins

# Local imports
from map.models import TileLayer
from osm_data_processing.updatemap import updatemap
from osm_data_processing.create_osm_objects import copy_osmpoints, copy_osmlines
from osm_data_processing.swap_db import swap_db
from osm_data_processing.update_error import UpdateError


class Command(BaseCommand):
    help = 'Update data used for map rendering and timestamp.'

    def handle(self, *args, **options):
        try:
            date = updatemap()
            copy_osmpoints()
            copy_osmlines()
            tile_layer = TileLayer.objects.get(slug='mtb-map')
            tile_layer.last_update = date
            tile_layer.save()
            swap_db()
            mail_admins('[mtbmap update]', 'Update of rendering database finished successfully with data from {date}'.format(date=date))
        except UpdateError, error:
            message = '''
                Update of rendering database failed.
                Error message: {msg}
            '''.format(msg=error.msg)
            mail_admins('[mtbmap update]', message)
            self.stderr.write(message)
