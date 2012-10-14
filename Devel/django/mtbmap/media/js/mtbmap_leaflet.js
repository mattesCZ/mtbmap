var map = L.map('map', {
    zoomControl: false
}).setView([49.82, 15.00], 8);

var mtbmapTileLayer = new L.TileLayer('http://mtbmap.cz/mtbmap_tiles/{z}/{x}/{y}.png', {
    maxZoom: 18,
    attribution: 'Data: <a href="http://openstreetmap.org">OpenStreetMap</a>,&nbsp;<a href="http://dds.cr.usgs.gov/srtm/" >USGS</a>'
});
mtbmapTileLayer.addTo(map)

var osmTileLayer = new L.TileLayer('http://tile.openstreetmap.org/{z}/{x}/{y}.png', {
    maxZoom: 18,
    attribution: 'Data: <a href="http://openstreetmap.org">OpenStreetMap</a>'
});

var mtbmapSymbolsTileLayer = new L.TileLayer('http://mtbmap.cz/overlay-mtbscale_tiles/{z}/{x}/{y}.png', {
    maxZoom: 18
});


L.control.zoom({
    position:"topright"
}).addTo(map)

L.control.scale({
    position:"bottomright",
    imperial:false,
    maxWidth:200
}).addTo(map)

var baseLayers = {

    "MTB mapa": mtbmapTileLayer,
    "OpenStreetMaps": osmTileLayer
}

var overlayLayers = {
    "MTB obtížnost": mtbmapSymbolsTileLayer
}

L.control.layers(baseLayers, overlayLayers).addTo(map)

//var drawControl = new L.Control.Draw({
//    position: 'topright',
//    polygon: false,
//    circle: false,
//    marker: false,
//    rectangle: false
//});
//map.addControl(drawControl)
//
//var drawnLines = new L.Polyline([], {});
//
//map.on('draw:poly-created', function (e) {
//    //    alert(e.poly.getBounds().toBBoxString());
//    drawnLines.setLatLngs(e.poly.getLatLngs());
//    distance = 0;
//    var latlngsArray = drawnLines.getLatLngs();
//    for (i=0; i<latlngsArray.length-1; i++) {
//        distance += latlngsArray[i].distanceTo(latlngsArray[i+1]);
//    }
//    $('#length').html(distance);
//});
//map.addLayer(drawnLines);

var menuItems = ["home", "legend", "export", "profile"]

var active = ''

function setContentMaxHeight() {
    maxheight = $('#map').height() - ($('#header').height() + $('#footer').height() + 42);
    $('#content').css('max-height', maxheight);    
}

$(window).resize(function(event) {
    setContentMaxHeight();
});

$(document).ready(function() {
    $('#content').hide();
    setContentMaxHeight();
});
$(document).ready(function() {
    $('#home').bind('click', function () {
        if (active=='home') {
            $('#content').hide();
            active = ''
        } else {
            $.get("/map/home/", function(data) {
                $('#content').html(data).show();
            });
            active = 'home'
        }
    });
});

$(document).ready(function() {
    $('#legend').bind('click', function () {
        if (active=='legend') {
            $('#content').hide();
            active = '';
        } else {
            $.get("/map/legend/"+ map.getZoom() +"/", function(data) {
                $('#content').html(data).show();
            });
            active = 'legend';
        }
    });
});

//$(document).ready(function() {
//    $('#exportmap').bind('click', function () {
//        $.get("/map/exportmap/", {
//            zoom: '8',
//            bounds: '(12.0,50.0,14.0,51.0)',
//            map_title:'Dresden'
//        }, function(data) {
//            $('#content').html(data).show();
//        });
//    });
//});

$(document).ready(function() {
    $('#profile').bind('click', function () {
        if (active=='profile') {
            $('#content').hide();
            active = '';
        } else {
            $.get("/map/profile/", function(data) {
                $('#content').html(data).show();
            });
            active = 'profile'
        }
    });
});

function onMapZoom(e) {
    if (active=='legend') {
        $.get("/map/legend/"+ map.getZoom() +"/", function(data) {
            $('#content').html(data).show();
        });
    }
//    else if (active=='export') {
//        setCurrentBounds();
//    }
}

map.on('zoomend', onMapZoom);

////////////////////////////////////////////////////////////////////////////////
// handling user export:
var userChanged = false;
$(document).ready(function() {
    $('#export').bind('click', function () {
        if (active=='export') {
            $('#content').hide();
            setCurrentBounds();
            active = ''
        } else {
            $.get("/map/export/", function(data) {
                $('#content').html(data);
                setCurrentBounds();
                $('#content').show();
            //                $('#exportmap').bind('click', function () {
            //                    $.get("/map/exportmap/", exportValues(), function(data) {
            //                        $('#content').html(data).show();
            //                        active = 'exportmap';
            //                    });
            //                });
            });
            active = 'export'
        }
    });
});

function onMapMoveEnd(e) {
    if (active=='export' && !userChanged) {
        setCurrentBounds();
    }
}
map.on('moveend', onMapMoveEnd);

function setCurrentBounds() {
    bounds = map.getBounds();
    $('#export_left').val(bounds.getSouthWest().lng.toFixed(6));
    $('#export_bottom').val(bounds.getSouthWest().lat.toFixed(6));
    $('#export_right').val(bounds.getNorthEast().lng.toFixed(6));
    $('#export_top').val(bounds.getNorthEast().lat.toFixed(6));
    $('#export_zoom_select').val(map.getZoom());
    setMapImageSize();
    userChanged = false;
}

function setMapImageSize() {
    bounds = getBounds();
    zoom = parseInt($('#export_zoom_select').val());
    topLeft = map.project(bounds.getNorthWest(), zoom);
    bottomRight = map.project(bounds.getSouthEast(), zoom);
    width = bottomRight.x - topLeft.x;
    height = bottomRight.y - topLeft.y;
    if ($('#export_highres').is(':checked')) {
        $('#export_width').val(Math.round(width)*2);
        $('#export_height').val(Math.round(height)*2);
    } else {
        $('#export_width').val(Math.round(width));
        $('#export_height').val(Math.round(height));
    }
}

function getParams() {
    $('#export_bounds').val(getBoundsString());
    $('#export_zoom').val($('#export_zoom_select').val());
}

function getBoundsString() {
    return getBounds().toBBoxString();
}

function getBounds() {
    export_left = $('#export_left').val();
    export_bottom = $('#export_bottom').val();
    export_right = $('#export_right').val();
    export_top = $('#export_top').val();
    if (!export_left || !export_bottom || !export_right || !export_top) {
        return map.getBounds();
    } else {
        var southWest = new L.LatLng(export_bottom, export_left);
        var northEast = new L.LatLng(export_top, export_right);
        var bounds = new L.LatLngBounds(southWest, northEast);
        return bounds;
    }
}

function recalculateSize() {
    userChanged = true;
    setMapImageSize();
}

function recalculateBounds() {
    userChanged = true;
    imgx = parseInt($('#export_width').val());
    imgy = parseInt($('#export_height').val());
    if (imgx>0 && imgy>0) {
        center = getBounds().getCenter();
        export_zoom = parseInt($('#export_zoom_select').val());
        centerPixel = map.project(center, export_zoom);
        northWestPixel = new L.Point(centerPixel.x - imgx/2, centerPixel.y - imgy/2);
        southEastPixel = new L.Point(centerPixel.x + imgx/2, centerPixel.y + imgy/2);
        northWest = map.unproject(northWestPixel, export_zoom);
        southEast = map.unproject(southEastPixel, export_zoom);
        
        $('#export_left').val(northWest.lng.toFixed(6));
        $('#export_right').val(southEast.lng.toFixed(6));
        $('#export_top').val(northWest.lat.toFixed(6));
        $('#export_bottom').val(southEast.lat.toFixed(6));
    } else return;
}


////////////////////////////////////////////////////////////////////////////////
// handling profiles
var profileLine = new L.Polyline([], {
    color: '#FF6600',
    opacity: 0.9,
    dashArray: '15, 15'
}).addTo(map);
var lineDistance = 0;
var markersGroup = new L.LayerGroup([]).addTo(map);

var markerIcon = L.icon({
    iconUrl: '../media/js/images/line-marker.png',
    iconSize: [9, 9]
})

function onMapClick(e){
    if (active=='profile') {
        newPoint = L.latLng(e.latlng);
        var marker = new L.marker(e.latlng, {
            'draggable': true,
            icon: markerIcon
        });
        //        marker.on('dragstart', onMarkerDragStart);
        marker.on('dragend', onMarkerDragEnd);
        markersGroup.addLayer(marker);
        latLngs = profileLine.getLatLngs();
        if (latLngs.length >= 1) {
            lineDistance += newPoint.distanceTo(latLngs[latLngs.length-1]);
        }
        $('#length').html(printDistance(lineDistance)).show();
        profileLine.addLatLng(e.latlng);
    }
}

map.on('click', onMapClick);

function resetLine() {
    profileLine.setLatLngs([]);
    lineDistance = 0;
    markersGroup.clearLayers();
    $('#length').hide();
}

function getLineDistance(line) {
    distance = 0;
    latLngs = line.getLatLngs();
    for (i=1; i<latLngs.length; i++) {
        //        alert(latLngs[i]);
        distance += latLngs[i-1].distanceTo(latLngs[i]);
    }
    return distance;
}

function printDistance(distance) {
    if (distance > 1000) {
        return 'Aktuální délka: ' + (distance/1000).toFixed(2) + ' km';
    } else {
        return 'Aktuální délka: ' + distance.toFixed(2) + ' m';
    }
}

function setProfileParams() {
    $('#profile_params').val(profileLine.getLatLngs());
}

//function onMarkerDragStart(e) {
//}

function onMarkerDragEnd(e) {
    profileLine.setLatLngs([]);
    markersGroup.eachLayer( function(layer) {
        profileLine.addLatLng(layer.getLatLng());
    });
    $('#length').html(printDistance(getLineDistance(profileLine)));
}
