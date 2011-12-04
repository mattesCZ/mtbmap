#!/bin/bash

# Ubuntu 11.10 Oneiric Ocelot spatial database install script.
# This script installs PostgreSQL 8.4 database with PostGIS extension
# creates new database user and first spatial database prepared for OSM
# vector data import. It's necessary to run with superuser privilegies.

# change this for the root directory of your future OSM system
USER="xtesar7"
DATABASE="gisczech"

cd $MTBMAP_DIRECTORY
mkdir sw Data

# install this packages with all dependencies
sudo apt-get install postgresql-8.4
sudo apt-get install postgresql-server-dev-8.4
sudo apt-get install postgresql-contrib-8.4
# GUI for PostgreSQL, not needed
#sudo apt-get install pgadmin3
sudo apt-get install proj
sudo apt-get install libgeos-dev
sudo apt-get install libxml2-dev
sudo apt-get install python-psycopg2
sudo apt-get install svn

cd sw
wget http://postgis.refractions.net/download/postgis-1.5.3.tar.gz
tar xvfz postgis-1.5.3.tar.gz
cd postgis-1.5.3
./configure
make
sudo make install
sudo passwd postgres
su postgres
createuser $USER
exit
createdb -E UTF8 -O $USER $DATABASE
createlang plpgsql $DATABASE
psql -d $DATABASE -f /usr/share/postgresql/8.4/contrib/postgis-1.5/postgis.sql
echo "ALTER TABLE geometry_columns OWNER TO $USER; \
      ALTER TABLE spatial_ref_sys OWNER TO $USER;" \
      | psql -d $DATABASE
# intarray is not necessary in new version of osm2pgsql:
# psql -d $DATABASE -f /usr/share/postgresql/8.4/contrib/_int.sql

# spatial database is now created, but must be prepared OSM data input

sudo apt-get install autoconf libtool g++
sudo apt-get install libbz2-dev

#protobuf support
cd $MTBMAP_DIRECTORY/sw
sudo apt-get install protobuf-compiler libprotobuf-dev libprotoc-dev
svn checkout http://protobuf-c.googlecode.com/svn/trunk/ protobuf-c-read-only
cd protobuf-c-read-only
./autogen.sh
make
sudo make install 
cd $MTBMAP_DIRECTORY/sw


cd $MTBMAP_DIRECTORY/sw
svn co http://svn.openstreetmap.org/applications/utils/export/osm2pgsql
cd osm2pgsql
./autogen.sh
./configure
make

# include "Google Mercator" projection
psql -d $DATABASE -f 900913.sql

cd $MTBMAP_DIRECTORY/sw
wget http://bretth.dev.openstreetmap.org/osmosis-build/osmosis-latest.tgz
tar xvfz osmosis-latest.tgz

# now you can upload OSM data using Osm2pgsql or updatemap.py script,

