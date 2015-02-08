#!/bin/bash

python manage.py loaddata map/fixtures/*.json

rm media/legend/*.png
python manage.py load_default_names
python manage.py make_legend "styles/mapnik/my_styles/mapnik2normal.xml" "mtb-map"

python manage.py load_routing_templates
