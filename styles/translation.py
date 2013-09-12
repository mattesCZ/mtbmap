# -*- coding: utf-8 -*-

# Global imports
import csv

# Django imports
from django.conf import settings
from django.template.defaultfilters import slugify

# Local imports
from styles.models import LegendItem, LegendItemName

LANG_CODES = [lang_code for lang_code, lang_name in settings.LANGUAGES]

def create_translation_file(filename):
    written_titles = []
    with open(filename, 'wb') as f:
        writer = csv.writer(f)
        header = ['title']
        for code in LANG_CODES:
            header.append('name_%s' % code)
        writer.writerow(header)
        for row in LegendItem.objects.values_list(*header):
            if not row[0] in written_titles:
                writer.writerow(row)
                written_titles.append(row[0])

def sync_legend_translation(filename):
    with open(filename, 'r') as f:
        reader = csv.reader(f)
        columns = reader.next()
        for row in reader:
            legend_item_names = LegendItemName.objects.filter(slug=row[0])
            lookup_dict = {}
            for i in range(1, len(columns[1:]) + 1):
                lookup_dict[columns[i]] = row[i]
            legend_item_names.update(**lookup_dict)
        print 'Legend names synced successfully'

def sync_slugified_titles(input_filename):
    with open(input_filename, 'r') as rf:
        dict_reader = csv.DictReader(rf)
        for row in dict_reader:
            legend_items = LegendItem.objects.filter(title=row['title'])
            sl_title = slugify(row['name_en'])
            if legend_items.count() and legend_items[0].title != sl_title:
                for li in legend_items:
                    li.rules.all().update(name=sl_title)
                if legend_items[0].name_en != row['name_en']:
                    legend_items.update(name_en=row['name_en'], title=sl_title)
                else:
                    legend_items.update(title=sl_title)

