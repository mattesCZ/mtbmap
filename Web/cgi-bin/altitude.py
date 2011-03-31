#!/usr/bin/python

import sys
import string
import math
from numpy import *
import zipfile
import os

def main():
    # geometry is an OpenLayers geometry object received via http protocol
    geometry = sys.stdin.readlines()
    strGeom = str(geometry)
#    strGeom="['geometry=LINESTRING%2814.449063110355+48.20762555376%2C15.605274963377+49.230723012117%2C15.467259216312+49.263444605425%29']"
#    strGeom="['geometry=LINESTRING%2814.449063110355+48.20762555376%2C14.449063110355+48.20762555376%29']"
#    strGeom="['geometry=LINESTRING%2815.15420+50.09320%2C15.15459+50.09350%2C15.15472+50.09326%2C15.15420+50.09326%29']"

    print "Content-type: text/html\r\n\r\n"
    if not (checkInput(strGeom)):
        print "<h1>wrong input(1)</h1>"
    else:
        nodes = parseInput(strGeom)
        if (nodes == "wrong input"):
            print "<h1>wrong input(2)</h1>"
        else: drawAltitude(nodes)

def checkInput(input):
    """
    Basically checks the format of the given string.
    """
    if not (string.find(input, "['geometry=LINESTRING%28") + 1):
        return 0
    elif not (string.find(input, "%29']") + 1):
        return 0
    else: return 1

def parseInput(input):
    """
    Parses given string into nodes, returns list of nodes.
    """
    # remove some garbage
    input = string.replace(input, "['geometry=LINESTRING%28", "")
    input = string.replace(input, "%29']", "")
    # nodes is a list of lists which will look like this:
    # [latitude, longitude, distance to previous, height]
    nodes = string.split(input, "%2C")
    nodesInfo = []
    for node in nodes:
        # split to latitude and longitude
        node=string.split(node, "+")
        try:
            temp=float(node[0])
            node[0]=float(node[1])
            node[1]=temp
        except ValueError:
            return "wrong input"
        nodesInfo.append(node)
    return nodesInfo


def drawAltitude(nodes):
    """
    Procedure which checks number of given nodes, counts overall distance
    and calls height functions.
    """
    if ((nodes[0][0]==nodes[1][0]) and (nodes[0][1]==nodes[1][1])):
        # if only one node is given (represented as 2 equal nodes),
        # print its height
        if not appendHeights(nodes):
        # print html output
            print "You have passed just one node: ", nodes[0], "<br>"
            print "Its height is "
            print nodes[0][2]
            print " meters above sea level."
        else:
        	   print "You have passed just one node: ", nodes[0], "<br>"
        	   print "Sorry, we are missing height data for its coordinates."
    else:
        sumdist = 0
        i=0
        # append distances
        for node in nodes:
            if i:
                node.append(dist(i, nodes))
                sumdist = sumdist + node[2]
            else: node.append(0)
            i=i+1
        nodes=analyzeNodes(nodes, sumdist)
        if not (appendHeights(nodes)):
            altitude2svg(nodes, sumdist)
            # convert vector svg file into raster png file
            os.system("rsvg-convert -o ../img/altitude.png ../img/altitude.svg")
            # print html output
            print '<html><body>'
            print '<img src="../img/altitude.png"><br>'
#            print "number of nodes: ", len(nodes)
            print '</body></html>'
        else:
        	   print "Sorry, missing SRTM height data, try longer track."

def dist(index, nodes):
    """
    Returns Great-Circle distance between two nodes using complete formula.
    """
    return 111.191402883*math.degrees(math.acos((math.sin(math.radians(nodes[index][0]))\
    *math.sin(math.radians(nodes[index-1][0]))) + (math.cos(math.radians(nodes[index][0]))\
    *math.cos(math.radians(nodes[index-1][0]))*math.cos(math.radians(nodes[index][1])\
    -math.radians(nodes[index-1][1])))))

## basic "get height" method from SRTM forum
#
#def SRTMExtract(intLat, intLon, x, y):
#    zip_path = '/home/xtesar7/Data/shadingdata/N' + str(intLat) + 'E0'\
#    + str(intLon) + '.hgt.zip'
#    zip_file = zipfile.ZipFile(zip_path, 'r')
#    zip_file_name = zip_file.namelist()[0]
#    hgt_string = zip_file.read(zip_file_name)
#    zip_file.close()
#    hgt_2darray = flipud(((fromstring(string=hgt_string, dtype='int16')).byteswap()).reshape(1201,1201))
#    return hgt_2darray[x][y]

def appendHeights(nodes):
    """
    Opens all *.hgt.zip files needed, converts them into 2D NumPy array
    and puts all off them into the dictionary. Works only for latitudes
    10-90 degrees north and longitudes 10-99 degrees east.
    """
    hgtArrays = {}
    zip_path = '/home/xtesar7/Data/shadingdata/'
    for i in range(len(nodes)):
        key = 'N' + str(int(math.floor(nodes[i][0]))) + 'E0' + str(int(math.floor(nodes[i][1])))
        if not (hgtArrays.has_key(key)):
            zip_file = zipfile.ZipFile(zip_path + key + '.hgt.zip', 'r')
            zip_file_name = zip_file.namelist()[0]
            hgt_string = zip_file.read(zip_file_name)
            zip_file.close()
            hgtArrays[key] = flipud(((fromstring(string=hgt_string, dtype='int16')).byteswap()).reshape(1201,1201))
        nodes[i].append(getHeight(hgtArrays, nodes[i][0], nodes[i][1]))
    # Parsing missing height data
        if ((nodes[i][-1] == -32768) and (i>0)) : nodes[i][-1]=nodes[i-1][-1]
    if (nodes[0][-1] == -32768) : 
        j=1
        while (nodes[j][-1]==-32768) and j<len(nodes)-1:
        	   j=j+1
        if (j==len(nodes)-1): return 1
        while j>0:
        	   nodes[j-1][-1] = nodes[j][-1]
        	   j=j-1
    return 0

def getHeight(hgtArrays, lat, lon):
    """
    Returns height of a point on given latitude and longitude.
    """
    return hgtArrays['N' + str(int(math.floor(lat))) + 'E0' + str(int(math.floor(lon)))][coord2array(lat)][coord2array(lon)]

def coord2array(coord):
    """
    Procedure which maps given latitude or longitude coordination to
    hgtArray rows or columns.
    """
    decPart = coord - math.floor(coord)
    return int(round(1200*decPart))

def analyzeNodes(nodes, sumdist):
    """
    Adds some nodes if the distance between the given nodes is too long.
    """
    # Threshold defines which nodes should be divided.
    # If the overall distance is less than 50 km, threshold is 100m, because of
    # the granularity of height data.
    if (sumdist < 50):
        threshold = 0.1
    else:
        threshold = sumdist/500
    analyzedNodes = []
    previous = nodes[0]
    for node in nodes:
        # if distance between current and previous node is greater than threshold
        if node[2]>threshold:
            # steps is the number of added nodes
            steps = int(math.floor(node[2]/threshold))
            dlat = (node[0] - previous[0])/steps
            dlon = (node[1] - previous[1])/steps
            # add nodes
            for step in range(steps):
                newlat = analyzedNodes[-1][0] + dlat
                newlon = analyzedNodes[-1][1] + dlon
                analyzedNodes.append([newlat, newlon])
                index=len(analyzedNodes)-1
                analyzedNodes[index].append(dist(index,analyzedNodes))
                node[2]=node[2]-analyzedNodes[index][2]
        analyzedNodes.append(node)
        previous = node
    # return new list of nodes
    return analyzedNodes

def ascending(nodes):
    """
    Counts total ascending and descending.
    """
    asc = 0
    desc = 0
    for i in range(len(nodes)-1):
        dif = nodes[i+1][3]-nodes[i][3]
        if dif > 0: asc = asc + dif
        else: desc = desc - dif
    return [asc, desc]

def altitude2svg(nodes, sumdist):
    """
    Draws svg file from given nodes.
    """
    fo = file('../img/altitude.svg', 'w')
    # write SVG headers
    fo.write('<?xml version="1.0" encoding="UTF-8"?>\n')
    fo.write('<!DOCTYPE svg PUBLIC "-//W3C//DTD SVG 1.0//EN" "http://www.w3.org/TR/2001/REC-SVG-20010904/DTD/svg10.dtd">\n')
    fo.write('<svg width="1010" height="300" viewBox="0 0 1010 300" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink">\n')
    # draw altitude fields
    fo.write('    <rect x="0" y="0" width="1010" height="300" fill="white" />'
     '\n    <rect x="35" y="30" width="950" height="246" fill="none" stroke="black" stroke-width="1" />\n')
    maxheight = -10000
    minheight = 10000
    # find min/max height
    for node in nodes:
        if (node[3]>maxheight):
            maxheight = node[3]
        if (node[3] < minheight):
            minheight = node[3]
    # avoids division by zero
    if (maxheight == minheight): maxheight = maxheight + 1
    # constants for mapping real distances and heights into the picture
    normY = float(maxheight - minheight)/200
    normX = sumdist/950
    # begin drawing polyline
    fo.write('    <path fill="none" stroke="black" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" d="M ')
    x=35
    y=0
    diff = 0
    for node in nodes:
        # xf is the shift on x-axis, diff is the remainder after rounding
        xf = (node[2]/normX) + diff
        diff = xf - round(xf)
        x = x + round(xf)
        y = 255 - round((node[3]-minheight)/normY)
        fo.write(str(int(x)) + " " + str(int(y)) + " L ")
    maxY = int(255-round(((maxheight-minheight)/normY)))
    # finish drawing polyline
    fo.write(' "/>\n')
    #print height lines
    fo.write('    <text fill="black" text-anchor="end" x="30" y="256">' + str(minheight) + '</text>\n')
    fo.write('    <line stroke = "red" stroke-dasharray="2,2" x1="35" y1="255" x2="985" y2="255"/>\n')
    fo.write('    <text fill="black" text-anchor="end" x="30" y="' + str(maxY + 4) + '">' + str(maxheight) + '</text>\n')
    fo.write('    <line stroke = "red" stroke-dasharray="2,2" x1="35" y1="' + str(maxY) + '" x2="985" y2="' + str(maxY) + '"/>\n')
    fo.write('    <text fill="black" text-anchor="middle" x="985" y="288">' + str(round(sumdist,1)) + ' km</text>\n')
    # assign 'h' maxheight floored to hundreds
    h = (maxheight/100) * 100
    # avoid label colissions
    if (maxheight-h) < (maxheight-minheight)/20.0:
        h = h-100
    while h > (minheight + (maxheight-minheight)/10): # conditoin avoids label colissions
        hcoord = int(255-round((h-minheight)/normY))
        fo.write('    <line stroke = "black" stroke-dasharray="2,2" x1="35" y1="'
        + str(hcoord) + '" x2="985" y2="' + str(hcoord) + '"/>\n')
        fo.write('    <text fill="black" text-anchor="end" x="30" y="' + str(hcoord + 4) + '">' + str(h) + '</text>\n')
        h = h - 100
    # print distance markers, +/- 5 markers
    if sumdist > 25:
        step = int(round(sumdist/50)*10)
    elif sumdist > 2.5:
        step = int(round(sumdist/5))
    else:
        step = 0.2
    dist = step
    fo.write('    <text fill="black" text-anchor="middle" x="35" y="288">0</text>\n')
    while (dist < sumdist - sumdist/20): # condition 'sumdist/20' avoids label colission
        fo.write('    <line stroke ="black" x1="' + str(round(dist/normX) + 35) + '" y1="276" x2="'
        + str(round(dist/normX) + 35) + '" y2="269"/>\n')
        fo.write('    <text fill="black" text-anchor="middle" x="' + str(round(dist/normX) + 35) + '" y="288">'
        + str(dist) + '</text>\n')
        dist = dist + step
    # print ascending and descending
    ascdesc = ascending(nodes)
    fo.write('    <text fill="black" x="450" y="20">Ascending: ' + str(ascdesc[0]) + '</text>\n')
    fo.write('    <text fill="black" x="550" y="20">Descending: ' + str(ascdesc[1]) + '</text>\n')
    fo.write('    <text fill="black" x="2" y="25">Height (m)</text>\n')
    # print SVG end element
    fo.write('</svg>')


if __name__ == "__main__":
    main()
