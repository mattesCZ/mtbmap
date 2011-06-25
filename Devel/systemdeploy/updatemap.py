#!/usr/bin/python

#-------------------------------------------------------------------------
# script updates (or creates) database data with yesterdays Czech extract
# from planet.osm file available on osm.kyblsoft.cz/archiv
# Very simple solution, no update is performed on the 1st day of a month.
#
# Edit paths for your local settings, make sure you have relations2lines.py
# script downloaded, if you need to display paralell tracks with Mapnik
#
# Edit osm2pgsql default.style file to upload attributes you need
#
# to download different dataset, more changes will be needed

import os, sys, shutil
import datetime, re, httplib

def updateFromFile(filename):
    try:
        os.chdir('/home/xtesar7/sw/osm2pgsql')
    except OSError, msg:
        raise UpdateError('osm2pgsql is not present')
    ret = os.system('./osm2pgsql -s -d gisczech ' + homepath + '/Data/' + filename + ' -S ' + homepath + '/Data/mtbmap.style -C 2000')
    if (ret != 0):
        raise UpdateError('An error occured, osm2pgsql returned ' + str(ret/256) + ' exit status')
    try:
        os.system(homepath + '/Devel/relations2lines.py')
    except OSError, msg:
        raise UpdateError('relations2lines.py failed, osm data uploaded')
    refreshDate('index.html', str(date))
    refreshDate('en.html', str(date))
    # restart renderd:
    try:
        os.chdir('/home/xtesar7/sw/mod_tile')
        os.system('kill $(pidof renderd)')
        os.system('./renderd')
    except OSError, msg:
        raise UpdateError(msg + '\n problem with mod_tile/renderd only, data uploaded, ignore next line')

def refreshDate(file,date):
    try:
        fo = open(homepath + '/Devel/ruzne/' + file,'r')
        s = fo.read()
        fo.close()
        fo = open(homepath + '/Devel/ruzne/' + file,'w')
        fo.write(re.sub("20[1-9][0-9]-[0-1][0-9]-[0-3][0-9]",date,s))
        fo.close()
    except IOError:
        print 'Cannot refresh date for ' + file
    else:
        try:
            shutil.copyfile(homepath + '/Devel/ruzne/' + file, homepath + '/Web/' + file)
        except IOError:
            print 'Problem with copying ' + file + ', check access privileges.'

class UpdateError(Exception):
    def __init__(self, msg):
        self.msg = msg

if __name__ == "__main__":
    homepath = os.getenv('MTBMAP_DIRECTORY')
    if (homepath == None):
        homepath = '/home/xtesar7/Devel/mtbmap-czechrep'

    date = datetime.date.today()
    try:
        try:
            connection = httplib.HTTPConnection('osm.kyblsoft.cz')
            connection.request('HEAD', '/archiv/czech_republic-' + str(date) + '.osm.bz2')
            response = connection.getresponse()
            # if today's dataset doesn't exist, use yesterday's
            if (response.status != 200):
                date = date - datetime.timedelta(days=1)
        except socket.error, msg:
            print 'no connection to kyblsoft'
            connection.close()

        connection.close()

        filename1 = 'czech_republic.osm.bz2'
        url1 = 'http://download.geofabrik.de/osm/europe/czech_republic.osm.bz2'
        filename2 = 'czech_republic-' + str(date) + '.osm.bz2'
        url2 = 'http://osm.kyblsoft.cz/archiv/czech_republic-' + str(date) + '.osm.bz2'

        try:
            os.chdir(homepath + '/Data')
        except OSError, msg:
            raise UpdateError(homepath + '/Data directory is not present')

    
        if (os.system('wget -t 3 ' + url1)==0):
            updateFromFile(filename1)
        elif (os.system('wget -t 3 ' + url2)==0):
            updateFromFile(filename2)
        else:
            raise UpdateError('An error occured while downloading from given URLs ')

    except UpdateError, ue:
        print ue.msg
        print 'Map data was not uploaded. '

    finally:
        if (os.path.exists(homepath + '/Data/' + filename1)):
            os.remove(homepath + '/Data/' + filename1)
        if (os.path.exists(homepath + '/Data/' + filename2)):
            os.remove(homepath + '/Data/' + filename2)


