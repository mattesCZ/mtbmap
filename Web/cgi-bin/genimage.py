#!/usr/bin/python
# -*- coding: utf-8 -*-

__author__="xtesar7"

from mapnik import *
import sys, os, string
from math import log10

def main():
#    mapfile = "/home/xtesar7/Devel/mtbmap-czechrep/Devel/mapnik/my_styles/MTB-main.xml"
    mapfile = "/home/xtesar7/Devel/mtbmap-czechrep/Devel/mapnik/my_styles/print.xml"
#    map_uri = "/home/xtesar7/Devel/mtbmap-czechrep/Devel/mapnik/export.png"
    # handle input string
    rawinput = str(sys.stdin.readlines())
    if "['addscale=ON&" in rawinput:
        showScale=True
        rawinput = string.replace(rawinput, "['addscale=ON&center=", "")
    else:
        showScale = False
        rawinput = string.replace(rawinput, "['center=", "")
    rawinput = string.replace(rawinput, "']", "")
    properties = string.split(rawinput, '%2C')

    try:
        bottom = float(properties[0])
        left = float(properties[1])
        top = float(properties[2])
        right = float(properties[3])
        imgx = int(properties[4])*2
        imgy = int(properties[5])*2
#        bottom = 49.23
#        left = 16.45
#        top = 49.26
#        right = 16.50
#        imgx = 723
#        imgy = 664

    except ValueError:
        print "Content-Type: text/html \n"
        print "Wrong input"
        print rawinput
        return
    # don't render image larger than 4 Mpx
    if (imgx*imgy > 12000000):
        print "Content-Type: text/html \n"
        print "<h3>Sorry, requested image is too large.</h3>"
        return

    m = Map(imgx,imgy)
    load_map(m,mapfile)
    prj = Projection("+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over")
    bottomLeft = prj.forward(Coord(left,bottom))
    topRight = prj.forward(Coord(right,top))
    bbox = Envelope(bottomLeft.x,bottomLeft.y,topRight.x,topRight.y)
    m.zoom_to_box(bbox)
    im = Image(imgx,imgy)
    render(m, im)
#    print "Content-Type: text/html \n"
    if showScale:
        sb = scalebar(top, bottom, left, right, imgx, imgy)
        im.blend(0, imgy - sb.height(), sb, 1)
#    view = im.view(0, 0, imgx, imgy)
#    view.save(map_uri, 'png')
#    os.system("eog -n " + map_uri)
    png = im.tostring("png")
    # output headers and PNG file to standard output
    print "Content-Type: image/png"
    print "Content-Disposition: attachment; filename=\"render.png\"\n"
    sys.stdout.write(png)

def scalebar(top, bottom, left, right, imgx, imgy):
    DEGREE_M = 111194.92664455873
    AVERAGE_BAR_WIDTH = 200
    pixelRange = (top-bottom)/imgy
    pixelLength = pixelRange*DEGREE_M

    height = 40
    if imgx>AVERAGE_BAR_WIDTH :
        width = AVERAGE_BAR_WIDTH
    else:
        width = imgx

    if pixelLength*AVERAGE_BAR_WIDTH>1000:
        #scale in kilometers
        units = 'km'
    else:
        #scale in meters
        units = 'm'

    mainLineLength = width*pixelLength
    mainLineLength = int(round(mainLineLength, -int(log10(mainLineLength))))
    scalebarSVG(mainLineLength, 2*pixelLength, units)
    os.system("rsvg-convert -z 2.0 -o ../img/scalebar.png ../img/scalebar.svg")
    overlayIm = Image.open("../img/scalebar.png")
    return overlayIm

def scalebarSVG(mainLineLength, pixelLength, units):
    fo = file('../img/scalebar.svg', 'w')
    width = int(mainLineLength/pixelLength)
    if units=='km':
        mainLineLength = mainLineLength/1000
    # write SVG headers
    fo.write('<?xml version="1.0" encoding="UTF-8"?>\n')
    fo.write('<!DOCTYPE svg PUBLIC "-//W3C//DTD SVG 1.0//EN" "http://www.w3.org/TR/2001/REC-SVG-20010904/DTD/svg10.dtd">\n')
    fo.write('<svg width="' + str(width + 40) + '" height="40" xmlns="http://www.w3.org/2000/svg" id="scalebar">\n')
    # draw altitude fields
    fo.write('    <rect x="0" y="0" width="' + str(width + 40) + '" height="40" style="fill:white;stroke:black;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" />\n')
    fo.write('    <line style="stroke:black;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1"'
    ' x1="10" y1="35" x2="' + str(width + 10) + '" y2="35" />')
    fo.write('    <line style="stroke:black;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1"'
    ' x1="10" y1="35" x2="10" y2="30" />')
    fo.write('    <line style="stroke:black;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1"'
    ' x1="' + str(width/2 + 10) + '" y1="35" x2="' + str(width/2 + 10) + '" y2="30" />')
    fo.write('    <line style="stroke:black;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1"'
    ' x1="' + str(width + 10) + '" y1="35" x2="' + str(width + 10) + '" y2="30" />')
    fo.write('    <text fill="black" text-anchor="middle" x="10" y="25">0</text>')
    if (mainLineLength%2):
        fo.write('    <text fill="black" text-anchor="middle" x="' + str(width/2 + 10) + '" y="25">' + str(mainLineLength/2.0) + '</text>')
    else:
        fo.write('    <text fill="black" text-anchor="middle" x="' + str(width/2 + 10) + '" y="25">' + str(mainLineLength/2) + '</text>')
    fo.write('    <text fill="black" text-anchor="middle" x="' + str(width + 10) + '" y="25">' + str(mainLineLength) + '</text>')
    fo.write('    <text fill="black" text-anchor="middle" x="' + str(width + 10 + 18) + '" y="25">' + units + '</text>')
    #print height lines
    # print SVG end element
    fo.write('</svg>')

    return

if __name__ == "__main__":
    main()
