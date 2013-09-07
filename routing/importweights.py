#!/usr/bin/python
# -*- coding: utf-8 -*-

# Global imports
import simplejson as json

# Django imports
from django.conf import settings

# Local imports
from routing.models import WeightCollection, WeightClass, Weight, Preferred
from routing.translation import sync_with_empty_weight_collection

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
        weight_class = WeightClass()
        weight_class.slug = c.get('slug','')
        weight_class.collection = weight_collection
        weight_class.visible = c['visible']
        weight_class.order = class_order
        if 'max' in c:
            weight_class.max = c['max']
        if 'min' in c:
            weight_class.min = c['min']
        weight_class.save()
        if 'features' in c:
            feature_order = 0
            for feature in c['features']:
                w = Weight(weight_class=weight_class,
                            slug=feature.get('slug', ''),
                            preference=feature['value'],
                            order=feature_order)
                if 'visible' in feature:
                    w.visible = feature['visible']
                w.save()
                feature_order +=1
        class_order += 1
    for p in json_template['preferred']:
        preferred = Preferred()
        preferred.slug = p.get('slug','')
        preferred.collection = weight_collection
        preferred.use = p['use']
        preferred.value = p['value']
        preferred.save()
    if WeightCollection.objects.filter(slug='empty').count():
        sync_with_empty_weight_collection(weight_collection)
