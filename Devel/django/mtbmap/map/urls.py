from django.conf.urls.defaults import *

urlpatterns = patterns('',
    url(r'^home/$', 'map.views.home'),
    url(r'^legend/(?P<zoom>\d+)/$', 'map.views.legend'),
    url(r'^exportmap/$', 'map.views.exportmap'),
    url(r'^export/$', 'map.views.export'),
    url(r'^profile/$', 'map.views.profile'),
    url(r'^altitudeprofile/$', 'map.views.altitudeprofile'),
    url(r'^getheight/$', 'map.views.getheight'),
)