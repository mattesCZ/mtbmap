# -*- coding: utf-8 -*-
# Django imports
from django.core.management.base import BaseCommand

# Local imports
from osm_data_processing.updateroutingdata import copy_ways, add_attributes


class Command(BaseCommand):
    args = '<configuration file path>'
    help = 'Update data used for routing.'

    def handle(self, *args, **options):
        copy_ways()
        add_attributes()
        self.stdout.write("Successfully updated routing data.")
