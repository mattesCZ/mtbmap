#!/bin/bash

# script installs programs that are necessary for maps to be available
# on the internet
## README http://wiki.openstreetmap.org/wiki/HowTo_mod_tile

sudo apt-get install apache2 apache2-threaded-dev apache2-mpm-prefork apache2-utils libagg-dev
cd $MTBMAP_DIRECTORY/sw
svn co http://svn.openstreetmap.org/applications/utils/mod_tile/
cd mod_tile

# if you expect rendering large tiles, consider increasing MAX_SIZE
# parameter in render_config.h file
./autogen.sh
./configure
make && sudo make install && sudo make install-mod_tile

# now edit your own /etc/renderd.conf and /etc/apache2/conf.d/mod_tile.conf
# files and make your HTML page, examples are on DVD
# after that run renderd and restart apache

