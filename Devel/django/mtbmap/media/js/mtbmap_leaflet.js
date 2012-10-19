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

var menuActive = ''
var profileActive = ''

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
        if (menuActive=='home') {
            $('#content').hide();
            menuActive = ''
        } else {
            $.get("/map/home/", function(data) {
                $('#content').html(data).show();
            });
            menuActive = 'home'
        }
    });
});

$(document).ready(function() {
    $('#legend').bind('click', function () {
        if (menuActive=='legend') {
            $('#content').hide();
            menuActive = '';
        } else {
            $.get("/map/legend/"+ map.getZoom() +"/", function(data) {
                $('#content').html(data).show();
            });
            menuActive = 'legend';
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
        if (menuActive=='profile') {
            $('#content').hide();
            menuActive = '';
        } else {
            $.get("/map/profile/", function(data) {
                $('#content').html(data).show();
//                if (profileLine.getLatLngs().length==0) {
//                    hideButtons();
//                }
                toggleProfileMenu('draw');
                $('#profile-draw').bind('click', function () {
                    toggleProfileMenu('draw');
                })
                $('#profile-routing').bind('click', function () {
                    toggleProfileMenu('routing');
                })
            });
            menuActive = 'profile'
        }
    });
});

function onMapZoom(e) {
    if (menuActive=='legend') {
        $.get("/map/legend/"+ map.getZoom() +"/", function(data) {
            $('#content').html(data).show();
        });
    }
//    else if (menuActive=='export') {
//        setCurrentBounds();
//    }
}

map.on('zoomend', onMapZoom);

////////////////////////////////////////////////////////////////////////////////
// handling user export:
var userChanged = false;
$(document).ready(function() {
    $('#export').bind('click', function () {
        if (menuActive=='export') {
            $('#content').hide();
            setCurrentBounds();
            menuActive = ''
        } else {
            $.get("/map/export/", function(data) {
                $('#content').html(data);
                setCurrentBounds();
                $('#content').show();
            //                $('#exportmap').bind('click', function () {
            //                    $.get("/map/exportmap/", exportValues(), function(data) {
            //                        $('#content').html(data).show();
            //                        menuActive = 'exportmap';
            //                    });
            //                });
            });
            menuActive = 'export'
        }
    });
});

function onMapMoveEnd(e) {
    if (menuActive=='export' && !userChanged) {
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
        sc = ($('#export_highres').is(':checked')) ? 4 : 2;
        northWestPixel = new L.Point(centerPixel.x - imgx/sc, centerPixel.y - imgy/sc);
        southEastPixel = new L.Point(centerPixel.x + imgx/sc, centerPixel.y + imgy/sc);
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
function toggleProfileMenu(activate) {
    if (activate=='draw') {
        $('#content-profile-routing').hide();
    } else {
        $('#content-profile-draw').hide();
    }
    $('#content-profile-'+activate).show();
    profileActive = activate;
}

function ProfileLine(latlngs, lineOptions) {
    this.line = new L.Polyline(latlngs, lineOptions);
    this.markersGroup = new L.LayerGroup([]);
    this.markerIcon = L.icon({
        iconUrl: '../media/js/images/line-marker.png',
        iconSize: [9, 9]
    });
    this.visible = false;

    this.reset = function() {
        this.line.setLatLngs([]);
        this.markersGroup.clearLayers();
    }

    this.show = function() {
        if (!this.visible) {
            map.addLayer(this.line);
            map.addLayer(this.markersGroup);
            this.visible = true;
        }
    };
    this.hide = function() {
        if (this.visible) {
            map.removeLayer(this.line);
            map.removeLayer(this.markersGroup);
            this.visible = false;
        }
    }
    this.addPoint = function(latlng) {
        marker = this._marker(latlng);
        this.markersGroup.addLayer(marker);
        this.line.addLatLng(latlng);
        latlngs = this.line.getLatLngs();
        $('#length').html(this.distanceString()).show();
    }
    this.getLatLngs = function() {
        return this.line.getLatLngs();
    }
    this.fitMapView = function() {
        latlngs = this.line.getLatLngs();
        if (latlngs.length>1) {
            map.fitBounds(this.line.getBounds());
        } else if (latlngs.length==1) {
            map.panTo(latlngs[0]);
        }
    }
    this.distanceString = function() {
        d = this.getDistance()
        if (d > 1000) {
            return 'Aktuální délka: ' + (d/1000).toFixed(2) + ' km';
        } else {
            return 'Aktuální délka: ' + d.toFixed(2) + ' m';
        }
    }
    this._marker = function(latlng) {
        m = new L.marker(latlng, {
            'draggable': true,
            'icon': this.markerIcon
        });
        m.on('dragend', this._markerDragEnd);
        m.parent = this;
        return m;
    }
    this._markerDragEnd = function(e) {
        p = this.parent;
        p.line.setLatLngs([]);
        p.markersGroup.eachLayer( function(layer) {
            p.line.addLatLng(layer.getLatLng());
        });
        $('#length').html(p.distanceString());
    }
    this.getDistance = function() {
        d = 0;
        latlngs = this.line.getLatLngs();
        for (i=1; i<latlngs.length; i++) {
            d += latlngs[i-1].distanceTo(latlngs[i]);
        }
        return d;
    }
}

var pLine = new ProfileLine([], {
    color: '#FF6600',
    opacity: 0.9,
    dashArray: '15, 15'
});

var routingLine = new L.Polyline([], {
    color: '#FF6600',
    //    dashArray: '15, 15',
    opacity: 0.9
}).addTo(map);
var routingGroup = new L.LayerGroup([]).addTo(map);

function onMapClick(e){
    if (menuActive=='profile' && profileActive=='draw') {
        pLine.addPoint(e.latlng);
        pLine.show();
        showButtons();

    //        newPoint = L.latLng(e.latlng);
    //        var marker = new L.marker(e.latlng, {
    //            'draggable': true,
    //            icon: markerIcon
    //        });
    //        //        marker.on('dragstart', onMarkerDragStart);
    //        marker.on('dragend', onMarkerDragEnd);
    //        markersGroup.addLayer(marker);
    //        latLngs = profileLine.getLatLngs();
    //        if (latLngs.length >= 1) {
    //            lineDistance += newPoint.distanceTo(latLngs[latLngs.length-1]);
    //            $('#length').html(printDistance(lineDistance));
    //            if (latLngs.length == 1) {
    //                showButtons();
    //                $('#point_height').hide();
    //                $('#length').show();
    //            }
    //        } else {
    //            $.get("/map/getheight/", {
    //                'profile_point': e.latlng.toString()
    //            }, function (data) {
    //                out = 'Výška zadaného bodu je ' + data + ' metrů nad mořem'
    //                $('#point_height').html(out).show();
    //                showButtons();
    //            });
    //        }
    //        profileLine.addLatLng(e.latlng);
    } else if (menuActive=='profile' && profileActive=='routing') {
        startPoint = L.latLng(e.latlng);
        var marker = new L.marker(e.latlng, {
            'draggable': true,
            icon: markerIcon
        });
        routingGroup.addLayer(marker);
        
    }
}

map.on('click', onMapClick);

function fitToLine() {
    pLine.fitMapView();
}

function resetLine() {
    pLine.reset();
//    profileLine.setLatLngs([]);
//    lineDistance = 0;
//    markersGroup.clearLayers();
//    hideButtons();
}

function setProfileParams() {
    $('#profile_params').val(pLine.getLatLngs());
}

function hideButtons() {
    $('#length').hide();
    $('#point_height').hide();
    $('#create_profile').hide();
    $('#reset_line').hide();
    $('#fit_to_line').hide();
}

function showButtons() {
    //    $('#length').show();
    //    $('#point_height').show();
    $('#create_profile').show();
    $('#reset_line').show();
    $('#fit_to_line').show();
}
