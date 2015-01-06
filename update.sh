#!/bin/bash

# Script to update rendering database of mtbmap project
# and restart tirex and apache services.
# Run this as superuser.

MTBMAP_USER='mattescz'
TIREX_USER='tirex'
MTBMAP_DIR='/home/mattescz/devel/mtbmap'

killprocess(){
	PNUM=`pgrep -f "$1"`
	if [ PNUM -gt 0 ];
	then
		kill -9 $1
	fi
	return 0
}

# update rendering database as mtbmap user
su ${MTBMAP_USER} &&
cd ${MTBMAP_DIR} &&
python manage.py update_rendering_data --settings="mtbmap.settings.update_data" &&
exit &&

# stop and start tirex services as tirex user
su tirex &&

killprocess "tirex-backend-manager" &&
sleep 1 &&
killprocess "tirex-master" &&

touch /var/lib/mod_tile/planet-import-complete &&

tirex-backend-manager &&
sleep 1 &&
tirex-master &&

exit

# reload apache
apachectl configtest &&
service apache2 reload
