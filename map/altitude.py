#!/usr/bin/python
# -*- coding: utf-8 -*-

# Global imports
import math
from numpy import *
import zipfile

# Local imports
from map.printing import svg_string_to_png
from mtbmap.settings import SRTM_DATA

def altitude_image(nodes):
    if len(nodes)==1:
        # if only one node is given
        # print its height
        if not appendHeights(nodes):
        # print html output
            return nodes[0][2]
        else:
            return -1
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
            svg = altitude2svg(nodes, sumdist)
            # convert vector svg file into raster png file
            im = svg_string_to_png(svg, 'altitude.png', 1010, 300)
            # print html output
            return im
        else:
            return -1

def height(node):
    nodes = [node]
    appendHeights(nodes)
    return nodes[0][-1]

def dist(index, nodes):
    """
    Returns Great-Circle distance between two nodes using complete formula.
    """
    if nodes[index-1][0]==nodes[index][0] and nodes[index-1][1]==nodes[index][1]:
        return 0.0
    else:
        return 111.191402883*math.degrees(math.acos((math.sin(math.radians(nodes[index][0]))\
        *math.sin(math.radians(nodes[index-1][0]))) + (math.cos(math.radians(nodes[index][0]))\
        *math.cos(math.radians(nodes[index-1][0]))*math.cos(math.radians(nodes[index][1])\
        -math.radians(nodes[index-1][1])))))
        return ret

def appendHeights(nodes):
    """
    Opens all *.hgt.zip files needed, converts them into 2D NumPy array
    and puts all off them into the dictionary. Works only for latitudes
    10-90 degrees north and longitudes 10-99 degrees east.
    """
    hgtArrays = {}
    zip_path = SRTM_DATA
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
    svg = ''
    # write SVG headers
    svg += '<?xml version="1.0" encoding="UTF-8"?>\n'
    svg += '<!DOCTYPE svg PUBLIC "-//W3C//DTD SVG 1.0//EN" "http://www.w3.org/TR/2001/REC-SVG-20010904/DTD/svg10.dtd">\n'
    svg += '<svg width="1010" height="300" viewBox="0 0 1010 300" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink">\n'
    # draw altitude fields
    svg += '    <rect x="0" y="0" width="1010" height="300" fill="white" />\n    <rect x="35" y="30" width="950" height="246" fill="none" stroke="black" stroke-width="1" />\n'
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
    svg += '    <path fill="none" stroke="black" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" d="M '
    x=35
    y=0
    diff = 0
    for node in nodes:
        # xf is the shift on x-axis, diff is the remainder after rounding
        xf = (node[2]/normX) + diff
        diff = xf - round(xf)
        x = x + round(xf)
        y = 255 - round((node[3]-minheight)/normY)
        svg += str(int(x)) + " " + str(int(y)) + " L "
    maxY = int(255-round(((maxheight-minheight)/normY)))
    # finish drawing polyline
    svg += ' "/>\n'
    #print height lines
    svg += '    <text fill="black" text-anchor="end" x="30" y="256">' + str(minheight) + '</text>\n'
    svg += '    <line stroke = "red" stroke-dasharray="2,2" x1="35" y1="255" x2="985" y2="255"/>\n'
    svg += '    <text fill="black" text-anchor="end" x="30" y="' + str(maxY + 4) + '">' + str(maxheight) + '</text>\n'
    svg += '    <line stroke = "red" stroke-dasharray="2,2" x1="35" y1="' + str(maxY) + '" x2="985" y2="' + str(maxY) + '"/>\n'
    svg += '    <text fill="black" text-anchor="middle" x="985" y="288">' + str(round(sumdist,1)) + ' km</text>\n'
    # assign 'h' maxheight floored to hundreds
    h = (maxheight/100) * 100
    # avoid label colissions
    if (maxheight-h) < (maxheight-minheight)/20.0:
        h = h-100
    while h > (minheight + (maxheight-minheight)/10): # conditoin avoids label colissions
        hcoord = int(255-round((h-minheight)/normY))
        svg += '    <line stroke = "black" stroke-dasharray="2,2" x1="35" y1="' + str(hcoord) + '" x2="985" y2="' + str(hcoord) + '"/>\n'
        svg += '    <text fill="black" text-anchor="end" x="30" y="' + str(hcoord + 4) + '">' + str(h) + '</text>\n'
        h = h - 100
    # print distance markers, +/- 5 markers
    if sumdist > 25:
        step = int(round(sumdist/50)*10)
    elif sumdist > 2.5:
        step = int(round(sumdist/5))
    else:
        step = 0.2
    dist = step
    svg += '    <text fill="black" text-anchor="middle" x="35" y="288">0</text>\n'
    while (dist < sumdist - sumdist/20): # condition 'sumdist/20' avoids label colission
        svg += '    <line stroke ="black" x1="' + str(round(dist/normX) + 35) + '" y1="276" x2="' + str(round(dist/normX) + 35) + '" y2="269"/>\n'
        svg += '    <text fill="black" text-anchor="middle" x="' + str(round(dist/normX) + 35) + '" y="288">' + str(dist) + '</text>\n'
        dist = dist + step
    # print ascending and descending
    ascdesc = ascending(nodes)
    svg += '    <text fill="black" text-anchor="middle" x="550" y="20">Ascending: ' + str(ascdesc[0]) + ' Descending: ' + str(ascdesc[1]) + '</text>\n'
#    svg += '    <text fill="black" x="550" y="20">Descending: ' + str(ascdesc[1]) + '</text>\n'
    svg += '    <text fill="black" x="2" y="25">Height (m)</text>\n'
    # print SVG end element
    svg += '</svg>'
    return svg
