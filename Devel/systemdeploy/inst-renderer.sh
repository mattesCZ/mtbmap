#!/bin/bash

# script installs Mapnik renderer
# you may need some other packages, which are not in this script, check
# http://trac.mapnik.org/wiki/UbuntuInstallation in case of some problems
#
# mapnik is now in version 2.0.0 and was moved to https://github.com/mapnik/mapnik
# old version of mapnik and patch must be found and downloaded manually

sudo apt-get install \
libboost1.42-dev libboost-filesystem1.42-dev \
libboost-iostreams1.42-dev libboost-program-options1.42-dev \
libboost-python1.42-dev libboost-regex1.42-dev \
libboost-thread1.42-dev \
libfreetype6 libfreetype6-dev \
libjpeg62 libjpeg62-dev \
libltdl7 libltdl-dev \
libpng12-0 libpng12-dev \
libgeotiff-dev libtiff4 libtiff4-dev libtiffxx0c2 \
libcairo2 libcairo2-dev python-cairo python-cairo-dev \
libcairomm-1.0-1 libcairomm-1.0-dev \
ttf-dejavu ttf-dejavu-core ttf-dejavu-extra \
build-essential python-nose libgdal1-dev python-gdal gdal-bin\
curl libcurl4-gnutls-dev

cd $MTBMAP_DIRECTORY/sw
# download mapnik version 0.7.1 and patch for offset lines rendering
tar -xvjf mapnik-0.7.1.tar.bz2
cd mapnik-0.7.1
patch -p0 < ../mapnik0.7.1-offsets_v3.patch


python scons/scons.py configure INPUT_PLUGINS=all OPTIMIZATION=3 SYSTEM_FONTS=/usr/share/fonts/truetype/ttf-dejavu/
python scons/scons.py
sudo python scons/scons.py install

sudo ldconfig

# try in python: import mapnik
# no output means successful instalation
