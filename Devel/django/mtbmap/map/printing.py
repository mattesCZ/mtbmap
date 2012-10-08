#!/usr/bin/python
# -*- coding: utf-8 -*-
from django.db.models import Max
import mapnik
import cairo
import rsvg
from math import cos, radians, log10
from datetime import date

def legend_image(legend, zoom, gap, position='side', max_edge=None):
    items = legend.legend_items(zoom)
    params = items.aggregate(Max('width'), Max('title_width'))

    max_image_width = params['width__max'] + 2*gap
    max_title_width = params['title_width__max']
    column_width = max_image_width + max_title_width

    max_height = gap*(len(items) + 1)
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
        shift = max(item.title_height, item.height)
        title_y = y
        if shift > item.title_height:
            title_y = y + (item.height - item.title_height)/2
        image.blend(column*column_width + max_image_width/2 - item.width/2, y, mapnik.Image.open(item.image.path.encode('utf-8')), 1)
        image.blend(column*column_width + max_image_width, title_y, mapnik.Image.open(item.title_image.path.encode('utf-8')), 1)
#            print y, title_y
        y = y + shift + gap
        if y+shift>height:
            y = gap
            column += 1
            print 'Column added', column
    return image

def map_image(zoom, left, bottom, right, top):
    mapfile = "/home/xtesar7/Devel/mtbmap-czechrep/Devel/mapnik/my_styles/mapnik2new.xml"
    base = 0.000005364418029785156 # longitude range of 1 pixel at zoom 18
    zoom_conversion = base*2**(18-zoom)
    imgx = int(round((right - left)/zoom_conversion))
    lat_center = (top + bottom)/2
    latitude_conversion = zoom_conversion * cos(radians(lat_center))
    imgy = int(round((top - bottom)/latitude_conversion))

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

def name_image(name, width):
    height = 40
    svg = ''
    svg += ('<?xml version="1.0" encoding="UTF-8"?>\n')
    svg += ('<!DOCTYPE svg PUBLIC "-//W3C//DTD SVG 1.0//EN" "http://www.w3.org/TR/2001/REC-SVG-20010904/DTD/svg10.dtd">\n')
    svg += ('<svg width="%i" height="%i" xmlns="http://www.w3.org/2000/svg" id="name">\n' % (width, height))
    # draw altitude fields
    svg += ('    <text fill="black" text-anchor="middle" font-family="Dejavu Sans" x="%i" y="%i" font-size="32">%s</text>' % (width/2, height-10, name))
    # print SVG end element
    svg += ('</svg>')
    im = svg_string_to_png(svg, 'name.png', width, height)
    return im

def scalebar_image(zoom, lat_center):
    DEGREE_M = 111319.49079327358
    base = 0.000005364418029785156 # longitude range of 1 pixel at zoom 18
    zoom_conversion = base*2**(18-zoom)
    lat_conversion = cos(radians(lat_center))
    # pixel length at given latitude and zoom in real world in meters
    pixel = DEGREE_M*zoom_conversion*lat_conversion

    height = 40
    scale_line_width = 200
    width = scale_line_width + 40

    if pixel*scale_line_width>1000:
        #scale in kilometers
        units = 'km'
    else:
        #scale in meters
        units = 'm'
    main_line_length = scale_line_width*pixel
    main_line_length = int(round(main_line_length, -int(log10(main_line_length))))

    svg = ''
    if units=='km':
        main_line_length = main_line_length/1000
    # write SVG headers
    svg += '<?xml version="1.0" encoding="UTF-8"?>\n'
    svg += '<!DOCTYPE svg PUBLIC "-//W3C//DTD SVG 1.0//EN" "http://www.w3.org/TR/2001/REC-SVG-20010904/DTD/svg10.dtd">\n'
    svg += '<svg width="' + str(width) + '" height="40" xmlns="http://www.w3.org/2000/svg" id="scalebar">\n'
    # draw altitude fields
#    svg += '    <rect x="0" y="0" width="' + str(width) + '" height="40" style="fill:white;stroke:black;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" />\n'
    svg += '    <line style="stroke:black;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" x1="10" y1="35" x2="' + str(scale_line_width + 10) + '" y2="35" />\n'
    svg += '    <line style="stroke:black;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" x1="10" y1="35" x2="10" y2="30" />\n'
    svg += '    <line style="stroke:black;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" x1="' + str(scale_line_width/2 + 10) + '" y1="35" x2="' + str(scale_line_width/2 + 10) + '" y2="30" />\n'
    svg += '    <line style="stroke:black;stroke-width:1px;stroke-linecap:butt;stroke-linejoin:miter;stroke-opacity:1" x1="' + str(scale_line_width + 10) + '" y1="35" x2="' + str(scale_line_width + 10) + '" y2="30" />\n'
    svg += '    <text fill="black" text-anchor="middle" font-family="Dejavu Sans" x="10" y="25">0</text>\n'
    if (main_line_length%2):
        svg += '    <text fill="black" text-anchor="middle" font-family="Dejavu Sans" x="' + str(scale_line_width/2 + 10) + '" y="25">' + str(main_line_length/2.0) + '</text>\n'
    else:
        svg += '    <text fill="black" text-anchor="middle" font-family="Dejavu Sans" x="' + str(scale_line_width/2 + 10) + '" y="25">' + str(main_line_length/2) + '</text>\n'
    svg += '    <text fill="black" text-anchor="middle" font-family="Dejavu Sans" x="' + str(scale_line_width + 10) + '" y="25">' + str(main_line_length) + '</text>\n'
    svg += '    <text fill="black" text-anchor="middle" font-family="Dejavu Sans" x="' + str(scale_line_width + 10 + 18) + '" y="25">' + units + '</text>\n'
    #print height lines
    # print SVG end element
    svg += '</svg>\n'

    png_scalebar = svg_string_to_png(svg, 'scalebar.png', width, height)
    return png_scalebar

def imprint_image(attribution='Data: OpenStreetMap, CC-BY-SA', width=500, height=40, fontsize=20):
    today = date.today().strftime('%d. %m. %Y')
    text = 'Autor: Martin Tesař | Zobrazení: Konformní válcové, Mercatorovo | %s | Vytvořeno: %s | www.mtbmap.cz' % (attribution, today)
    svg = '<?xml version="1.0" encoding="UTF-8"?>\n'
    svg += '<!DOCTYPE svg PUBLIC "-//W3C//DTD SVG 1.0//EN" "http://www.w3.org/TR/2001/REC-SVG-20010904/DTD/svg10.dtd">\n'
    svg += '<svg width="%i" height="%i" xmlns="http://www.w3.org/2000/svg" id="scalebar">\n' % (width, height)
    svg += '    <text fill="black" text-anchor="middle" font-family="Dejavu Sans" font-size="%i" x="%i" y="%i">%s</text>\n' % (fontsize, width/2, height-fontsize/2, text)
    svg += '</svg>\n'

    png_imprint = svg_string_to_png(svg, 'imprint.png', width, height)
    return png_imprint

def svg_string_to_png(svg_string, png_image_path, width, height):
    img = cairo.ImageSurface(cairo.FORMAT_ARGB32, width, height)
    ctx = cairo.Context(img)
    handler = rsvg.Handle(None, svg_string)
    handler.render_cairo(ctx)
    img.write_to_png(png_image_path)
    return mapnik.Image.open(png_image_path)
