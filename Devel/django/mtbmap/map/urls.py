from django.conf.urls.defaults import *

urlpatterns = patterns('',
    url(r'^home/$', 'map.views.home'),
    url(r'^legend/(?P<zoom>\d+)/$', 'map.views.legend'),
    url(r'^exportmap/$', 'map.views.exportmap'),
    url(r'^export/$', 'map.views.export'),
    url(r'^routes/$', 'map.views.routes'),
    url(r'^altitudeprofile/$', 'map.views.altitudeprofile'),
    url(r'^getheight/$', 'map.views.getheight'),
    url(r'^findroute/$', 'map.views.findroute'),
)