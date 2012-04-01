--creates database for mapnik 0.7.1 style format

create table map (
  m_name                varchar(150) primary key,
  m_abstract            varchar(150),
  "m_bgcolor"           varchar(150),  --  "m_background-color" --mapnik2
--  "m_background-image"  varchar(150) --mapnik2
  m_srs                   varchar(2048)
);

create table layer (
  l_abstract          varchar(150),
  l_clear_label_cache integer, --mapnik2 clear-label-cache
  l_name              varchar(150) primary key,
  l_srs               varchar(150) not null,
  l_datatype          character varying(20),
  l_datatable         character varying(2048),
  l_datafile          character varying(256),
  l_dataformat        character varying(20),
  l_dataextent        character varying(150)
);

create table maplayer (
  ml_name              varchar(150) references map(m_name),
  ml_layerorder        integer not null,
  ml_layername         varchar(150) references layer(l_name)
);

--create table datasource (
--  d_datasourceID      varchar(150) not null,
--  d_abstract          varchar(256),
--  d_type              varchar(20) not null,
--  d_table             varchar(2048),
--  d_password          varchar(150),
--  d_host              varchar(150),
--  d_port              varchar(150),
--  d_user              varchar(150),
--  d_dbname            varchar(150),
--  d_estimate_extent   varchar(150),
--  d_extent            varchar(150),
--  d_file              varchar(256),
--  d_format            varchar(20)
--);
--
create table style (
  s_name      varchar(150) primary key,
  s_abstract  varchar(150)
);

create table stylelayer (
  sl_stylename varchar(150) references style(s_name),
  sl_layername varchar(150) references layer(l_name)
);

create table rule (
  r_id         integer primary key,
  r_name       varchar(150),
  r_title      varchar(150),
  r_abstract   varchar(150),
  r_filter     varchar(2048),
  r_minscale   varchar(150),
  r_maxscale   varchar(150)
);

create table rulestyle (
  rs_order     integer not null,
  rs_ruleid    integer references rule(r_id),
  rs_stylename varchar(150) references style(s_name)
);

create table symbolizerrule (
  sr_order        integer not null,
  sr_symbid       integer not null,
  sr_type         varchar(150) not null,
  sr_ruleid       integer references rule(r_id)
);


create table buildingsymbolizer (
  symbid         integer primary key,
  textID         varchar(150),
  fill           varchar(150),
  "fill-opacity"   real,
  height         integer not null
);

create table linesymbolizer (
  symbid         integer primary key,
  textID           varchar(150),
  stroke           varchar(150),
  "stroke-width"     real,
  "stroke-opacity"   real,
  "stroke-linejoin"  varchar(20),
  "stroke-linecap"   varchar(20),
  "stroke-dasharray" varchar(150),
  "stroke-offset"    real
);

create table linepatternsymbolizer (
  symbid         integer primary key,
  textID           varchar(150),
  file             varchar(256) not null,
  type             varchar(20) not null,
  height           integer not null,
  width            integer not null
);

create table markerssymbolizer (
  symbid         integer primary key,
  textID           varchar(150),
  allow_overlap    boolean,
  spacing          integer,
  max_error        real,
  filename         varchar(256),
  transform        varchar(256),
  opacity          real,
  fill             varchar(150),
  stroke           varchar(150),
  "stroke-width"     real,
  "stroke-opacity"   real,
  height           integer,
  width            integer,
  placement        varchar(20),
  "ignore-placement" varchar(20),
  marker_type      varchar(20)
);

create table pointsymbolizer (
  symbid         integer primary key,
  textID           varchar(150),
  file             varchar(256) not null,
  height           integer not null,
  width            integer not null,
  type             varchar(20) not null,
  "allow_overlap"    boolean,
  opacity          real,
  transform        varchar(256),
  "ignore-placement" boolean
);

create table polygonsymbolizer (
  symbid         integer primary key,
  textID         varchar(150),
  fill           varchar(150),
  "fill-opacity"   real,
  gamma          real
);

create table polygonpatternsymbolizer (
  symbid         integer primary key,
  textID           varchar(150),
  file             varchar(256) not null,
  type             varchar(20) not null,
  height           integer not null,
  width            integer not null
);

create table rastersymbolizer (
  symbid         integer primary key,
  textID           varchar(150),
  opacity          real,
  mode             varchar(20) not null,
  scaling          varchar(20) not null
);

create table shieldsymbolizer (
  symbid         integer primary key,
  textID                  varchar(150),
  "allow_overlap"           boolean,
  "avoid_edges"             boolean,
  "character_spacing"       integer,
  dx                      integer,
  dy                      integer,
  "face_name"               varchar(150),
  file                    varchar(256) not null,
  fill                    varchar(150),
  "fontset_name"            varchar(150),
  "halo_fill"               varchar(150),
  "halo_radius"             integer,
  height                  integer not null,
  width                   integer not null,
  "horizontal_alignment"    varchar(20),
  "justify_alignment"       varchar(20),
  "line_spacing"            integer,
  min_distance              integer, --mapnik2 "minimum-distance"
  name                    varchar(150),
  "no_text"                 boolean,
  opacity                 real,
--mapnik2  "text-opacity"            real,
  placement               varchar(20),
--mapnik2  "placement_type"          varchar(20),
  size                    integer,
  spacing                 integer,
  "text_convert"          varchar(256), --mapnik2 "text-transform"
  type                    varchar(20),
  "unlock_imageplacements"  boolean, --mapnik2 "unlock-imageplacements"
  "vertical_alignment"      varchar(20),
  "wrap_before"             boolean,
  "wrap_character"          varchar(20),
  "wrap_width"              integer,
  transform               varchar(256)
--mapnik2  "shield-dx"               integer,
--mapnik2  "shield-dy"               integer
);

create table textsymbolizer (
  symbid         integer primary key,
  textID                   varchar(150),
  "allow_overlap"            boolean,
  "avoid_edges"              boolean,
  "character_spacing"        integer,
  dx                       integer,
  dy                       integer,
  "face_name"                varchar(150),
  fill                     varchar(150),
  "fontset_name"             varchar(150),
  force_odd_labels         boolean,
  "halo_fill"                varchar(150),
  "halo_radius"              integer,
  "horizontal_alignment"     varchar(20),
  "justify_alignment"        varchar(20),
  label_position_tolerance integer,
  "line_spacing"             integer,
  max_char_angle_delta     real,
  "min_distance"             integer,
  name                     varchar(150) not null,
  opacity                  real,
  placement                varchar(20),
  size                     integer not null,
  spacing                  integer,
  "text_convert"             varchar(20),
  text_ratio               integer,
  "vertical_alignment"       varchar(20),
  "wrap_before"              boolean,
  "wrap_character"           varchar(20),
  "wrap_width"               integer
);
