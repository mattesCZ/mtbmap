#!/bin/bash

# Script to restart Tirex
# Run this as user tirex.

killprocess(){
	PNUM=`pgrep -f "$1"`
	if [ $PNUM -gt 0 ];
	then
		kill $PNUM
	fi
	return 0
}

killprocess "tirex-backend-manager" &&
sleep 1 &&
killprocess "tirex-master" &&

touch /var/lib/mod_tile/planet-import-complete &&

tirex-backend-manager &&
sleep 1 &&
tirex-master
