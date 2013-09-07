# -*- coding: utf-8 -*-

# Global imports
import csv

# Django imports
from django.conf import settings

# Local imports
from routing.models import *

def copy_translatable_field(target_model, field_name, source_model):
    for lang_code, lang_name in settings.LANGUAGES:
        local_field_name = '_'.join([field_name, lang_code])
        setattr(target_model, local_field_name, getattr(source_model, local_field_name))

def sync_with_empty_weight_collection(weight_collection):
    empty_col = WeightCollection.objects.get(slug='empty')
    empty_col_classes = empty_col.weightclass_set.all()
    for c in weight_collection.weightclass_set.all():
        empty_col_c = empty_col_classes.get(slug=c.slug)
        copy_translatable_field(c, 'name', empty_col_c)
        c.link = empty_col_c.link
        c.save()
        for w in c.weight_set.all():
            empty_col_w = empty_col_c.weight_set.get(slug=w.slug)
            copy_translatable_field(w, 'name', empty_col_w)
            w.save()
    empty_col_preferreds = empty_col.preferred_set.all()
    for p in weight_collection.preferred_set.all():
        empty_col_p = empty_col_preferreds.get(slug=p.slug)
        copy_translatable_field(p, 'name', empty_col_p)
        p.save()
