import os
import sys

django_path = os.environ['MTBMAP_DJANGO']
sys.path.append(django_path)

os.environ['PYTHON_EGG_CACHE'] = django_path + '/../.python-egg'
os.environ['DJANGO_SETTINGS_MODULE'] = 'settings'

import django.core.handlers.wsgi
application = django.core.handlers.wsgi.WSGIHandler()

