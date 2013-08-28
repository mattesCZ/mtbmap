#!/usr/bin/python
# -*- coding: utf-8 -*-

# Global imports
import simplejson as json

# Local imports
from routing.models import WeightCollection, WeightClass, Weight, Preferred

def import_json_template(filename):
    """
    Import weight classes and their parameters into the database.
    """
    file = open(filename, 'r')
    json_template = json.loads(file.read())
    file.close()
    name = json_template['name']
    oneway = json_template['oneway']
    vehicle = json_template['vehicle']
    if WeightCollection.objects.filter(name=name).count():
        WeightCollection.objects.filter(name=name)[0].delete()
    weight_collection = WeightCollection(name=name, vehicle=vehicle)
    weight_collection.save()
    class_order = 0
    for c in json_template['classes']:
        weight_class = WeightClass()
        weight_class.classname = c['name']
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
                w = Weight(classname=weight_class, feature=feature['name'], preference=feature['value'], order=feature_order)
                if 'visible' in feature:
                    w.visible = feature['visible']
                w.save()
                feature_order +=1
        class_order += 1
    for p in json_template['preferred']:
        preferred = Preferred()
        preferred.name = p['name']
        preferred.collection = weight_collection
        preferred.use = p['use']
        preferred.value = p['value']
        preferred.save()
