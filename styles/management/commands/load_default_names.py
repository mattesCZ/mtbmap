# -*- coding: utf-8 -*-

# Django imports
from django.core.management.base import BaseCommand
from django.conf import settings

# Local imports
from styles.translation import load_default_names, load_translation_file


class Command(BaseCommand):
    help = 'Load or update names of map objects used in legend.'

    def handle(self, *args, **options):
        load_default_names()
        for lang_code, lang_name in settings.LANGUAGES:
            if lang_code != settings.LANGUAGE_CODE:
                load_translation_file(lang_code)
