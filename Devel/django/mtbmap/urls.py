from django.conf.urls.defaults import *

from django.contrib import admin
admin.autodiscover()

urlpatterns = patterns('',
    # Examples:
    # url(r'^$', 'mtbmap.views.home', name='home'),
    url(r'^styles/maps/$', 'styles.views.index'),
    url(r'^styles/maps/(?P<m_name>.+)/$', 'styles.views.detail'),

    #url(r'^scripts/(?P<path>.*)/$', 'django.views.static.serve', {'document_root': './scripts'}),

    # Uncomment the admin/doc line below to enable admin documentation:
    # url(r'^admin/doc/', include('django.contrib.admindocs.urls')),

    # Uncomment the next line to enable the admin:
    url(r'^admin/', include(admin.site.urls)),
)
