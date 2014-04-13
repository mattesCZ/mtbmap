from styles.models import *
from django.shortcuts import render_to_response, get_object_or_404


def index(request):
    map_list = Map.objects.all().order_by('name')
    return render_to_response('index.html', {'map_list': map_list})


def detail(request, id):
    map = get_object_or_404(Map, pk=id)
    layers = map.layers.all()
    return render_to_response('showmap.html', {'map': map, 'layers': layers})
