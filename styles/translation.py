# -*- coding: utf-8 -*-

# Global imports
import csv

# Django imports
from django.conf import settings

# Local imports
from styles.models import LegendItem

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
            legend_items = LegendItem.objects.filter(title=row[0])
            lookup_dict = {}
            for i in range(1, len(columns[1:]) + 1):
                lookup_dict[columns[i]] = row[i]
            legend_items.update(**lookup_dict)
        print 'Legend names synced successfully'
