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
    column_names = osm_tag_names(obj=OsmPoint())
    columns = ', '.join([ '"' + column + '"' for column in column_names])
    substr_columns = ', '.join([ 'substr("' + column + '", 0, 200) as "' + column + '" ' for column in column_names])
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
    column_names = osm_tag_names(obj=OsmLine())
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

def osm_tag_name(obj, field_name):
    '''
    Get OSM tag name of model field with or without underscores
    instead of spaces.
    '''
    COLON_TAGS = ['mtb:scale', 'mtb:description', 'mtb:scale:uphill']
    CLEAN_COLON_TAGS = [tag.replace(':','') for tag in COLON_TAGS]

    if field_name in CLEAN_COLON_TAGS:
        index = CLEAN_COLON_TAGS.index(field_name)
        return COLON_TAGS[index]
    else:
        return field_name

def osm_tag_names(obj, underscores=False):
    '''
    Get list of all object fields verbose names with or without underscores
    instead of spaces.
    '''
    names = obj._meta.get_all_field_names()
    names.remove('id')
    names.remove('osm_id')
    names.remove('the_geom')
    return [osm_tag_name(obj, name) for name in names]

