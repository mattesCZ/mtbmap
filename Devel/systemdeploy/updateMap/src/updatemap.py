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
            shutil.copyfile(homepath + '/Devel/ruzne/' + file, homepath + '/Web/mtbmap/' + file)
        except IOError:
            print 'Problem with copying ' + file + ', check access privileges.'

class UpdateError(Exception):
    def __init__(self, value, msg):
        self.value = value
        self.msg = msg

if __name__ == "__main__":
    homepath = '/home/xtesar7'

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
            connection.close()
            raise UpdateError(1, msg)

        connection.close()

        filename = 'czech_republic-' + str(date) + '.osm.bz2'
        url = 'http://osm.kyblsoft.cz/archiv/czech_republic-' + str(date) + '.osm.bz2'

        try:
            os.chdir(homepath + '/Data')
        except OSError, msg:
            raise UpdateError(1, msg)

    
        if (os.system('wget ' + url)==0):
            try:
                os.chdir(homepath + '/sw/osm2pgsql')
            except OSError, msg:
                raise UpdateError(1, msg)
            ret = os.system('./osm2pgsql -s -d gisczech ../../Data/' + filename + ' -S ./default.style -C 2000')
            if (ret != 0):
                try:
                    os.remove('../../Data/' + filename)
                except OSError, msg:
                    raise UpdateError(1, 'An error occured, osm2pgsql returned ' + str(ret/256) + 'exit status and: ' + msg)
                raise UpdateError(1, 'An error occured, osm2pgsql returned ' + str(ret/256) + 'exit status')
            try:
                os.remove('../../Data/' + filename)
            except OSError, msg:
                print 'Someone must have been really fast: ' + msg
            os.system(homepath + '/Devel/relations2lines.py')
            refreshDate('index.html', str(date))
            refreshDate('en.html', str(date))
            # restart renderd:
            os.chdir(homepath + '/sw/mod_tile')
            os.system('kill $(pidof renderd)')
            os.system('./renderd')
        else:
            raise UpdateError(1, 'An error occured while downloading ' + url)
    except UpdateError:
        print 'Map data was not uploaded'