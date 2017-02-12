from django.conf.urls import *

urlpatterns = patterns('map.views',
    (r'^$', 'index'),
    (r'^setlang/(?P<lang>[a-z]{2,3})/$', 'set_language'),
    (r'^map/legend/$', 'legend'),
    (r'^map/routingparams/$', 'routingparams'),
    (r'^map/exportmap/$', 'exportmap'),
    (r'^map/altitudeprofile/$', 'altitudeprofile'),
    (r'^map/creategpx/$', 'creategpx'),
    (r'^map/getheight/$', 'getheight'),
    (r'^map/findroute/$', 'findroute'),
    (r'^map/gettemplate/$', 'gettemplate'),
    (r'^map/getjsondata/$', 'getjsondata'),
)
