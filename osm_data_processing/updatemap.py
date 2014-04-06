# -*- coding: utf-8 -*-

# Local imports
from osm_data_processing.relations2lines.relations2lines import run

# Global imports
import string
import os
import datetime

# Django imports
from django.conf import settings


def exists(name, path):
    if os.path.exists(path):
        print '%s successfully set to: %s' % (name, path)
    else:
        print 'non-existing file or folder: %s' % (path)
        print 'correct variable %s in configuration file' % (name)
        raise UpdateError('Please, correct variable %s in configuration file' % (name))


def download_file(source, datadir):
    os.chdir(datadir)
    return os.system('wget -nv -t 3 -N %s' % (source))


def load_db(osm2pgsql, database, file, style, cache, port):
    load_command = ('%s -s -d %s %s -S %s -C %s -P %s --number-processes 8 '
                    % (osm2pgsql, database, file, style, cache, port))
    return os.system(load_command)


class UpdateError(Exception):
    def __init__(self, msg):
        self.msg = msg


def updatemap():
    try:
        datadir = settings.OSM_DATADIR
        exists('datadir', datadir)
        database = settings.DATABASES['osm_data']['NAME']
        print 'database name set to : %s' % (database)
        port = settings.DATABASES['osm_data']['PORT']
        style = settings.OSM2PGSQL_STYLE
        exists('style', style)
        cache = settings.OSM2PGSQL_CACHE
        try:
            float(cache)
            print 'cache succesfully set to: %s MB' % (cache)
        except (ValueError, TypeError):
            print 'variable cache must be a number, you have passed : %s' % (cache)
            cache = 2048
            print 'cache set to default: 2048MB'
        osm2pgsql = settings.OSM2PGSQL
        exists('osm2pgsql', osm2pgsql)
        format = settings.OSM_FORMAT
        if (format == 'pbf' or format == 'xml'):
            print 'Using %s format.' % (format)
        else:
            raise UpdateError('Incorrect format, use xml or pbf.')
        source_uri = settings.OSM_SOURCE_URI
        if settings.OSM_DOWNLOAD:
            source = (source_uri, string.split(source_uri, '/')[-1])
        else:
            source = source_uri
    except UpdateError, ue:
        print ue.msg
        print 'Nothing was done.'
        return None
    try:
        #download files
        if (settings.OSM_DOWNLOAD):
            print 'Downloading file %s from %s ...' % (source[1], source[0])
            result = download_file(source[0], datadir)
            if (result != 0):
                raise UpdateError('An error occurred while downloading file %s' % (source[1]))
            else:
                source_file = source[1]
                print 'File %s successfully downloaded.' % (source_file)
        else:
            source_file = source

        datetime_in_sec = os.path.getmtime(datadir + source_file)
        date = datetime.date.fromtimestamp(datetime_in_sec)

        #osm2pgsql
        if (load_db(osm2pgsql, database, datadir + source_file, style, cache, port) != 0):
            raise UpdateError('An osm2pgsql error occurred. Database was probably cleaned.')
        else:
            print 'OSM data successfully loaded to database, running relations2lines.py ...'
        #relations2lines
        run(database, str(port))

        #return source file creation date
        return date
    except UpdateError, ue:
        print ue.msg
        print 'Map data was not uploaded.'
        return None
