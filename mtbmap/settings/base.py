# -*- coding: utf-8 -*-
"""
Django base settings for mtbmap project.

For more information on this file, see
https://docs.djangoproject.com/en/1.6/topics/settings/

For the full list of settings and their values, see
https://docs.djangoproject.com/en/1.6/ref/settings/
# See also settings_local.py to override these defaults.
"""

from os.path import join, abspath, dirname
import json

from django.core.exceptions import ImproperlyConfigured

here = lambda *dirs: join(abspath(dirname(__file__)), *dirs)
ROOT_PATH = here('..', '..')
root = lambda *dirs: join(abspath(ROOT_PATH), *dirs)

SECRETS_PATH = here('secrets.json')

with open(SECRETS_PATH) as f:
    secrets = json.loads(f.read())


def get_secret(key, secrets=secrets):
    try:
        return secrets[key]
    except KeyError:
        error_msg = 'Set the {0} environment variable'.format(key)
        raise ImproperlyConfigured(error_msg)

SECRET_KEY = get_secret('SECRET_KEY')

DEBUG = False

TEMPLATE_DEBUG = False

ALLOWED_HOSTS = []

INSTALLED_APPS = (
    'django.contrib.auth',
    'django.contrib.contenttypes',
    'django.contrib.sessions',
    'django.contrib.sites',
    'django.contrib.messages',
    'django.contrib.staticfiles',
    'django.contrib.admin',
    'django.contrib.gis',
    'styles',
    'map',
    'routing',
    'osm_data_processing',
    'height_data_processing',
    'south',
    # Uncomment the next line to enable admin documentation:
    # 'django.contrib.admindocs',
)

MIDDLEWARE_CLASSES = (
    'django.contrib.sessions.middleware.SessionMiddleware',
    'django.middleware.common.CommonMiddleware',
    'django.middleware.locale.LocaleMiddleware',
    'django.middleware.csrf.CsrfViewMiddleware',
    'django.contrib.auth.middleware.AuthenticationMiddleware',
    'django.contrib.messages.middleware.MessageMiddleware',
    'django.middleware.clickjacking.XFrameOptionsMiddleware',
)

ROOT_URLCONF = 'mtbmap.urls'

WSGI_APPLICATION = 'mtbmap.wsgi.application'

# see also MapRouter to set proper database settings
DATABASES = {
    'default': {
        'ENGINE': 'django.contrib.gis.db.backends.postgis',
        'NAME': 'mtbmap_default',
        'USER': get_secret('DB_USER'),
        'PASSWORD': get_secret('DB_PASSWORD'),
        'HOST': 'localhost',
        'PORT': '5432',
    },
    'osm_data': {
        'ENGINE': 'django.contrib.gis.db.backends.postgis',
        'NAME': 'mtbmap_data',
        'USER': get_secret('DB_USER'),
        'PASSWORD': get_secret('DB_PASSWORD'),
        'HOST': 'localhost',
        'PORT': '5432',
    }
}

DATABASE_ROUTERS = ['mtbmap.dbrouters.OsmDataRouter']

LANGUAGE_CODE = 'en'

TIME_ZONE = 'Europe/Prague'

USE_I18N = True

USE_L10N = True

USE_TZ = True

STATIC_URL = '/static/'

STATIC_ROOT = ''

MEDIA_URL = '/media/'

MEDIA_ROOT = root('media')

ADMINS = (('Martin TESAR', 'osmmtb@gmail.com'),)

MANAGERS = ADMINS

STATICFILES_FINDERS = (
    # 'django.contrib.staticfiles.finders.FileSystemFinder',
    'django.contrib.staticfiles.finders.AppDirectoriesFinder',
)

TEMPLATE_LOADERS = (
    # 'django.template.loaders.filesystem.Loader',
    'django.template.loaders.app_directories.Loader',
)

LANGUAGES = (
    ('en', u'English'),
    ('cs', u'Česky'),
)

MAPNIK_STYLES = root('styles', 'mapnik', 'my_styles/')
SRTM_DATA = root('Data', 'shadingdata', 'SRTMv2/')

# update OSM data settings
OSM_DATADIR = root('Data/')
OSM_DOWNLOAD = True
OSM_FORMAT = 'pbf'
OSM_SOURCE_URI = 'http://download.geofabrik.de/europe-latest.osm.pbf'

OSM2PGSQL = '/usr/bin/osm2pgsql'
OSM2PGSQL_STYLE = root('osm_data_processing', 'config', 'mtbmap.style')
OSM2PGSQL_CACHE = 4096
