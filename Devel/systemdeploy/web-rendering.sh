#!/bin/bash

# script installs programs that are necessary for maps to be available
# on the internet

OSMROOT="/home/xtesar7"

sudo apt-get install apache2
sudo apt-get install apache2-threaded-dev
cd $OSMROOT/sw
svn co http://svn.openstreetmap.org/applications/utils/mod_tile/
cd mod_tile

# if you expect rendering large tiles, consider increasing MAX_SIZE
# parameter in render_config.h file
make
sudo make install

# now edit your own /etc/renderd.conf and /etc/apache2/conf.d/mod_tile.conf
# files and make your HTML page, examples are on DVD
# after that run renderd and restart apache

