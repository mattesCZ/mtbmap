from django.conf.urls.defaults import *

urlpatterns = patterns('',
    url(r'^home/$', 'map.views.home'),
    url(r'^legend/$', 'map.views.legend'),
    url(r'^exportmap/$', 'map.views.exportmap'),
    url(r'^export/$', 'map.views.export'),
    url(r'^places/$', 'map.views.places'),
    url(r'^routes/$', 'map.views.routes'),
    url(r'^altitudeprofile/$', 'map.views.altitudeprofile'),
    url(r'^getheight/$', 'map.views.getheight'),
    url(r'^findroute/$', 'map.views.findroute'),
    url(r'^gpxupload/$', 'map.views.gpxupload'),
    url(r'^list/$', 'map.views.list', name='list'),
)