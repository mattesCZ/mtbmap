# Download SRTM4 height GeoTiff files you want from
# http://www.cgiar-csi.org/data/elevation/item/45-srtm-90m-digital-elevation-database-v41
# and unpack the zip files in the HGTFILES folder, each into its own name folder

GDAL=$MTBMAP_DIRECTORY"/sw/gdal-1.8.1"
HGTUTILS=$GDAL"/apps"
HGTFILES=$MTBMAP_DIRECTORY"/Data/shadingdata"

# you can use already generated srtm.tif, then skip gdal_merge.py
# set the latlon range you need
$GDAL/swig/python/scripts/gdal_merge.py -v -o $HGTFILES/srtm.tif -ul_lr 11.70 51.60 19.20 \
  48.3 $HGTFILES/srtm_*_*/*.tif

$HGTUTILS/gdal_contour -i 5 -snodata -32767 -a height $HGTFILES/srtm.tif $HGTFILES/srtm.shp
shp2pgsql -d -I -g way $HGTFILES/srtm contours | psql -q gisczech

