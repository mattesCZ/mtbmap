#!/usr/bin/python
# -*- coding: utf-8 -*-

from map.models import *
from styles.models import Legend
from django.shortcuts import render_to_response
from django.template import RequestContext
from django.template.response import TemplateResponse
from django.http import HttpResponse, HttpResponseRedirect
from map.printing import name_image, map_image, legend_image, scalebar_image, imprint_image
from map.altitude import altitude_image, height
from map.routing import MultiRoute, line_string_to_points, create_gpx
from PIL import Image
import simplejson as json
from django.core.urlresolvers import reverse
from django.utils import translation

def index(request):
    lang = translation.get_language_from_request(request)
    if lang in ('cs', 'sk', 'cz', 'cs-cz'):
        lang = 'cz'
    else:
        lang = 'en'
    weight_collections = WeightCollection.objects.all()
    map = Map.objects.get(name='MTB mapa')
    return render_to_response('map/map.html', {'map':map, 'lang': lang, 'zoomRange':range(19), 'weight_collections': weight_collections},
                              context_instance=RequestContext(request))

def legend(request):
#    zoom = int(zoom)
    zoom = int(request.GET['zoom'])
    legenditems = Legend.objects.all()[0].legend_items(zoom)
    return TemplateResponse(request, 'map/legend.html', {'zoom': zoom, 'legenditems': legenditems})

def routingparams(request):
    template_id = request.GET['template_id']
    # WeightCollection id is last part of value "weights_template_num"
    weight_collection = WeightCollection.objects.get(pk=template_id.split('_')[-1])
    return TemplateResponse(request, 'map/routingparams.html', {'weight_collection': weight_collection})

def exportmap(request):
#    c = {}
#    c.update(csrf(request))
    try:
        zoom = int(request.POST['export-zoom'])
        bounds = request.POST['export-bounds'].replace('(', '').replace(')', '')
    except (KeyError, 'no zoom posted'):
        return render_to_response('map/map.html', {},
                                  context_instance=RequestContext(request))
    else:
        map_title = request.POST['map-title']
        if map_title.startswith('orlice_'):
            try:
                side = map_title.replace('orlice_', '')[0]
                if side in ('n', 'e', 's', 'w'):
                    orientation = side
                else:
                    orientation = 'n'
            except IndexError:
                orientation = 'n'
        else:
            orientation = 'n'
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
            checked_line = request.POST['export-line-check']
        except (KeyError, 'line not checked'):
            line = None
        else:
            raw_line = request.POST['export-line']
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
            highres = request.POST['export-highres']
        except (KeyError, 'highres not checked'):
            highres = False
            map_im = map_image(zoom, left, bottom, right, top, line, orientation, highres)
        else:
            highres = True
            map_im = map_image(zoom, left, bottom, right, top, line, orientation, highres)
        try:
            renderlegend = request.POST['export-legend']
        except (KeyError, 'export-legend not checked'):
            legend_im = Image.new('RGBA', (0, 0), 'white')
        else:
            legend = Legend.objects.all()[0]
            legend_im = legend_image(legend, zoom, gap, 'side', map_im.size[1], highres)
        try:
            renderscale = request.POST['export-scale']
        except (KeyError, 'export-scale not checked'):
            scalebar_im = Image.new('RGBA', (0, 0), 'white')
        else:
            scalebar_im = scalebar_image(zoom, (top+bottom)/2, highres)
        try:
            renderimprint = request.POST['export-imprint']
        except (KeyError, 'export-imprint not checked'):
            imprint_im = Image.new('RGBA', (0, 0), 'white')
        else:
            imprint_im = imprint_image(map.attribution, map_im.size[0], 20, 12, highres)
        if len(map_title)>0 and not map_title.startswith('orlice_'):
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

def altitudeprofile(request):
    try:
        params = request.POST['profile-params']
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

def creategpx(request):
    try:
        params = request.POST['profile-params']
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
            gpx = create_gpx(points)
            response = HttpResponse(mimetype='application/xml')
            response['Content-Disposition'] = 'attachment; filename="line.gpx"'
            response.write(gpx)
            return response
        else:
            message = 'Nezadali jste žádný bod.'
            return render_to_response('error.html', {'message': message}, context_instance=RequestContext(request))

def getheight(request):
    get_value = request.GET['profile-point']
    latlng = get_value.replace('LatLng(', '').replace(')', '').split(',')
    point = [float(latlng[0]), float(latlng[1])]
    point_height = height(point)
    return HttpResponse(point_height, mimetype='text/html')

def findroute(request):
    try:
        params = json.loads(request.POST['params'])
        line = request.POST['routing-line']
    except (KeyError, 'invalid route points'):
        return render_to_response('map/map.html', {},
                                  context_instance=RequestContext(request))
    else:
        points = line_string_to_points(line)
        multiroute = MultiRoute(points, params)
        status = multiroute.find_multiroute()
        geojson = multiroute.geojson()
        print "Length:", multiroute.length, status, multiroute.search_index()
        return HttpResponse(json.dumps(geojson), content_type='application/json')

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
