#!/usr/bin/python
# -*- coding: utf-8 -*-

from map.models import *
from styles.models import Legend
from django.shortcuts import render_to_response
from django.template import RequestContext
from django.template.response import TemplateResponse
from django.http import HttpResponse, HttpResponseRedirect
#from django.core.context_processors import csrf
#import mapnik
from map.printing import name_image, map_image, legend_image, scalebar_image, imprint_image
from map.altitude import altitude_image, height
from map.routing import MultiRoute
#from map.gpx import GPX
from PIL import Image
import simplejson as json
#from map.forms import GPXDocForm
from django.core.urlresolvers import reverse

def index(request):
    return render_to_response('map/map.html', {},
                              context_instance=RequestContext(request))

def home(request):
    return TemplateResponse(request, 'map/home.html', {})

def legend(request):
#    zoom = int(zoom)
    zoom = int(request.GET['zoom'])
    legenditems = Legend.objects.all()[0].legend_items(zoom)
    return TemplateResponse(request, 'map/legend.html', {'zoom': zoom, 'legenditems': legenditems})

def exportmap(request):
#    c = {}
#    c.update(csrf(request))
    try:
        zoom = int(request.POST['export_zoom'])
        bounds = request.POST['export_bounds'].replace('(', '').replace(')', '')
    except (KeyError, 'no zoom posted'):
        return render_to_response('map/map.html', {},
                                  context_instance=RequestContext(request))
    else:
        map_title = request.POST['map_title']
        mapqueryset = Map.objects.filter(name='MTB mapa')
        if mapqueryset.exists():
            map = mapqueryset[0]
        else:
            map = Map()
        bottom = float(bounds.split(',')[1])
        top = float(bounds.split(',')[3])
        left = float(bounds.split(',')[0])
        right = float(bounds.split(',')[2])
        zoom = int(zoom)
        gap = 5
        highres = False
        try:
            checked_line = request.POST['export_line_check']
        except (KeyError, 'line not checked'):
            line = None
        else:
            raw_line = request.POST['export_line']
            points = []
            if len(raw_line):
                for part in raw_line.split('),'):
                    latlng = part.replace('LatLng(', '').replace(')', '').split(',')
                    point = Point(float(latlng[1]), float(latlng[0]))
                    points.append(point)
                if len(points)>1:
                    line = LineString(points).geojson
                else:
                    line = None
            else:
                line = None
        try:
            highres = request.POST['export_highres']
        except (KeyError, 'highres not checked'):
            highres = False
            map_im = map_image(zoom, left, bottom, right, top, line, highres)
        else:
            highres = True
            map_im = map_image(zoom, left, bottom, right, top, line, highres)
        try:
            renderlegend = request.POST['export_legend']
        except (KeyError, 'export_legend not checked'):
            legend_im = Image.new('RGBA', (0, 0), 'white')
        else:
            legend = Legend.objects.all()[0]
            legend_im = legend_image(legend, zoom, gap, 'side', map_im.size[1], highres)
        try:
            renderscale = request.POST['export_scale']
        except (KeyError, 'export_scale not checked'):
            scalebar_im = Image.new('RGBA', (0, 0), 'white')
        else:
            scalebar_im = scalebar_image(zoom, (top+bottom)/2, highres)
        try:
            renderimprint = request.POST['export_imprint']
        except (KeyError, 'export_imprint not checked'):
            imprint_im = Image.new('RGBA', (0, 0), 'white')
        else:
            imprint_im = imprint_image(map.attribution, map_im.size[0], 20, 12, highres)
        if len(map_title)>0:
            name_im = name_image(map_title, map_im.size[0])
        else:
            name_im = Image.new('RGBA', (0, 0), 'white')
        height = map_im.size[1] + name_im.size[1] + scalebar_im.size[1] + imprint_im.size[1]
        width = map_im.size[0] + legend_im.size[0]

        y_base = 0
        im = Image.new('RGBA', (width, height), 'white')
        im.paste(name_im, (map_im.size[0]/2 - name_im.size[0]/2, 0))
        y_base += name_im.size[1]
        im.paste(scalebar_im, (map_im.size[0]/2 - scalebar_im.size[0]/2, y_base))
        y_base += scalebar_im.size[1]
        im.paste(map_im, (0, y_base))
        im.paste(legend_im, (map_im.size[0], y_base))
        y_base += map_im.size[1]
        im.paste(imprint_im, (map_im.size[0]/2 - imprint_im.size[0]/2, y_base))

        response = HttpResponse(mimetype='image/png')
        response['Content-Disposition'] = 'attachment; filename="map.png"'
        im.save(response, 'png')
        return response
#        return render_to_response('map/export.html', {'zoom': int(zoom), 'center': center, 'bounds': bounds, 'size': size, 'info': info},
#                                  context_instance=RequestContext(request))
#    zoom = request.POST['export_zoom']
#    c['zoom'] = zoom
#    bounds = request.POST['export_bounds']
#    map_title = request.POST['map_title']
#    return TemplateResponse(request, 'map/export_old.html', c)

def export(request):
    return TemplateResponse(request, 'map/export.html', {})

def routes(request):
    classes = WeightClass.objects.all().order_by('order')
    return TemplateResponse(request, 'map/routes_production.html', {'classes': classes})
#    return TemplateResponse(request, 'map/routes.html', {'classes': classes})

def places(request):
    return TemplateResponse(request, 'map/places.html', {})

def altitudeprofile(request):
#    c = {}
#    c.update(csrf(request))
    try:
        params = request.POST['profile_params']
    except (KeyError, 'no points posted'):
        return render_to_response('map/map.html', {},
                                  context_instance=RequestContext(request))
    else:
        points = []
        if len(params):
            for part in params.split('),'):
                latlng = part.replace('LatLng(', '').replace(')', '').split(',')
                point = [float(latlng[0]), float(latlng[1])]
                points.append(point)
            im = altitude_image(points)
            try:
                ret = int(im)
            except (AttributeError, 'Not a number'):
                response = HttpResponse(mimetype='image/png')
                im.save(response, 'png')
                response['Content-Disposition'] = 'attachment; filename="altitudeprofile.png"'
                return response
            else:
                if ret==-1:
                    message = 'Omlouváme se, nemáme výšková data pro žádanou oblast nebo její část.'
                    return render_to_response('error.html', {'message': message}, context_instance=RequestContext(request))
                else:
                    return render_to_response('map/height.html', {'height': ret}, context_instance=RequestContext(request))
        else:
            message = 'Nezadali jste žádný bod.'
            return render_to_response('error.html', {'message': message}, context_instance=RequestContext(request))

def getheight(request):
    get_value = request.GET['profile_point']
    latlng = get_value.replace('LatLng(', '').replace(')', '').split(',')
    point = [float(latlng[0]), float(latlng[1])]
    point_height = height(point)
    return HttpResponse(point_height, mimetype='text/html')

def findroute(request):
    from django.contrib.gis.geos import GEOSGeometry
    try:
        params = json.loads(request.POST['params'])
        line = request.POST['routing_line']
#        weights = request.POST['weights']
    except (KeyError, 'invalid route points'):
        return render_to_response('map/map.html', {},
                                  context_instance=RequestContext(request))
    else:
        latlngs = [coord.strip().replace('LatLng(', '').replace(')','') for coord in line.replace('[', '').replace(']', '').split(',')]
        points = [latlngs[i+1] + ' ' + latlngs[i] for i in range(0, len(latlngs), 2)]
        multiroute = MultiRoute(points, params)
        route_line = multiroute.find_route()
#        print multiroute.envelope
        print "Length:", multiroute.length
        return HttpResponse(route_line.geojson, content_type='application/json')

def gpxupload(request):
    if request.method=='POST':
        print 'POST'
#        doc = request.FILES['gpx_file']
#        print doc
        
    f = open('media/894360.gpx')
    gpx = GPX(f)
    f.close()
    gpx_line = gpx.tracks().geojson
    return HttpResponse(gpx_line, content_type='application/json')

def list(request):
    if request.method == 'POST':
        form = GPXDocForm(request.POST, request.FILES)
        if form.is_valid():
            newdoc = GPXDoc(docfile = request.FILES['docfile'])
            newdoc.save()
            return HttpResponseRedirect(reverse('map.views.list'))
    else:
        form = GPXDocForm()
    documents = GPXDoc.objects.all()
    return render_to_response(
        'map/list.html',
        {'documents': documents, 'form': form},
        context_instance=RequestContext(request)
    )
