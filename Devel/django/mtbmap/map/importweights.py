#!/usr/bin/python
# -*- coding: utf-8 -*-

import simplejson as json
from map.models import WeightClass, Weight
#from map.updateroutingdata import to_float

def import_template(filename):
    """Import weight classes and their parameters into the database."""
    file = open(filename, 'r')
    json_template = json.loads(file.read())
    type = json_template['type']
    for classname, classdict in json_template.items():
        oldclass = WeightClass.objects.filter(classname=classname, type=type)
        if oldclass:
            for oc in oldclass:
                oc.delete()
        if classname=='type':
            continue
        wc = WeightClass(classname=classname, type=type)
        wc.save()
        featureorder = 0
        for feature, value in classdict.items():
            if feature=='order':
                wc.order = value
            elif feature=='max':
                wc.max = value
            elif feature=='min':
                wc.min = value
            else:
                w = Weight(classname=wc, feature=feature, preference=value, order=featureorder)
                w.save()
            featureorder += 1
        wc.save()

