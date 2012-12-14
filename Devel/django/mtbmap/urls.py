from django.conf.urls.defaults import *
from django.conf import settings
from django.contrib import admin

from django.conf.urls.static import static

admin.autodiscover()

urlpatterns = patterns('',
    (r'^media/(?P<path>.*)$', 'django.views.static.serve', {'document_root': settings.MEDIA_ROOT }),
    url(r'^$', 'map.views.index'),
    # Uncomment the admin/doc line below to enable admin documentation:
    # url(r'^admin/doc/', include('django.contrib.admindocs.urls')),

    # Uncomment the next line to enable the admin:
    url(r'^admin/', include(admin.site.urls)),
)


urlpatterns += patterns('',
    url(r'^map/', include('map.urls')),
) + static(settings.MEDIA_URL, document_root=settings.MEDIA_ROOT)

## polls tutorial app
#urlpatterns += patterns('',
#    url(r'^polls/', include('polls.urls')),
#)