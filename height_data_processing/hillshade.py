#!/usr/bin/python

START_TILE_X = 39
END_TILE_X = 45
START_TILE_Y = 1
END_TILE_Y = 5


def tile_to_coords(x, y):
    x_min = (x - 37) * 5
    x_max = (x - 36) * 5
    y_min = 60 - (y * 5)
    y_max = 65 - (y * 5)

    return dict(x_max=x_max, y_max=y_max, x_min=x_min, y_min=y_min)


def get_merge_command(suffix, coords):
    return 'gdal_merge.py -v -o srtm_{suffix}.tif' \
           ' -ul_lr {x_min} {y_max} {x_max} {y_min}' \
           ' $HGTFILES/srtm_*_*/*.tif'\
        .format(suffix=suffix, **coords)


def get_warp_command(suffix, resolution):
    return 'gdalwarp -co "TILED=YES" -srcnodata -32768 -dstnodata 255' \
           ' -t_srs "+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +no_defs"' \
           ' -rcs -order 3 -tr {resolution} {resolution} -wt Float32 -ot Float32' \
           ' -wo SAMPLE_STEPS=100' \
           ' srtm_{suffix}.tif warped{resolution}_{suffix}.tif'\
        .format(suffix=suffix, resolution=resolution)


def get_dem_command(suffix, resolution):
    return 'gdaldem hillshade warped{resolution}_{suffix}.tif hillshade{resolution}_{suffix}.tif -s 0.2 -compute_edges'\
        .format(suffix=suffix, resolution=resolution)


def highest_resolution():
    resolution = 30

    for x in range(START_TILE_X, END_TILE_X + 1):
        for y in range(START_TILE_Y, END_TILE_Y + 1):
            suffix = '{x_str}_{y_str}'.format(x_str=str(x), y_str=str(y).zfill(2))
            coords = tile_to_coords(x, y)
            merge_command = get_merge_command(suffix, coords)
            warp_command = get_warp_command(suffix, resolution)
            dem_command = get_dem_command(suffix, resolution)

            # print 'curl http://mtbmap.cz/static/img/srtm_{suffix}.zip --output srtm_{suffix}.zip &'.format(suffix=suffix)
            print '{command} &&'.format(command=merge_command)
            print '{command} &&'.format(command=warp_command)
            print '{command} &&'.format(command=dem_command)
            print 'rm srtm_{suffix}.tif warped{resolution}_{suffix}.tif &&'.format(suffix=suffix, resolution=resolution)


def middle_resolution():
    resolution = 150

    for x in range(START_TILE_X, END_TILE_X + 1):
        suffix = str(x)

        coords_max = tile_to_coords(x, START_TILE_Y)
        coords_min = tile_to_coords(x, END_TILE_Y)

        coords = dict(
            x_min=coords_max['x_min'],
            x_max=coords_max['x_max'],
            y_min=coords_min['y_min'],
            y_max=coords_max['y_max']
        )

        merge_command = get_merge_command(suffix, coords)
        warp_command = get_warp_command(suffix, resolution)
        dem_command = get_dem_command(suffix, resolution)

        print '{command} &&'.format(command=merge_command)
        print '{command} &&'.format(command=warp_command)
        print '{command} &&'.format(command=dem_command)
        print 'rm srtm_{suffix}.tif warped{resolution}_{suffix}.tif &&'.format(suffix=suffix, resolution=resolution)


def low_resolution():
    resolution = 500
    suffix = 'europe'

    coords_max = tile_to_coords(END_TILE_X, START_TILE_Y)
    coords_min = tile_to_coords(START_TILE_X, END_TILE_Y)

    coords = dict(
        x_min=coords_min['x_min'],
        x_max=coords_max['x_max'],
        y_min=coords_min['y_min'],
        y_max=coords_max['y_max']
    )

    merge_command = get_merge_command(suffix, coords)
    warp_command = get_warp_command(suffix, resolution)
    dem_command = get_dem_command(suffix, resolution)

    print '{command} &&'.format(command=merge_command)
    print '{command} &&'.format(command=warp_command)
    print '{command} &&'.format(command=dem_command)
    print 'rm srtm_{suffix}.tif warped{resolution}_{suffix}.tif &&'.format(suffix=suffix, resolution=resolution)


def lowest_resolution():
    resolution = 1500
    suffix = 'europe'

    coords_max = tile_to_coords(END_TILE_X, START_TILE_Y)
    coords_min = tile_to_coords(START_TILE_X, END_TILE_Y)

    coords = dict(
        x_min=coords_min['x_min'],
        x_max=coords_max['x_max'],
        y_min=coords_min['y_min'],
        y_max=coords_max['y_max']
    )

    merge_command = get_merge_command(suffix, coords)
    warp_command = get_warp_command(suffix, resolution)
    dem_command = get_dem_command(suffix, resolution)

    print '{command} &&'.format(command=merge_command)
    print '{command} &&'.format(command=warp_command)
    print '{command} &&'.format(command=dem_command)
    print 'rm srtm_{suffix}.tif warped{resolution}_{suffix}.tif &&'.format(suffix=suffix, resolution=resolution)


if __name__ == "__main__":
    # lowest_resolution()
    # low_resolution()
    # middle_resolution()
    highest_resolution()
