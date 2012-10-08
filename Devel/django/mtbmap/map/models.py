from django.db import models

class Map(models.Model):
    name = models.CharField(max_length=200)
    attribution = models.CharField(max_length=400)
    url = models.CharField(max_length=400)

    def __unicode__(self):
        return u"Map(%s,%s)" % (self.name, self.url)

    def as_dict(self):
        return {'name':self.name, 'url':self.url}

