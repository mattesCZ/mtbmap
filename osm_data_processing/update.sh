#!/bin/bash

# Script to update rendering database of mtbmap project
# and restart tirex and apache services.
# Run this as superuser (sudo).

MTBMAP_USER='mattescz'
TIREX_USER='tirex'
MTBMAP_DIR='/home/mattescz/devel/mtbmap'

# update rendering database as mtbmap user
su ${MTBMAP_USER} -c "bash ${MTBMAP_DIR}/osm_data_processing/update_rendering_data.sh ${MTBMAP_DIR}" &&

# restart tirex as tirex user
su ${TIREX_USER} -c "bash ${MTBMAP_DIR}/osm_data_processing/restart_tirex.sh" &&

# reload apache
apachectl configtest &&
service apache2 reload
