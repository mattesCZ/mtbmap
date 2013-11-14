# -*- coding: utf-8 -*-

# Global imports
import math
from numpy import *
import zipfile

# Django imports
from django.utils.translation import ugettext as _

# Local imports
from map.printing import svg_string_to_png
from mtbmap.settings import SRTM_DATA
from routing.mathfunctions import haversine

NONE_HEIGHT = -32768

def height(point):
    """
    Get height of point with coordinates: (lat,lon)
    """
    hgt = ProfileNode(point[0], point[1]).srtm_height()
    if hgt < 0:
        return NONE_HEIGHT
    else:
        return hgt

def hgt_file_key(lat, lon):
    """
    Compute height file key for given coordinates.
    Format is (N|S).nn.(W|E).nnn
    """
    ret_value = ''
    if lat<0:
        lat = abs(lat) + 1
        ret_value += 'S'
    else:
        ret_value += 'N'
    ret_value += _zero_prefix(int(math.floor(lat)), 2)
    if lon<0:
        lon = abs(lon) + 1
        ret_value += 'W'
    else:
        ret_value += 'E'
    ret_value += _zero_prefix(int(math.floor(lon)), 3)
    return ret_value

def _zero_prefix(integer, length=3):
    """
    Prepend zeros to have correct length.
    """
    value = str(integer)
    return '0'*(length - len(value)) + value


class HgtFile:
    def __init__(self, node):
        self.key = hgt_file_key(node.lat, node.lon)
        zip_path = SRTM_DATA
        zip_file = zipfile.ZipFile(zip_path + self.key + '.hgt.zip', 'r')
        zip_file_name = zip_file.namelist()[0]
        hgt_string = zip_file.read(zip_file_name)
        zip_file.close()
        self.file = flipud(((fromstring(string=hgt_string, dtype='int16')).byteswap()).reshape(1201,1201))

    def height(self, lat, lon):
        """
        Get height of corresponding pixel value in height file.
        """
        return self.file[self._coord2array(lat)][self._coord2array(lon)]

    def _coord2array(self, coord):
        """
        Procedure which maps given latitude or longitude coordination to
        hgtArray rows or columns.
        """
        decPart = coord - math.floor(coord)
        return int(round(1200*decPart))


class AltitudeProfile:
    def __init__(self, points):
        self.input_nodes = [ProfileNode(point[0], point[1]) for point in points]
        self.sumdist = self._compute_distances(self.input_nodes)
        self.nodes = self._insert_nodes(self.input_nodes)
        self.status = self._initialize_hgt_files()
        self.status -= self._compute_heights()

    def svg_profile(self):
        """
        Draws svg file from given nodes.
        """
        if self.status != 0:
            return NONE_HEIGHT
        svg = ''
        # write SVG headers
        svg += '<?xml version="1.0" encoding="UTF-8"?>\n'
        svg += '<!DOCTYPE svg PUBLIC "-//W3C//DTD SVG 1.0//EN" "http://www.w3.org/TR/2001/REC-SVG-20010904/DTD/svg10.dtd">\n'
        svg += '<svg width="1010" height="300" viewBox="0 0 1010 300" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink">\n'
        # draw altitude fields
        svg += '    <rect x="0" y="0" width="1010" height="300" fill="white" />\n    <rect x="35" y="30" width="950" height="246" fill="none" stroke="black" stroke-width="1" />\n'
        max_height = -10000
        min_height = 10000
        # find min/max height
        for node in self.nodes:
            if (node.height>max_height):
                max_height = node.height
            if (node.height < min_height):
                min_height = node.height
        # avoids division by zero
        if (max_height == min_height): max_height = max_height + 1
        # constants for mapping real distances and heights into the picture
        normY = float(max_height - min_height)/200
        normX = self.sumdist/950
        # begin drawing polyline
        svg += '    <path fill="none" stroke="black" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" d="M '
        x=35
        y=0
        diff = 0
        for node in self.nodes:
            # xf is the shift on x-axis, diff is the remainder after rounding
            xf = (node.dist/normX) + diff
            diff = xf - round(xf)
            x = x + round(xf)
            y = 255 - round((node.height-min_height)/normY)
            svg += str(int(x)) + " " + str(int(y)) + " L "
        maxY = int(255-round(((max_height-min_height)/normY)))
        # finish drawing polyline
        svg += ' "/>\n'
        #print height lines
        svg += '    <text fill="black" text-anchor="end" x="30" y="256">' + str(min_height) + '</text>\n'
        svg += '    <line stroke = "red" stroke-dasharray="2,2" x1="35" y1="255" x2="985" y2="255"/>\n'
        svg += '    <text fill="black" text-anchor="end" x="30" y="' + str(maxY + 4) + '">' + str(max_height) + '</text>\n'
        svg += '    <line stroke = "red" stroke-dasharray="2,2" x1="35" y1="' + str(maxY) + '" x2="985" y2="' + str(maxY) + '"/>\n'
        svg += '    <text fill="black" text-anchor="middle" x="985" y="288">' + str(round(self.sumdist,1)) + ' km</text>\n'
        # assign 'h' max_height floored to hundreds
        h = (max_height/100) * 100
        # avoid label colissions
        if (max_height-h) < (max_height-min_height)/20.0:
            h = h-100
        while h > (min_height + (max_height-min_height)/10): # conditoin avoids label colissions
            hcoord = int(255-round((h-min_height)/normY))
            svg += '    <line stroke = "black" stroke-dasharray="2,2" x1="35" y1="' + str(hcoord) + '" x2="985" y2="' + str(hcoord) + '"/>\n'
            svg += '    <text fill="black" text-anchor="end" x="30" y="' + str(hcoord + 4) + '">' + str(h) + '</text>\n'
            h = h - 100
        # print distance markers, +/- 5 markers
        if self.sumdist > 25:
            step = int(round(self.sumdist/50)*10)
        elif self.sumdist > 2.5:
            step = int(round(self.sumdist/5))
        else:
            step = 0.2
        dist = step
        svg += '    <text fill="black" text-anchor="middle" x="35" y="288">0</text>\n'
        while (dist < self.sumdist - self.sumdist/20): # condition 'self.sumdist/20' avoids label colission
            svg += '    <line stroke ="black" x1="' + str(round(dist/normX) + 35) + '" y1="276" x2="' + str(round(dist/normX) + 35) + '" y2="269"/>\n'
            svg += '    <text fill="black" text-anchor="middle" x="' + str(round(dist/normX) + 35) + '" y="288">' + str(dist) + '</text>\n'
            dist = dist + step
        # print ascending and descending
        ascdesc = self.ascending()
        svg += '    <text fill="black" text-anchor="middle" x="550" y="20">%s: %i %s: %i</text>\n' % (_('Ascending'), ascdesc[0], _('Descending'), ascdesc[1])
    #    svg += '    <text fill="black" x="550" y="20">Descending: ' + str(ascdesc[1]) + '</text>\n'
        svg += '    <text fill="black" x="2" y="25">%s (m)</text>\n' % _('Height')
        # print SVG end element
        svg += '</svg>'
        return svg

    def png_profile(self):
        """
        Create PNG image from SVG file.
        """
        if self.status != 0:
            return NONE_HEIGHT
        svg = self.svg_profile()
        return svg_string_to_png(svg, 'altitude.png', 1010, 300)

    def _compute_distances(self, nodes):
        """
        Compute distance to previous node and sum of distances.
        """
        sumdist = 0
        nodes[0].dist = 0
        for i in range(len(nodes)-1):
            dist = haversine(nodes[i].lon, nodes[i].lat, nodes[i+1].lon, nodes[i+1].lat)
            sumdist += dist
            nodes[i+1].dist = dist
        return sumdist

    def _insert_nodes(self, nodes):
        """
        Adds some nodes if the distance between the given nodes is too long.
        """
        # Threshold defines which nodes should be divided.
        # If the overall distance is less than 50 km, threshold is 100m, because of
        # the granularity of height data.
        if (self.sumdist < 50):
            threshold = 0.1
        else:
            threshold = self.sumdist/500
        analyzed_nodes = [nodes[0]]
        previous = nodes[0]
        for node in nodes[1:]:
            # if distance between current and previous node is greater than threshold
            if node.dist > threshold:
                # steps is the number of added nodes
                steps = int(math.floor(node.dist/threshold))
                dlat = (node.lat - previous.lat)/steps
                dlon = (node.lon - previous.lon)/steps
                # add nodes
                for step in range(steps):
                    newlat = analyzed_nodes[-1].lat + dlat
                    newlon = analyzed_nodes[-1].lon + dlon
                    new_node = ProfileNode(newlat, newlon)
                    new_node.dist = haversine(analyzed_nodes[-1].lon, analyzed_nodes[-1].lat, newlon, newlat)
                    analyzed_nodes.append(new_node)
                    index=len(analyzed_nodes)-1
                    node.dist=node.dist - analyzed_nodes[index].dist
            analyzed_nodes.append(node)
            previous = node
        # return new list of nodes
        return analyzed_nodes

    def _initialize_hgt_files(self):
        """
        Open all height files needed just once.
        """
        hgt_files = {}
        for node in self.nodes:
            key = hgt_file_key(node.lat, node.lon)
            if not hgt_files.has_key(key):
                try:
                    hgt_files[key] = HgtFile(node)
                except IOError:
                    return NONE_HEIGHT
            node.hgt_file = hgt_files[key]
        return 0

    def _compute_heights(self):
        """
        Compute height for all nodes. Missing data is interpolated based on
        nearest neighbor height data.
        """
        for i in range(len(self.nodes)):
            node = self.nodes[i]
            node.height = node.srtm_height()
            if (node.height == NONE_HEIGHT) and (i > 1):
                node.height=self.nodes[i-1].height
            # Parsing missing height data
            if (node.height == NONE_HEIGHT) :
                j=1
                while (self.nodes[j].height == NONE_HEIGHT) and j < len(self.nodes)-1:
                    j=j+1
                if (j==len(self.nodes)-1):
                    return NONE_HEIGHT
                while j>0:
                    self.nodes[j-1].height = self.nodes[j].height
                    j=j-1
        if (self.nodes[0].height == NONE_HEIGHT):
            # First node has missing height, find first node with height and
            # copy this value to all previous nodes.
            j=1
            while (self.nodes[j].height == NONE_HEIGHT) and j < len(self.nodes)-1:
                j=j+1
            if (j == len(self.nodes)-1):
                return NONE_HEIGHT
            while j>0:
                self.nodes[j-1].height = self.nodes[j].height
                j=j-1
        return 0

    def ascending(self):
        """
        Counts total ascending and descending.
        """
        asc = 0
        desc = 0
        for i in range(len(self.nodes)-1):
            dif = self.nodes[i+1].height-self.nodes[i].height
            if dif > 0: asc = asc + dif
            else: desc = desc - dif
        return [asc, desc]


class ProfileNode:
    def __init__(self, latitude, longitude):
        self.lat = latitude
        self.lon = longitude
        self.dist = 0
        self.height = None
        self.hgt_file = None

    def __unicode__(self):
        return '%s, %s, %sm' % (self.lat, self.lon, self.height)

    def srtm_height(self):
        """
        Returns height of a point in SRTM file.
        None value is NONE_HEIGHT
        """
        if self.hgt_file is None:
            try:
                self.hgt_file = HgtFile(self)
            except IOError:
                # File not found
                return NONE_HEIGHT
        return self.hgt_file.height(self.lat, self.lon)
