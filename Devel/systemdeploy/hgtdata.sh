#!/bin/bash

# Script prepares height data for Mapnik, contours are added to your
# PostGIS database as another table

# Copy folder Data/shadingdata from DVD to your Data folder
OSMROOT="/home/xtesar7"

# installing necessary software
sudo apt-get install gdal-bin python-gdal

cd $OSMROOT/sw
svn co http://perrygeo.googlecode.com/svn/trunk/demtools/
cd demtools
g++ hillshade.cpp -I/usr/include/gdal/ -L/usr/lib/ -lgdal1.5.0 -o hillshade
g++ color-relief.cpp -I/usr/include/gdal/ -L/usr/lib/ -lgdal1.5.0 -o color-relief
cp hillshade color-relief $OSMROOT/Data/shadingdata

cd $OSMROOT/Data/shadingdata

# download .hgt.zip files that you want to the $OSMROOT/Data/shadingdata/source
# directory

# upload contours
bash contours.sh

# generate shading GeoTIFF image
# edit bounding data and hillshade parameters in the hillshade.sh script
bash hillshade.sh

# generate hypsometry GeoTIFF image
# edit colorscale.txt to match your region
bash color-relief.sh
