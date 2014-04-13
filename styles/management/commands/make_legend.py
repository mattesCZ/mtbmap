# -*- coding: utf-8 -*-

# Global imports
import os

# Django imports
from django.core.management.base import BaseCommand

# Local imports
from styles.models import Map, Legend


class Command(BaseCommand):
    args = '<path_to_map_style.xml map_style_name>'
    help = 'Import style into the database and create legend.'

    def handle(self, *args, **options):
        if len(args) == 2:
            path = args[0]
            name = args[1]
            m, created = Map.objects.get_or_create(name=name)
            legend_tmp_dir = './media/legend/tmp'
            if created:
                self.stdout.write('Importing style using name {0} from file {1} ...'.format(name, path))
                m = m.import_map(path=path, name=name)
                if m:
                    self.stdout.write('Style successfully imported.')
                else:
                    self.stderr.write('Error occurred during style import.')
                    return
            else:
                try:
                    m.legend.delete()
                except Legend.DoesNotExist:
                    pass
                self.stdout.write('Using previously imported style, old legend deleted.')
            self.stdout.write('Creating new legend items...')
            m.create_legend()
            if not os.path.exists(legend_tmp_dir):
                os.makedirs(legend_tmp_dir)
            self.stdout.write('Rendering name images...')
            m.legend.create_all_name_images()
            m.legend.create_all_name_images(scale_factor=2)
            self.stdout.write('Rendering legend images...')
            m.legend.create_all_images()
            m.legend.create_all_images(scale_factor=2)
        else:
            self.stderr.write('Incorrect attributes.')
