#!/bin/bash

# Script to update rendering database of mtbmap project.
# It takes mtbmap project directory path as first argument.
# Run this as mtbmap user.

cd $1 &&
python manage.py update_rendering_data --settings="mtbmap.settings.update_data"
