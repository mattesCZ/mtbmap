# -*- coding: utf-8 -*-

# Global imports
import csv
import os.path
import logging

# Django imports
from django.conf import settings

# Local imports
# TODO use 'import models' and get model with 'models.__dict__[model_name]' or similar
from .models import WeightClass, Weight, Preferred  # accessed with globals()[model_name]

LANG_CODES = [code for code, name in settings.LANGUAGES]
MODEL_NAMES = ['WeightClass', 'Weight', 'Preferred']

logger = logging.getLogger(__name__)


def dump_translation_files(lang_code):
    name_field = 'name_%s' % lang_code
    directory = _get_locale_directory(lang_code)
    for model_name in MODEL_NAMES:
        filename = os.path.join(directory, '%s.csv' % model_name.lower())
        fields = ['slug', 'name_en', name_field]
        if model_name == 'Weight':
            fields = ['slug', 'weight_class__slug', 'name_en', name_field]
        _write_csv(filename, model_name, fields)


def load_translation_files(lang_code):
    name_field = 'name_%s' % lang_code
    directory = _get_locale_directory(lang_code)
    for model_name in MODEL_NAMES:
        filename = os.path.join(directory, '%s.csv' % model_name.lower())
        model = globals()[model_name]
        with open(filename, 'r') as f:
            reader = csv.DictReader(f)
            line = 2
            for row_dict in reader:
                new_value = row_dict[name_field]
                if new_value:
                    try:
                        kwargs = {'slug': row_dict['slug']}
                        if model_name == 'Weight':
                            kwargs['weight_class__slug'] = row_dict['weight_class__slug']
                        obj = model.objects.get(**kwargs)
                        if getattr(obj, name_field) != new_value:
                            setattr(obj, name_field, new_value)
                            obj.save()
                            logger.info('Updating slug=%s, %s = %s' % (row_dict['slug'], name_field, new_value))
                    except model.DoesNotExist:
                        logger.warn('Slug %s on line %i not found in the db!' % (row_dict['slug'], line))
                line += 1


def _get_locale_directory(lang_code):
    return 'routing/locale/%s/' % lang_code


def _write_csv(filename, model_name, fields):
    with open(filename, 'wb') as f:
        writer = csv.writer(f)
        writer.writerow(fields)
        model = globals()[model_name]
        if 'slug' in fields:
            for row in model.objects.order_by('slug').values_list(*fields):
                writer.writerow(row)
        else:
            for row in model.objects.values_list(*fields):
                writer.writerow(row)
