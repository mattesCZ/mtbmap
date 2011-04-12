#!/bin/bash

# script installs Mapnik renderer
# you may need some other packages, which are not in this script, check
# http://trac.mapnik.org/wiki/UbuntuInstallation in case of some problems

sudo apt-get install -y g++ cpp \
libboost1.40-dev libboost-filesystem1.40-dev \
libboost-iostreams1.40-dev libboost-program-options1.40-dev \
libboost-python1.40-dev libboost-regex1.40-dev \
libboost-thread1.40-dev \
libfreetype6 libfreetype6-dev \
libjpeg62 libjpeg62-dev \
libltdl7 libltdl-dev \
libpng12-0 libpng12-dev \
libgeotiff-dev libtiff4 libtiff4-dev libtiffxx0c2 \
libcairo2 libcairo2-dev python-cairo python-cairo-dev \
libcairomm-1.0-1 libcairomm-1.0-dev \
ttf-dejavu ttf-dejavu-core ttf-dejavu-extra \
build-essential python-nose libgdal1-dev

sudo apt-get install curl libcurl4-gnutls-dev

cd $MTBMAP_DIRECTORY/sw
svn co http://svn.mapnik.org/tags/release-0.7.1/ mapnik
cd mapnik
python scons/scons.py configure INPUT_PLUGINS=all OPTIMIZATION=3 SYSTEM_FONTS=/usr/share/fonts/truetype/ttf-dejavu/
python scons/scons.py
sudo python scons/scons.py install

sudo ldconfig

# try in python: import mapnik
# no output means successful instalation
