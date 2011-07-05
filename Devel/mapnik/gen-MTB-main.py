#!/usr/bin/python
#
# Generates a single large PNG image for a UK bounding box
# Tweak the lat/lon bounding box (ll) and image dimensions
# to get an image of arbitrary size.
#
# To use this script you must first have installed mapnik
# and imported a planet file into a Postgres DB using
# osm2pgsql.
#
# Note that mapnik renders data differently depending on
# the size of image. More detail appears as the image size
# increases but note that the text is rendered at a constant
# pixel size so will appear smaller on a large image.

from mapnik import *
import sys, os

def centerToBbox(lat, lon, zoom, imgx, imgy):
    base = 0.000005364418 # longitude range of 1 pixel at zoom 18
    west = lon - (imgx*base*(2**(18-zoom-1)))
    east = lon + (imgx*base*(2**(18-zoom-1)))
    north = lat + base
    south = lat - base
    print "range: ", (west, lat - (imgy*base*(2**(18-zoom-1))), east, lat + (imgy*base*(2**(18-zoom-1))))
    return (west, south, east, north)

if __name__ == "__main__":
    try:
        mapfile = os.environ['MAPNIK_MAP_FILE']
    except KeyError:
        mapfile = "my_styles/MTB-main.xml"
#        mapfile = "my_styles/MTB-onlyMTBtracks.xml"
#        mapfile = "my_styles/MTB-dolomites.xml"
    map_uri = "im_MTB-main.png"

    lat = 49.19
    lon = 16.58
    zoom = 15
    imgx = 1400
    imgy = 800

    ll = centerToBbox(lat, lon, zoom, imgx, imgy)
#    ll = (16.58, 49.25, 16.62, 49.27) #Brno, zoom
#    ll = (12.10, 48.75, 18.9, 51.0) #Cela cr, 7

    m = Map(imgx,imgy)
    load_map(m,mapfile)
    prj = Projection("+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over")
    c0 = prj.forward(Coord(ll[0],ll[1]))
    c1 = prj.forward(Coord(ll[2],ll[3]))
    bbox = Envelope(c0.x,c0.y,c1.x,c1.y)
    m.zoom_to_box(bbox)
    im = Image(imgx,imgy)
    render(m, im)
    view = im.view(0,0,imgx,imgy) # x,y,width,height
    view.save(map_uri,'png')
    os.system("eog -n " + map_uri)

