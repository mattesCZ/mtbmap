import os
import sys

sys.path.append('/home/xtesar7/Devel/mtbmap-czechrep/Devel/django/mtbmap')

os.environ['PYTHON_EGG_CACHE'] = '/home/xtesar7/Devel/mtbmap-czechrep/Devel/django/.python-egg'
os.environ['DJANGO_SETTINGS_MODULE'] = 'settings'

import django.core.handlers.wsgi
application = django.core.handlers.wsgi.WSGIHandler()

