var map = L.map('map', {
    zoomControl: false
}).setView([49.82, 15.00], 8);

var mtbmapTileLayer = new L.TileLayer('http://mtbmap.cz/mtbmap_tiles/{z}/{x}/{y}.png', {
    maxZoom: 18,
    attribution: 'Data: <a href="http://openstreetmap.org">OpenStreetMap</a>,&nbsp;<a href="http://dds.cr.usgs.gov/srtm/" >USGS</a>'
});
mtbmapTileLayer.addTo(map)

var osmTileLayer = new L.TileLayer('http://{s}.tile.openstreetmap.org/{z}/{x}/{y}.png', {
    maxZoom: 18,
    attribution: 'Data: <a href="http://openstreetmap.org">OpenStreetMap</a>'
});

var cyclemapTileLayer = new L.TileLayer('http://{s}.tile.opencyclemap.org/cycle/{z}/{x}/{y}.png', {
    maxZoom: 18,
    attribution: 'Data: <a href="http://opencyclemap.org">OpenCycleMap</a>'
});

var hikebikeTileLayer = new L.TileLayer('http://toolserver.org/tiles/hikebike/{z}/{x}/{y}.png', {
    maxZoom: 18,
    attribution: 'Data: <a href="http://www.hikebikemap.de">Hike &amp; Bike Map</a>'
});

//var mtbmapSymbolsTileLayer = new L.TileLayer('http://mtbmap.cz/overlay-mtbscale_tiles/{z}/{x}/{y}.png', {
//    maxZoom: 18
//});

function csrfSafeMethod(method) {
    // these HTTP methods do not require CSRF protection
    return (/^(GET|HEAD|OPTIONS|TRACE)$/.test(method));
}
function getCookie(name) {
    var cookieValue = null;
    if (document.cookie && document.cookie != '') {
        var cookies = document.cookie.split(';');
        for (var i = 0; i < cookies.length; i++) {
            var cookie = jQuery.trim(cookies[i]);
            // Does this cookie string begin with the name we want?
            if (cookie.substring(0, name.length + 1) == (name + '=')) {
                cookieValue = decodeURIComponent(cookie.substring(name.length + 1));
                break;
            }
        }
    }
    return cookieValue;
}
function setupPost(e) {
    var csrftoken = getCookie('csrftoken');
    e.preventDefault();
    $.ajaxSetup({
        crossDomain: false, // obviates need for sameOrigin test
        beforeSend: function(xhr, settings) {
            if (!csrfSafeMethod(settings.type)) {
                xhr.setRequestHeader("X-CSRFToken", csrftoken);
            }
        }
    });
}

L.control.zoom({
    position:"topright"
}).addTo(map)

L.control.scale({
    position:"bottomright",
    imperial:false,
    maxWidth:200
}).addTo(map)

L.Control.Position = L.Control.extend({
    options: {
        position: 'bottomright'
    },
    onAdd: function(map) {
        this._map = map;
        var className = 'leaflet-control-position',
        container = L.DomUtil.create('div', className)
        this.container = container;
        container.innerHTML = this._latlngString(map.getCenter());

        map.on('mousemove', this._update, this);
        return container;
    },
    _update: function(e) {
        this.container.innerHTML = this._latlngString(e.latlng);
    },
    _latlngString: function (latlng) {
        return latlng.lat.toFixed(5) + ', ' + latlng.lng.toFixed(5);
    }
});
pos = new L.Control.Position({}).addTo(map);

var baseLayers = {
    "MTB mapa": mtbmapTileLayer,
    "OpenStreetMap": osmTileLayer,
    "OpenCycleMap": cyclemapTileLayer,
    "Hike & Bike Map": hikebikeTileLayer
}
var overlayLayers = {
//    "MTB obtížnost": mtbmapSymbolsTileLayer
}

L.control.layers(baseLayers, overlayLayers).addTo(map)
map.addControl(new L.Control.Permalink({
    text: 'Permalink',
    layers: baseLayers,
    position: 'bottomright'
}));


var menuItems = ["home", "legend", "export", "routes", "places"]

var menuActive = ''
var routesActive = ''

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
    $('#routes').bind('click', function () {
        if (menuActive=='routes') {
            $('#content').hide();
            menuActive = '';
        } else {
            $.get("/map/routes/", function(data) {
                $('#content').html(data).show();
            });
            menuActive = 'routes';
        }
    });
    $('#places').bind('click', function () {
        if (menuActive=='places') {
            $('#content').hide();
            menuActive = ''
        } else {
            $.get("/map/places/", function(data) {
                $('#content').html(data);
                submit_on_enter('places_addr', 'places_submit');
                $('#content').show();
            });
            menuActive = 'places'
        }
    });
});

function onMapZoom(e) {
    if (menuActive=='legend') {
        $.get("/map/legend/"+ map.getZoom() +"/", function(data) {
            $('#content').html(data).show();
        });
    }
}

map.on('zoomend', onMapZoom);

$(document).ready(function() {
    $('#map').focus();
});

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
// handling places
function submit_on_enter(input_id, submit_id) {
    $("#" + input_id).keyup(function(event){
        if(event.keyCode == 13){
            $("#" + submit_id).click();
        }
    });
}

function addr_search() {
    var inp = document.getElementById("places_addr");

    $.getJSON('http://nominatim.openstreetmap.org/search?format=json&limit=5&q=' + inp.value, function(data) {
        var items = [];

        $.each(data, function(key, val) {
            items.push("<li class='results_item' id='" + val.osm_id + "' ><a href='#' onclick='chooseAddr(" + val.lat + ", " + val.lon + ", \"" + val.type + "\", " + val.osm_id + ");return false;'>" + val.display_name + '</a><span id="elevation"></span></li>');
        });

        $('#places_results').empty();
        if (items.length != 0) {
            $('<p>', {
                html: "Search results:"
            }).appendTo('#places_results');
            $('<ul/>', {
                'class': 'results_list',
                html: items.join('')
            }).appendTo('#places_results');
        } else {
            $('<p>', {
                html: "No results found"
            }).appendTo('#places_results');
        }
    });
}
function chooseAddr(lat, lng, type, id) {
    var location = new L.LatLng(lat, lng);
    map.panTo(location);

    if (type == 'city' || type == 'administrative') {
        map.setZoom(12);
    } else {
        map.setZoom(14);
    }
    $.get('/map/getheight/', {
        'profile_point': location.toString()
        }, function(data) {
        $('#' + id + " > #elevation").html('<p>Elevation: ' + data + ' m</p>');
    });
}


////////////////////////////////////////////////////////////////////////////////
// handling routes

function RouteLine(latlngs, lineOptions) {
    this.line = new L.Polyline(latlngs, lineOptions);
    //    this.line.on('click', function() {alert('clicked');});
    this.markersGroup = new L.LayerGroup([]);
    this.markerIcon = L.icon({
        iconUrl: '../media/js/images/line-marker.png',
        iconSize: [9, 9]
    });
    this.visible = false;
    this.routesGroup = new L.LayerGroup([]);

    this.reset = function() {
        this.line.setLatLngs([]);
        this.markersGroup.clearLayers();
        this.routesGroup.clearLayers();
    }

    this.show = function() {
        if (!this.visible) {
            map.addLayer(this.line);
            map.addLayer(this.markersGroup);
            map.addLayer(this.routesGroup)
            this.visible = true;
        }
    };
    this.hide = function() {
        if (this.visible) {
            map.removeLayer(this.line);
            map.removeLayer(this.markersGroup);
            map.removeLayer(this.routesGroup);
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
    this.removeMarker = function(marker) {
        l = this.line;
        l.setLatLngs([]);
        this.markersGroup.removeLayer(marker);
        this.markersGroup.eachLayer( function(layer) {
            l.addLatLng(layer.getLatLng());
        });
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
        m.on('click', this._markerClick);
        m.parent = this;
        return m;
    }
    //    this._lineClick = function() {
    //        alert('clicked or tapped');
    //    }
    this._markerClick = function() {
        p = this.parent;
        p.removeMarker(this);
        $('#length').html(p.distanceString());
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
    this.getRoute = function() {
        thisLine = this;
        this.routesGroup.clearLayers();
        latlngs = this.getLatLngs();
        //        if (latlngs.length>1) {
        //            start = latlngs[0].lat.toFixed(5) + ' ' + latlngs[0].lng.toFixed(5);
        //            end = latlngs[latlngs.length-1].lat.toFixed(5) + ' ' + latlngs[latlngs.length-1].lng.toFixed(5);
        //            $('#routing_start').val(start);
        //            $('#routing_end').val(end);
        //        } else {
        //            start = new L.LatLng($('#routing_start').val());
        //            end = new L.LatLng($('#routing_end').val());
        //            line = new L.Polyline([start, end], {});
        //            latlngs = line.getLatLngs();
        //        }
        if (latlngs.length<=1) {
            L.popup().setLatLng(map.getCenter()).setContent('<h3>Přidej další body</h3>').openOn(map);
        } else {
            var params = $('#routes_params').serializeArray();
            $.post("/map/findroute/", {
                'params':JSON.stringify(params),
                'routing_line': '['+ latlngs + ']'
            }, function(data) {
                geojsonLine = L.geoJson(data, {
                    style: {
                        color: '#0055ff',
                        opacity: 1
                    }
                });
                thisLine.routesGroup.addLayer(geojsonLine);
                map.fitBounds(geojsonLine.getBounds());
            });
        }
    }
}

var pLine = new RouteLine([], {
    color: '#FF6600',
    opacity: 0.9
//    dashArray: '15, 15'
});

function onMapClick(e){
    if (menuActive=='routes') {
        pLine.addPoint(e.latlng);
        if (!pLine.visible) {
            pLine.show()
        }
    }
}
map.on('click', onMapClick);

function fitToLine() {
    pLine.fitMapView();
}

function resetLine() {
    pLine.reset();
}

function setProfileParams() {
    $('#profile_params').val(pLine.getLatLngs());
}

function getRoute(e) {
    setupPost(e);
    pLine.getRoute();
}

jsonWeights = {
    "type": "mtb",
    "highway" : {
        "motorway":1,
        "trunk":1,
        "primary":1,
        "secondary":1,
        "tertiary":1,
        "pedestrian":1,
        "residential":1,
        "unclassified":1,
        "service":1,
        "track":1,
        "road":1,
        "path":1,
        "footway":1,
        "cycleway":1,
        "bridleway":1,
        "steps":1
    },
    "tracktype" : {
        "grade1":1,
        "grade2":1,
        "grade3":1,
        "grade4":1,
        "grade5":1
    },
    "width" : {
        "max":"100",
        "min":"0"
    },
    "surface" : {
        "asphalt":1,
        "grass":1
    },
    "mtbscale" : {
        "0":1,
        "1":1,
        "2":1,
        "3":1,
        "4":1,
        "5":1,
        "6":1
    },
    "mtbscaleuphill" : {
        "max":5,
        "min":0
    },
    "osmc" : 1,
    "sac_scale" : {
        "max":6,
        "min":1
    }
}
function gpxUpload(e) {
    setupPost(e);
    $.post("/map/gpxupload/", {}, function (data) {
        geojsonLine = L.geoJson(data, {
            style: {
                color: '#0055ff',
                opacity: 1
            }
        });
        map.addLayer(geojsonLine);
        map.fitBounds(geojsonLine.getBounds());
    })
}