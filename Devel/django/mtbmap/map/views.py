from map.models import Map
from styles.models import Legend
from django.shortcuts import render_to_response
from django.template import RequestContext
from django.template.response import TemplateResponse
from django.http import HttpResponse
import mapnik
from map.printing import name_image, map_image, legend_image, scalebar_image, imprint_image

def index(request):
    maps = Map.objects.all()
    map = maps[0]
    return render_to_response('map/map.html', 
                              {'maps': maps, 'map': map},
                              context_instance=RequestContext(request))

def home(request):
    return TemplateResponse(request, 'map/home.html', {})

def legend(request, zoom):
    zoom = int(zoom)
    legenditems = Legend.objects.all()[0].legend_items(zoom)
    return TemplateResponse(request, 'map/legend.html', {'zoom': zoom, 'legenditems': legenditems})

def exportmap(request):
    try:
        zoom = request.POST['export_zoom']
#        center = request.POST['center']
        bounds = request.POST['bounds']
#        size = request.POST['size']
        map_title = request.POST['map_title']
    except (KeyError, 'no zoom posted'):
        return render_to_response('map/map.html', {},
                                  context_instance=RequestContext(request))
    else:
        map = Map.objects.get(pk=1)
        bottom = float(bounds.split(',')[1])
        top = float(bounds.split(',')[3])
        left = float(bounds.split(',')[0])
        right = float(bounds.split(',')[2])
        zoom = int(zoom)
        gap = 5
        map_im = map_image(zoom, left, bottom, right, top)
        legend = Legend.objects.all()[0]
        legend_im = legend_image(legend, zoom, gap, 'side', map_im.height())
        name_im = name_image(map_title, map_im.width())
        scalebar_im = scalebar_image(zoom, (top+bottom)/2)
        imprint_im = imprint_image(map.attribution, map_im.width(), 20, 12)

        height = map_im.height() + name_im.height() + scalebar_im.height() + imprint_im.height()
        width = map_im.width() + legend_im.width()

        y_base = 0
        im = mapnik.Image(width, height)
        im.background = mapnik.Color('white')
        im.blend(map_im.width()/2 - name_im.width()/2, 0, name_im, 1)
        y_base += name_im.height()
        im.blend(map_im.width()/2 - scalebar_im.width()/2, y_base, scalebar_im, 1)
        y_base += scalebar_im.height()
        im.blend(0, y_base, map_im, 1)
        im.blend(map_im.width(), y_base, legend_im, 1)
        y_base += map_im.height()
        im.blend(map_im.width()/2 - imprint_im.width()/2, y_base, imprint_im, 1)

        data = im.tostring('png')
        return HttpResponse(data, mimetype='image/png')
#        return render_to_response('map/export.html', {'zoom': int(zoom), 'center': center, 'bounds': bounds, 'size': size, 'info': info},
#                                  context_instance=RequestContext(request))

def export(request):
    return TemplateResponse(request, 'map/export.html', {})

def profile(request):
    return TemplateResponse(request, 'map/profile.html', {})

