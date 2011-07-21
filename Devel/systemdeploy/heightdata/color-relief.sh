# Download SRTM4 height GeoTiff files you want from
# http://www.cgiar-csi.org/data/elevation/item/45-srtm-90m-digital-elevation-database-v41
# and unpack the zip files in the HGTFILES folder, each into its own name folder

HGTUTILS=$HOME"/sw/gdal-1.7.1/apps"
HGTFILES="/Data/shadingdata"

# you can use already generated srtm.tif, then skip gdal_merge.py
# set the latlon range you need
gdal_merge.py -v -o $HGTFILES/srtm.tif -ul_lr 12.0 51.0 19.00 \
  48.5 $MTBMAP_DIRECTORY$HGTFILES/srtm_*_*/*.tif

# set the -tr parameter (150 150 for lower resolution, max 30 30 for higher)
gdalwarp -co "TILED=YES" -srcnodata 32767 -dstnodata 0 \
  -t_srs "+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0
  +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgris=@null
  +no_defs" -rcs -order 3 -tr 150 150 -wt Float32 -ot Float32 \
  -wo SAMPLE_STEPS=100 $HGTFILES/srtm.tif $HGTFILES/warped150.tif

# configure your colorscale
$HGTUTILS/gdaldem color-relief $HGTFILES/warped150.tif colorscale.txt $HGTFILES/hypsometry150.tif

