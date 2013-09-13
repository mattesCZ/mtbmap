#!/usr/bin/python
# -*- coding: utf-8 -*-

# Global imports
import simplejson as json
import csv

# Django imports
from django.conf import settings

# Local imports
from routing.models import WeightCollection, WeightClass, WeightClassValue, Weight, WeightValue, Preferred, PreferredValue

def initialize_preferred(filename='routing/fixtures/preferred.csv'):
    with open(filename, 'r') as f:
        reader = csv.DictReader(f)
        for row_dict in reader:
            Preferred(**row_dict).save()

def initialize_weightclass(filename='routing/fixtures/weightclass.csv'):
    with open(filename, 'r') as f:
        reader = csv.DictReader(f)
        for row_dict in reader:
            WeightClass(**row_dict).save()

def initialize_weight(filename='routing/fixtures/weight.csv'):
    with open(filename, 'r') as f:
        reader = csv.DictReader(f)
        for row_dict in reader:
            weight_class_slug = row_dict.pop('weight_class')
            weight_class = WeightClass.objects.get(slug=weight_class_slug)
            Weight(weight_class=weight_class,**row_dict).save()

def import_json_template(filename):
    """
    Import weight classes and their parameters into the database.
    """
    file = open(filename, 'r')
    json_template = json.loads(file.read())
    file.close()
    slug = json_template['slug']
    oneway = json_template['oneway']
    vehicle = json_template['vehicle']
    if WeightCollection.objects.filter(slug=slug).count():
        WeightCollection.objects.filter(slug=slug).delete()
    weight_collection = WeightCollection(slug=slug, vehicle=vehicle)
    for lang_code, lang_name in settings.LANGUAGES:
        local_name = 'name_%s' % lang_code
        setattr(weight_collection, local_name, json_template.get(local_name, ''))
    weight_collection.save()
    class_order = 0
    for c in json_template['classes']:
        weight_class = WeightClass.objects.get(slug=c['slug'])
        wc_value = WeightClassValue(collection=weight_collection,
                                    weight_class=weight_class,
                                    order=class_order,
                                    max=c.get('max', None),
                                    min=c.get('min', None),
                                    visible=c['visible'])
        wc_value.save()
        feature_order = 0
        for feature in c.get('features',[]):
            weight = Weight.objects.get(weight_class=weight_class, slug=feature['slug'])
            weight_value = WeightValue(weight_class_value=wc_value,
                                  weight=weight,
                                  preference=feature['value'],
                                  order=feature_order,
                                  visible=feature.get('visible', True))
            weight_value.save()
            feature_order +=1
        class_order += 1
    for p in json_template['preferred']:
        preferred = Preferred.objects.get(slug=p['slug'])
        preferred_value = PreferredValue(collection=weight_collection,
                                         preferred=preferred,
                                         use=p['use'],
                                         value=p['value'])
        preferred_value.save()
#     if slug!='empty' and WeightCollection.objects.filter(slug='empty').count():
#         sync_with_empty_weight_collection(weight_collection)
