# -*- coding: utf-8 -*-

# Local imports
from osm_data_processing.relations2lines.relations2lines import run

# Global imports
import sys, ConfigParser
import string, os, re, shutil
import datetime

def exists(name, path):
    if os.path.exists(path):
        print name + ' succesfully set to: ' + path
    else:
        print 'non-existing file or folder: ' + path
        print 'correct variable ' + name + ' in configuration file'
        raise UpdateError('Please, correct variable ' + name + ' in configuration file')

def downloadFile(source, datadir):
    os.chdir(datadir)
    return os.system('wget -nv -t 3 -N ' + source)

def loadDB(osm2pgsql, database, file, style, cache, port):
    loadCommand = osm2pgsql + ' -s -d ' + database + ' ' + file + ' -S ' + style + ' -C ' + str(cache) + ' -P ' + str(port) + ' --number-processes 8 '
    return os.system(loadCommand)

class UpdateError(Exception):
    def __init__(self, msg):
        self.msg = msg

def updatemap(config_file):
    # set variables from configuration file passed as the command line parameter
    # default is default.conf
    configFile = config_file

    if (os.path.exists(configFile)):
        try:
            config = ConfigParser.ConfigParser()
            config.read(configFile)
        except ConfigParser.Error:
            print 'Configuration file is not well formed, nothing was done'
            sys.exit(1)

        try:
            homepath = config.get('update', 'homepath')
            exists('homepath', homepath)
            datadir = config.get('update', 'datadir')
            exists('datadir', datadir)
            database = config.get('update', 'database')
            print 'database name set to : ' + database
            port = config.get('update', 'port')
            style = config.get('update', 'style')
            exists('style', style)
            cache = config.get('update', 'cache')
            try:
                float(cache)
                print 'cache succesfully set to: ' + cache + 'MB'
            except ValueError:
                print 'variable cache must be a number, you have passed : ' + cache
                cache = '2048'
                print 'cache set to default: 2048MB'
            osm2pgsql = config.get('update', 'osm2pgsql')
            exists('osm2pgsql', osm2pgsql)

            download = config.get('update', 'download')
            format = config.get('update', 'format')
            if (format=='pbf' or format=='xml'):
                print 'Using ' + format + ' format.'
            else:
                raise UpdateError('Incorrect format, use xml or pbf.')
            source_uri = config.get('update', 'source')
            if (download=='yes'):
                source = (source_uri, string.split(source_uri, '/')[-1])
            else:
                source = source_uri
        except ConfigParser.Error:
            print 'Some variables are missing in configuration file. Nothing was done.'
            sys.exit(0)
        except UpdateError, ue:
            print ue.msg
            print 'Nothing was done.'

    else:
        print "Missing configuration file, nothing was done"
        sys.exit(1)

    try:
        #download files
        if (download == 'yes'):
            print 'Downloading file ' + source[1] + ' from ' + source[0] + ' ...'
            result = downloadFile(source[0], datadir)
            if (result!=0):
                raise UpdateError('An error occured while downloading file ' + source[1])
            else:
                sourceFile = source[1]
                print 'File ' + source[1] + ' successfully downloaded.'
        else:
            sourceFile = source

        datetime_in_sec = os.path.getmtime(datadir + sourceFile)
        date = datetime.date.fromtimestamp(datetime_in_sec)

        #osm2pgsql
        if (loadDB(osm2pgsql, database, datadir + sourceFile, style, cache, port) != 0):
            raise UpdateError('An osm2pgsql error occured. Database was probably cleaned.')
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

#    finally:
#        if (os.path.exists(datadir + merged)):
#                os.remove(datadir + merged)
#        for file in boundedFiles:
#            if (os.path.exists(datadir + file)):
#                os.remove(datadir + file)
#        for file in sourceFiles:
#            if (os.path.exists(datadir + file)):
#                os.remove(datadir + file)
