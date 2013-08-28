# -*- coding: utf-8 -*-

# Django imports
from django.db import connections, transaction

# Local imports
from osm_data_processing.models import OsmPoint, OsmLine

MAP_DB = 'osm_data'

def copy_osmpoints():
    '''
    Copy useful records from planet_osm_points table.
    '''
    cursor = connections[MAP_DB].cursor()
    cursor.execute('DELETE FROM osm_data_processing_osmpoint')
    column_names = verbose_names(obj=OsmPoint(), underscores=True)
    column_names.remove('ID')
    column_names.remove('osm_id')
    column_names.remove('the_geom')
    columns = ', '.join([ '"' + column + '"' for column in column_names])
    substr_columns = ', '.join([ 'substr("' + column + '", 0, 40) as "' + column + '" ' for column in column_names])
    or_clause = ' OR '.join([ '"' + column + '" IS NOT NULL' for column in column_names])
    query = "INSERT INTO osm_data_processing_osmpoint (osm_id, the_geom, %s) SELECT osm_id, ST_TRANSFORM(way, 4326) as the_geom, %s FROM planet_osm_point WHERE %s;" % (columns, substr_columns, or_clause)
    print query
    cursor.execute(query)
    transaction.commit_unless_managed(using=MAP_DB)
    cursor.close()
    
def copy_osmlines():
    '''
    Copy useful records from planet_osm_line table.
    '''
    cursor = connections[MAP_DB].cursor()
    cursor.execute('DELETE FROM osm_data_processing_osmline')
    column_names = verbose_names(obj=OsmLine(), underscores=True)
    column_names.remove('ID')
    column_names.remove('osm_id')
    column_names.remove('the_geom')
    columns = ', '.join([ '"' + column + '"' for column in column_names]).replace(':', '')
    print column_names
    print columns
    substr_columns = ', '.join([ 'substr("' + column + '", 0, 200) as "' + column + '" ' for column in column_names])
    or_clause = ' OR '.join([ '"' + column + '" IS NOT NULL' for column in column_names])
    query = "INSERT INTO osm_data_processing_osmline (osm_id, the_geom, %s) SELECT osm_id, ST_TRANSFORM(way, 4326) as the_geom, %s FROM planet_osm_line WHERE %s;" % (columns, substr_columns, or_clause)
    print query
    cursor.execute(query)
    transaction.commit_unless_managed(using=MAP_DB)
    cursor.close()

def verbose_name(obj, field_name, underscores=False):
    '''
    Get verbose name of model field with or without underscores
    instead of spaces.
    '''
    verbose_name = obj._meta.get_field_by_name(field_name)[0].verbose_name
    if underscores:
        return verbose_name.replace(' ', '_')
    else:
        return verbose_name

def verbose_names(obj, underscores=False):
    '''
    Get list of all object fields verbose names with or without underscores
    instead of spaces.
    '''
    names = obj._meta.get_all_field_names()
    return [verbose_name(obj, name, underscores) for name in names]

