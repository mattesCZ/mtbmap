from django.conf.urls.defaults import *

urlpatterns = patterns('',
    url(r'^legend/$', 'map.views.legend'),
    url(r'^routingparams/$', 'map.views.routingparams'),
    url(r'^exportmap/$', 'map.views.exportmap'),
    url(r'^altitudeprofile/$', 'map.views.altitudeprofile'),
    url(r'^getheight/$', 'map.views.getheight'),
    url(r'^findroute/$', 'map.views.findroute'),
)