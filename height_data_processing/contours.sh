# Download SRTM4 height GeoTiff files you want from
# http://www.cgiar-csi.org/data/elevation/item/45-srtm-90m-digital-elevation-database-v41
# and unpack the zip files in the HGTFILES folder, each into its own name folder

HGTFILES=$MTBMAP_DIRECTORY"/Data/shadingdata"

rm $HGTFILES/srtm.*

# you can use already generated srtm.tif, then skip gdal_merge.py
# set the latlon range you need

# shift of a half-pixel to the south west for srtm_40_03.tif
#gdal_translate -of GTiff -a_ullr 14.9995833333 49.9995833333 19.9995833333 44.9995833333 srtm_40_03.tif shiftedSrtm_40_03.tif

gdal_merge.py -v -o $HGTFILES/srtm.tif -ul_lr 11.70 51.60 19.20 48.3 $HGTFILES/srtm_*_*/*.tif

gdal_contour -i 5 -snodata -32767 -a height $HGTFILES/srtm.tif $HGTFILES/srtm.shp
/usr/lib/postgresql/8.4/bin/shp2pgsql -d -I -g way $HGTFILES/srtm.shp contours | psql -q gisczech

