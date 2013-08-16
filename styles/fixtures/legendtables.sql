create table legend_points(id serial primary key, name text, osm_id integer);
SELECT AddGeometryColumn('legend_points', 'way', 4326, 'POINT', 2);
create index legend_points_geometry_index on legend_points using gist (way);
insert into legend_points (way) values (ST_GeomFromText('POINT(0.0 0.0)', 4326));
create table legend_linestrings(id serial primary key, zoom integer, name text, osm_id integer);
SELECT AddGeometryColumn('legend_linestrings', 'way', 4326, 'LINESTRING', 2);
create index legend_linestrings_geometry_index on legend_linestrings using gist (way);
insert into legend_linestrings (way) values (ST_GeomFromText('LINESTRING(-10180.0 0.0, 10180.0 0.0)', 4326));
create table legend_collections(id serial primary key, zoom integer, name text, osm_id integer);
SELECT AddGeometryColumn('legend_collections', 'way', 4326, 'MULTIPOLYGON', 2);
create index legend_collections_geometry_index on legend_collections using gist (way);
insert into legend_collections (way) values (ST_GeomFromText('MULTIPOLYGON(((-10180.0 10090.0, 10180.0 10090.0, 10180.0 -10090.0, -10180.0 -10090.0, -10180.0 10090.0)))', 4326));

--insert into legend_linestrings (way) values (ST_GeomFromText('LINESTRING(-3300.0 0.0, 3300.0 0.0)', 4326));
--insert into legend_collections (way) values (ST_GeomFromText('MULTIPOLYGON(((-900.0 700.0, 900.0 700.0, 900.0 -700.0, -900.0 -700.0, -900.0 700.0)))', 4326));
