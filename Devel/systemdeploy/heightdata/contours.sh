# Download SRTM4 height GeoTiff files you want from
# http://www.cgiar-csi.org/data/elevation/item/45-srtm-90m-digital-elevation-database-v41
# and unpack the zip files in the HGTFILES folder, each into its own name folder

HGTUTILS=$HOME"/sw/gdal-1.7.1/apps"
HGTFILES="/Data/shadingdata"

# you can use already generated srtm.tif, then skip gdal_merge.py
# set the latlon range you need
gdal_merge.py -v -o $HGTFILES/srtm.tif -ul_lr 12.0 51.0 19.00 \
  48.5 $MTBMAP_DIRECTORY$HGTFILES/srtm_*_*/*.tif

gdal_contour -i 5 -snodata -32767 -a height $HGTFILES/srtm.tif $HGTFILES/srtm.shp
shp2pgsql -d -I -g way $HGTFILES/srtm contours | psql -q gisczech

