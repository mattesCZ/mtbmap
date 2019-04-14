# Download SRTM4 height GeoTiff files you want from
# http://www.cgiar-csi.org/data/elevation/item/45-srtm-90m-digital-elevation-database-v41
# and unpack the zip files in the HGTFILES folder, each into its own name folder

HGTFILES=$MTBMAP_DIRECTORY"/Data/shadingdata"

# you can use already generated srtm.tif, then skip gdal_merge.py
# set the latlon range you need
gdal_merge.py -v -o $HGTFILES/srtm.tif -ul_lr 11.70 51.60 19.20 \
  48.3 $HGTFILES/srtm_*_*/*.tif

# set the -tr parameter (150 150 for lower resolution, max 30 30 for higher)
gdalwarp -co "TILED=YES" -srcnodata -32768 -dstnodata 255 \
  -t_srs "+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0
  +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgris=@null
  +no_defs" -rcs -order 3 -tr 30 30 -wt Float32 -ot Float32 \
  -wo SAMPLE_STEPS=100 $HGTFILES/srtm.tif $HGTFILES/warped30.tif

gdaldem hillshade $HGTFILES/warped30.tif $HGTFILES/hillshade30.tif -s 0.2 -compute_edges

rm $HGTFILES/warped30.tif
