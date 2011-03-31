#!/usr/bin/python -u
#
#------------------------------------------------------------------------------------
# generates single image of the bounding box given to standard input from HTTP
# based on OSM generate_image.py file
#
#

from mapnik import *
import sys, os, string

def main():
    mapfile = "/home/xtesar7/Devel/mapnik/my_styles/MTB-main.xml"
    map_uri = "../img/export.png"
    # handle input string
    rawinput = str(sys.stdin.readlines())
    rawinput = string.replace(rawinput, "['center=", "")
    rawinput = string.replace(rawinput, "']", "")
    properties = string.split(rawinput, '%2C')

    try:
        ll = (float(properties[1]),float(properties[0]),float(properties[3]),float(properties[2]),)
        imgx = int(properties[4])
        imgy = int(properties[5])
    except ValueError:
        print "Content-Type: text/html \n"
        print "Wrong input"
        return
    # don't render image larger than 4 Mpx
    if (imgx*imgy > 4000000):
        print "Content-Type: text/html \n"
        print "<h3>Sorry, requested image is too large.</h3>"
        return

    m = Map(imgx,imgy)
    load_map(m,mapfile)
    prj = Projection("+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over")
    c0 = prj.forward(Coord(ll[0],ll[1]))
    c1 = prj.forward(Coord(ll[2],ll[3]))
    bbox = Envelope(c0.x,c0.y,c1.x,c1.y)
    m.zoom_to_box(bbox)
    im = Image(imgx,imgy)
    render(m, im)
    png = im.tostring("png")
    # output headers and PNG file to standard output
    print "Content-Type: image/png"
    print "Content-Disposition: attachment; filename=\"render.png\"\n"
    sys.stdout.write(png)

if __name__ == "__main__":
    main()
