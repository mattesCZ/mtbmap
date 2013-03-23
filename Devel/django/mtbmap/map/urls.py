from django.conf.urls.defaults import *

urlpatterns = patterns('',
    url(r'^legend/$', 'map.views.legend'),
    url(r'^exportmap/$', 'map.views.exportmap'),
    url(r'^altitudeprofile/$', 'map.views.altitudeprofile'),
    url(r'^getheight/$', 'map.views.getheight'),
    url(r'^findroute/$', 'map.views.findroute'),
    url(r'^gpxupload/$', 'map.views.gpxupload'),
    url(r'^list/$', 'map.views.list', name='list'),
)