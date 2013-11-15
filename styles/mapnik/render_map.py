#!/usr/bin/python
from mapnik import *
import sys

def centerToBbox(lat, lon, zoom, imgx, imgy):
    base = 0.000005364418 # longitude range of 1 pixel at zoom 18
    west = lon - (imgx*base*(2**(18-zoom-1)))
    east = lon + (imgx*base*(2**(18-zoom-1)))
    north = lat + base
    south = lat - base
    print "range: ", (west, lat - (imgy*base*(2**(18-zoom-1))), east, lat + (imgy*base*(2**(18-zoom-1))))
    return (west, south, east, north)

if __name__ == "__main__":
    mapfile = "my_styles/mapnik2normal.xml"

    map_uri = "map.png"

    lat = 49.25
    lon = 7.0
    if len(sys.argv)==2:
        zoom = int(sys.argv[1])
    else:
        zoom = 13
    imgx = 500
    imgy = 400

    ll = centerToBbox(lat, lon, zoom, imgx, imgy)
    m = Map(imgx,imgy)
    load_map(m,mapfile)
    prj = Projection("+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over")
    c0 = prj.forward(Coord(ll[0],ll[1]))
    c1 = prj.forward(Coord(ll[2],ll[3]))
    bbox = Box2d(c0.x,c0.y,c1.x,c1.y)
    m.zoom_to_box(bbox)
    im = Image(imgx,imgy)
    render(m, im)
    view = im.view(0,0,imgx,imgy) # x,y,width,height
    view.save(map_uri,'png')

