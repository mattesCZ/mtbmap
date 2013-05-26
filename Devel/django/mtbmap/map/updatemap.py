#!/usr/bin/python
# -*- coding: utf-8 -*-

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
    return os.system('wget -t 3 -N ' + source)


def applyBBox(osmosis, north, west, south, east, datadir, filename, format):
    print 'applying bounding box for ' + filename
    outputFile = 'bbox_' + filename
    if (format=='pbf'):
        bboxCommand = osmosis + ' --read-' + format + ' file=' + datadir + filename + ' --buffer bufferCapacity=1000 --bounding-box \
                      left="' + west + '" right="' + east +'" top="' + north +'" bottom="' + south + '" \
                      --write-' + format + ' file=' + datadir + outputFile
        res = os.system(bboxCommand)
    else:
        res = os.system('bzcat ' + datadir + filename + ' | \
                        ' + osmosis + ' --read-' + format + ' file=- --bounding-box \
                        left="' + west + '" right="' + east +'" top="' + north +'" bottom="' + south + '" \
                        --write-' + format + ' file=' + datadir + 'bbox_' + filename)
    if (res==0):
        print 'Bounding box applied into file bbox_' + filename
        return outputFile
    else:
        raise UpdateError('Error occured while applying bounding box with osmosis on file: ' + filename)

def mergeFiles(osmosis, boundedFiles, datadir):
    if (sort=='yes'):
        for file in boundedFiles:
            print 'sorting file ' + file + ' for merge...'
            res = os.system(osmosis + ' --read-' + format + ' file=' + datadir + file + ' --buffer bufferCapacity=1000 --sort --write-' + format + ' file=' + datadir + 'sort_' + file)
            if (res == 0):
                os.remove(datadir + file)
                os.rename(datadir + 'sort_' + file, datadir + file)
            else:
                raise UpdateError('Error occured while sorting file ' + file)
    count = len(boundedFiles)
    print str(count) + ' files needs ' + str(count-1) + ' merges...'
    lastMerged = boundedFiles[0]
    while (count>1):
        if (format=='pbf'):
            if (count == 2):
                mergedFile = 'merged.pbf'
            else:
                mergedFile = str(count-1) + 'merged.pbf'
            mergeCommand = osmosis + ' --read-' + format + ' file=' + datadir + lastMerged + ' --read-' + format + ' file=' + datadir + boundedFiles[count-1] + ' --buffer bufferCapacity=1000  --merge --write-' + format + ' file=' + datadir + mergedFile
        else:
            if (count == 2):
                mergedFile = 'merged.osm.bz2'
            else:
                mergedFile = str(count-1) + 'merged.osm.bz2'
            mergeCommand = osmosis + ' --read-' + format + ' file=' + datadir + lastMerged + ' --read-' + format + ' file=' + datadir + boundedFiles[count-1] + ' --buffer bufferCapacity=1000  --merge --write-' + format + ' file=' + datadir + mergedFile
        print 'Merging file ' + boundedFiles[count-1] + ' to complete merge file...'
        res = os.system(mergeCommand)
        if (res!=0):
            raise UpdateError('Error occured while merging data files with osmosis.')
        else:
            print 'Successful merge no. ' + str(len(boundedFiles) - count + 1) + '. ' + str(count-2) + ' of ' + str(len(boundedFiles) - 1) + ' merges left...'
        #remove temporary merge file
        if (count != len(boundedFiles)):
            os.remove(datadir + lastMerged)
        lastMerged = mergedFile
        count -= 1
    return mergedFile

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
            osmosis = config.get('update', 'osmosis')
            exists('osmosis', osmosis)
            osm2pgsql = config.get('update', 'osm2pgsql')
            exists('osm2pgsql', osm2pgsql)
            relations2lines = config.get('update', 'relations2lines')
            exists('relations2lines', relations2lines)

            boundingBox = config.get('bbox', 'boundingBox')
            if (boundingBox=='yes'):
                try:
                    north = float(config.get('bbox', 'north'))
                except ValueError, NoOptionError:
                    print 'Bounding box value for north not set properly, using default 90'
                    north = 90
                try:
                    west = float(config.get('bbox', 'west'))
                except ValueError, NoOptionError:
                    print 'Bounding box value for west not set properly, using default -180'
                    west = -180
                try:
                    south = float(config.get('bbox', 'south'))
                except ValueError, NoOptionError:
                    print 'Bounding box value for south not set properly, using default -90'
                    south = -90
                try:
                    east = float(config.get('bbox', 'east'))
                except ValueError, NoOptionError:
                    print 'Bounding box value for east not set properly, using default 180'
                    east = 180
                print 'Bounding box set to:'
                print ' N: ' + str(north)
                print ' W: ' + str(west)
                print ' S: ' + str(south)
                print ' E: ' + str(east)
            else:
                print 'No bounding box will be applied'

            download = config.get('update', 'download')
            sort = config.get('update', 'sort')
            format = config.get('update', 'format')
            if (format=='pbf' or format=='xml'):
                print 'Using ' + format + ' format.'
            else:
                raise UpdateError('Incorrect format, use xml or pbf.')
            configSources = config.items('mainSource')
        except ConfigParser.Error:
            print 'Some variables are missing in configuration file. Nothing was done.'
            sys.exit(0)
        except UpdateError, ue:
            print ue.msg
            print 'Nothing was done.'

        sources = []
        for configSource in configSources:
            if (download=='yes'):
                source = [configSource[1], string.split(configSource[1], '/')[-1]]
                sources.append(source)
            else:
                sources.append(configSource[1])

    else:
        print "Missing configuration file, nothing was done"
        sys.exit(1)

    #data are probably from yesterdays planet file
    try:
        #download files
        sourceFiles = []
        if (download == 'yes'):
            for source in sources:
                print 'Downloading file ' + source[1] + ' from ' + source[0] + ' ...'
                result = downloadFile(source[0], datadir)
                if (result!=0):
                    raise UpdateError('An error occured while downloading file ' + source[1])
                else:
                    sourceFiles.append(source[1])
                    print 'File ' + source[1] + ' successfully downloaded.'
        else:
            sourceFiles = sources

        datetime_in_sec = os.path.getmtime(datadir + sourceFiles[0])
        date = datetime.date.fromtimestamp(datetime_in_sec)
        #apply bounding box on each file
        if (boundingBox=='yes'):
            boundedFiles = []
            for file in sourceFiles:
                boundedFiles.append(applyBBox(osmosis, str(north), str(west), str(south), str(east), datadir, file, format))
            print 'Bounding box successfully applied'
        else:
            boundedFiles = sourceFiles

        #merge files into one
        if (len(boundedFiles)>1):
            merged = mergeFiles(osmosis, boundedFiles, datadir)
            print 'Downloaded files were succesfully merged'
        else:
            merged = boundedFiles[0]

        #osm2pgsql
        if (loadDB(osm2pgsql, database, datadir + merged, style, cache, port) != 0):
            raise UpdateError('An osm2pgsql error occured. Database was probably cleaned.')
        else:
            print 'OSM data successfully loaded to database, running relations2lines.py ...'
        #relations2lines
        os.system(relations2lines + ' ' + database + ' ' + str(port))

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
