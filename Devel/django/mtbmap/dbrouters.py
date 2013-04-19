MAP_DB = 'osm_data'
apps = [
        'map',
        'south'
        ] 

class MapRouter(object):
    """
    A router to control all database operations on models in the
    map application.
    """
    def db_for_read(self, model, **hints):
        """
        Attempts to read map models go to MAP_DB.
        """
        if model._meta.app_label in apps:
            return MAP_DB
        return None

    def db_for_write(self, model, **hints):
        """
        Attempts to write map models go to MAP_DB.
        """
        if model._meta.app_label in apps:
            return MAP_DB
        return None

    def allow_relation(self, obj1, obj2, **hints):
        """
        Allow relations if a model in the map app is involved.
        """
        if obj1._meta.app_label in apps or \
           obj2._meta.app_label in apps:
           return True
        return None

    def allow_syncdb(self, db, model):
        """
        Make sure the map app only appears in the MAP_DB
        database.
        """
        if db == MAP_DB:
            return model._meta.app_label in apps
        elif model._meta.app_label in apps:
            return False
        return None