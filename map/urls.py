from django.conf.urls import *

urlpatterns = patterns('map.views',
    (r'^$', 'index'),
    (r'^map/legend/$', 'legend'),
    (r'^map/routingparams/$', 'routingparams'),
    (r'^map/exportmap/$', 'exportmap'),
    (r'^map/altitudeprofile/$', 'altitudeprofile'),
    (r'^map/creategpx/$', 'creategpx'),
    (r'^map/getheight/$', 'getheight'),
    (r'^map/findroute/$', 'findroute'),
    (r'^map/gettemplate/$', 'gettemplate'),
    (r'^map/getjsondata/$', 'getjsondata'),
    (r'^map/evaluation/$', 'evaluation'),
)
