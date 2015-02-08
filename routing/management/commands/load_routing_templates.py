# -*- coding: utf-8 -*-

# Django imports
from django.core.management.base import BaseCommand

# Local imports
from routing.importweights import initialize_preferred, initialize_weightclass, initialize_weight, import_json_template


class Command(BaseCommand):
    help = 'Load or update names of map objects used in legend.'

    def handle(self, *args, **options):
        initialize_preferred()
        initialize_weightclass()
        initialize_weight()

        templates = [
            'routing/profiles/bicycle_mtb_weights.json',
            'routing/profiles/default_weights.json',
            'routing/profiles/hiking_weights.json',
            'routing/profiles/bicycle_technical_weights.json',
            'routing/profiles/bicycle_trekking_weights.json'
        ]

        for template in templates:
            import_json_template(template)
