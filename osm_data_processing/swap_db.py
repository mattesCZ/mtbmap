# -*- coding: utf-8 -*-

# Global imports
import os
import json
import shutil
import subprocess

# Local imports
from mtbmap.settings import production as settings


def swap_db():
    normal_style_filename = os.path.join(settings.MAPNIK_STYLES, 'mapnik2normal.xml')
    print_style_filename = os.path.join(settings.MAPNIK_STYLES, 'mapnik2print.xml')
    with open(settings.SECRETS_PATH, 'r') as fs:
        secrets = json.loads(fs.read())
        old_master = secrets['DB_NAME_DATA_MASTER']
        new_master = secrets['DB_NAME_DATA_UPDATE']
        print old_master, new_master

        _replace(old_master, new_master, normal_style_filename)
        _replace(old_master, new_master, print_style_filename)
        _update_db_names(secrets, new_master, old_master)


def _update_db_names(secrets, new_master, new_update):

    secrets['DB_NAME_DATA_MASTER'] = new_master
    secrets['DB_NAME_DATA_UPDATE'] = new_update
    tmp_path = settings.SECRETS_PATH + '.tmp'

    with open(tmp_path, 'w') as f:
        f.write(json.dumps(secrets, indent=4, separators=(',', ': ')))
    shutil.copyfile(tmp_path, settings.SECRETS_PATH)
    os.remove(tmp_path)


def _replace(old_string, new_string, filename):
    tmp_filename = filename + '.tmp'
    _sed(old_string, new_string, filename, tmp_filename)
    shutil.copyfile(tmp_filename, filename)
    os.remove(tmp_filename)


def _sed(old_string, new_string, input_filename, output_filename):
    return subprocess.check_output(
        'sed -e "s~{old_string}~{new_string}~" {input_filename} > {output_filename}'.format(
            old_string=old_string, new_string=new_string,
            input_filename=input_filename, output_filename=output_filename),
        shell=True)
