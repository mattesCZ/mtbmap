#!/usr/bin/python
# -*- coding: utf-8 -*-
from django.db.models import Max
import mapnik
import cairo
import rsvg
from math import cos, radians, log10
from datetime import date

def svg_string_to_png(svg_string, png_image_path, width, height):
    img = cairo.ImageSurface(cairo.FORMAT_ARGB32, width, height)
    ctx = cairo.Context(img)
    handler = rsvg.Handle(None, svg_string)
    handler.render_cairo(ctx)
    img.write_to_png(png_image_path)
    return mapnik.Image.open(png_image_path)

def legend_image(legend, zoom, gap, position='side', max_edge=None, highres=True):
    items = legend.legend_items(zoom)
    if highres:
        gap = 2*gap
        params = items.aggregate(Max('width_highres'), Max('title_width_highres'))
        max_image_width = params['width_highres__max'] + 2*gap
        max_title_width = params['title_width_highres__max']
    else:
        params = items.aggregate(Max('width'), Max('title_width'))
        max_image_width = params['width__max'] + 2*gap
        max_title_width = params['title_width__max']
    column_width = max_image_width + max_title_width

    max_height = gap*(len(items) + 1)
    if highres:
        for item in items:
            max_height += max(item.title_height_highres, item.height_highres)
    else:
        for item in items:
            max_height += max(item.title_height, item.height)
    print max_height, max_image_width
    height = max_height
    num_columns = 1

    if position=='side' and max_height>max_edge:
        num_columns = max_height / max_edge + 1
        height = max_edge
    elif position=='bottom' and max_edge>column_width:
        num_columns = max_edge/column_width
        height = int(1.05*max_height/num_columns)

    width = column_width*num_columns + gap
    image = mapnik.Image(width, height)
    y = gap
    column = 0
    print height, num_columns, width
    for item in items:
        if highres:
            image_height = item.height_highres
            title_height = item.title_height_highres
            image_width = item.width_highres
            path = item.image_highres.path.encode('utf-8')
            title_path = item.title_image_highres.path.encode('utf-8')
        else:
            image_height = item.height
            title_height = item.title_height
            image_width = item.width
            path = item.image.path.encode('utf-8')
            title_path = item.title_image.path.encode('utf-8')
        shift = max(title_height, image_height)
        title_y = y
        image_y = y
        if image_height > title_height:
            title_y = y + (image_height - title_height)/2
        else:
            image_y = y + (title_height - image_height)/2
        image.blend(column*column_width + max_image_width/2 - image_width/2, image_y, mapnik.Image.open(path), 1)
        image.blend(column*column_width + max_image_width, title_y, mapnik.Image.open(title_path), 1)
#            print y, title_y
        y = y + shift + gap
        if y+shift>height:
            y = gap
            column += 1
            print 'Column added', column
    return image

def map_image(zoom, left, bottom, right, top, highres=True):
    mapfile = "/home/xtesar7/Devel/mtbmap-czechrep/Devel/mapnik/my_styles/mapnik2new.xml"
    base = 0.000005364418029785156 # longitude range of 1 pixel at zoom 18
    zoom_conversion = base*2**(18-zoom)
    imgx = int(round((right - left)/zoom_conversion))
    lat_center = (top + bottom)/2
    latitude_conversion = zoom_conversion * cos(radians(lat_center))
    imgy = int(round((top - bottom)/latitude_conversion))
    if highres:
        mapfile = "/home/xtesar7/Devel/mtbmap-czechrep/Devel/mapnik/my_styles/mapnik2print_1010.xml"
        imgx = 2*imgx
        imgy = 2*imgy

#    info = 'x%i, y%i, l%s, b%s, r%s, t%s' % (imgx, imgy, left, bottom, right, top)
    m = mapnik.Map(imgx, imgy)
    mapnik.load_map(m, mapfile)
    prj = mapnik.Projection("+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +no_defs +over")
    bottom_left = prj.forward(mapnik.Coord(left, bottom))
    top_right = prj.forward(mapnik.Coord(right, top))
    bbox = mapnik.Envelope(bottom_left.x,bottom_left.y,top_right.x,top_right.y)
    m.zoom_to_box(bbox)
    im = mapnik.Image(imgx, imgy)
    mapnik.render(m, im)
    return im

def name_image(name, width, highres=True):
    height = 40
    font_size = 24
    if highres:
        # width is doubled in exportmap()
        height = 2*height
        font_size = 2*font_size
    svg = ''
    svg += ('<?xml version="1.0" encoding="UTF-8"?>\n')
    svg += ('<!DOCTYPE svg PUBLIC "-//W3C//DTD SVG 1.0//EN" "http://www.w3.org/TR/2001/REC-SVG-20010904/DTD/svg10.dtd">\n')
    svg += ('<svg width="%i" height="%i" xmlns="http://www.w3.org/2000/svg" id="name">\n' % (width, height))
    # draw altitude fields
    svg += ('    <text fill="black" text-anchor="middle" font-family="Dejavu Sans" x="%i" y="%i" font-size="%i">%s</text>' % (width/2, height-10, font_size, name))
    # print SVG end element
    svg += ('</svg>')
    im = svg_string_to_png(svg, 'name.png', width, height)
    return im

def scalebar_image(zoom, lat_center, highres=True):
    DEGREE_M = 111319.49079327358
    base = 0.000005364418029785156 # longitude range of 1 pixel at zoom 18
    zoom_conversion = base*2**(18-zoom)
    lat_conversion = cos(radians(lat_center))
    # pixel length at given latitude and zoom in real world in meters
    pixel = DEGREE_M*zoom_conversion*lat_conversion

    font_size = 12
    x_start = 10
    height = 40
    scale_line_length = 200
    real_line_length = scale_line_length*pixel #real distance
    line_width = 1
    if real_line_length>1000:
        #scale in kilometers
        units = 'km'
    else:
        #scale in meters
        units = 'm'
    real_line_length = int(round(real_line_length, -int(log10(real_line_length))))

    if highres:
        font_size = 2*font_size
        x_start = 2*x_start
        height = 2*height
        scale_line_length = 2*scale_line_length
        line_width = 2*line_width

    width = scale_line_length + 4*x_start
    x_middle = scale_line_length/2 + x_start
    x_end = scale_line_length + x_start
    y_top = height - x_start
    y_bottom = height - x_start/2
    y_text = y_top - x_start
    line_style = "stroke:black;stroke-width:%ipx;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" % (line_width)
    svg = ''
    if units=='km':
        real_line_length = real_line_length/1000
    # write SVG headers
    svg += '<?xml version="1.0" encoding="UTF-8"?>\n'
    svg += '<!DOCTYPE svg PUBLIC "-//W3C//DTD SVG 1.0//EN" "http://www.w3.org/TR/2001/REC-SVG-20010904/DTD/svg10.dtd">\n'
    svg += '<svg width="%i" height="%i" xmlns="http://www.w3.org/2000/svg" id="scalebar">\n' % (width, height)
    # draw altitude fields
#    svg += '    <rect x="0" y="0" width="' + str(width) + '" height="40" style="fill:white;stroke:black;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" />\n'
    svg += '    <line style="%s" x1="%i" x2="%i" y1="%i" y2="%i" />\n' % (line_style, x_start, x_end, y_bottom, y_bottom)
    svg += '    <line style="%s" x1="%i" x2="%i" y1="%i" y2="%i" />\n' % (line_style, x_start, x_start, y_bottom, y_top)
    svg += '    <line style="%s" x1="%i" x2="%i" y1="%i" y2="%i" />\n' % (line_style, x_middle, x_middle, y_bottom, y_top)
    svg += '    <line style="%s" x1="%i" x2="%i" y1="%i" y2="%i" />\n' % (line_style, x_end, x_end, y_bottom, y_top)
    svg += '    <text fill="black" text-anchor="middle" font-size="%i" font-family="Dejavu Sans" x="%i" y="%i">0</text>\n' % (font_size, x_start, y_text)
    if (real_line_length%2):
        svg += '    <text fill="black" text-anchor="middle" font-size="%i" font-family="Dejavu Sans" x="%i" y="%i">%s</text>\n' % (font_size, x_middle, y_text, real_line_length/2.0)
    else:
        svg += '    <text fill="black" text-anchor="middle" font-size="%i" font-family="Dejavu Sans" x="%i" y="%i">%i</text>\n' % (font_size, x_middle, y_text, real_line_length/2)
    svg += '    <text fill="black" text-anchor="middle" font-size="%i" font-family="Dejavu Sans" x="%i" y="%i">%s</text>\n' % (font_size, x_end, y_text, real_line_length)
    svg += '    <text fill="black" text-anchor="middle" font-size="%i" font-family="Dejavu Sans" x="%i" y="%i">%s</text>\n' % (font_size, x_end + 2*x_start, y_text, units)
    #print height lines
    # print SVG end element
    svg += '</svg>\n'

    png_scalebar = svg_string_to_png(svg, 'scalebar.png', width, height)
    return png_scalebar

def imprint_image(attribution='Data: OpenStreetMap, CC-BY-SA', width=500, height=40, font_size=20, highres=True):
    if highres:
        # width is doubled in exportmap()
        height = 2*height
        font_size = 2*font_size
    today = date.today().strftime('%d. %m. %Y')
    text = 'Autor: Martin Tesař | Zobrazení: Konformní válcové, Mercatorovo | %s | Vytvořeno: %s | www.mtbmap.cz' % (attribution, today)
    svg = '<?xml version="1.0" encoding="UTF-8"?>\n'
    svg += '<!DOCTYPE svg PUBLIC "-//W3C//DTD SVG 1.0//EN" "http://www.w3.org/TR/2001/REC-SVG-20010904/DTD/svg10.dtd">\n'
    svg += '<svg width="%i" height="%i" xmlns="http://www.w3.org/2000/svg" id="scalebar">\n' % (width, height)
    svg += '    <text fill="black" text-anchor="middle" font-family="Dejavu Sans" font-size="%i" x="%i" y="%i">%s</text>\n' % (font_size, width/2, height-font_size/2, text)
    svg += '</svg>\n'

    png_imprint = svg_string_to_png(svg, 'imprint.png', width, height)
    return png_imprint
