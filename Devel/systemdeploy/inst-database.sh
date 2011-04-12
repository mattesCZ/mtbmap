#!/bin/bash

# Ubuntu 9.10 Karmic Koala spatial database install script.
# This script installs PostgreSQL 8.4 database with PostGIS extension
# creates new database user and first spatial database prepared for OSM
# vector data import. It's necessary to run with superuser privilegies.

# change this for the root directory of your future OSM system
USER="xtesar7"
DATABASE="gisczech"

cd $MTBMAP_DIRECTORY
mkdir sw Data

# install this packages with all dependencies
sudo apt-get install postgresql
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
wget http://postgis.org/download/postgis-1.5.1.tar.gz
tar xvfz postgis-1.5.1.tar.gz
cd postgis-1.5.1
./configure
make
sudo make install
sudo passwd postgres
su postgres
createuser $USER
exit
createdb -E UTF8 -O $USER $DATABASE
createlang plpgsql gisczech
psql -d $DATABASE -f /usr/share/postgresql/8.4/contrib/postgis-1.5/postgis.sql
echo "ALTER TABLE geometry_columns OWNER TO $USER; \
      ALTER TABLE spatial_ref_sys OWNER TO $USER;" \
      | psql -d $DATABASE
psql -d $DATABASE -f /usr/share/postgresql/8.4/contrib/_int.sql

# spatial database is now created, but must be prepared OSM data input

sudo apt-get install autoconf
sudo apt-get install libbz2-dev
cd $MTBMAP_DIRECTORY/sw
svn co http://svn.openstreetmap.org/applications/utils/export/osm2pgsql
cd osm2pgsql
./autogen.sh
./configure
make

# include "Google Mercator" projection
psql -d $DATABASE -f 900913.sql

# now you can upload OSM data using Osm2pgsql or updatemap.py script,

