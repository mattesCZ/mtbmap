// default initial position and zoom, central Europe
var initLatlng = new L.LatLng(49.50, 16.00);
var initZoom = 6;

// read last position cookies
if ($.cookie('latitude') && $.cookie('longitude') && $.cookie('zoom')) {
    initLatlng = new L.LatLng($.cookie('latitude'), $.cookie('longitude'));
    initZoom = $.cookie('zoom');
}

////////////////////////////////////////////////////////////////////////////////
// create map object, set initial view
var map = L.map('map', {
    zoomControl: false
}).setView(initLatlng, initZoom);

////////////////////////////////////////////////////////////////////////////////
// define tile layers
var mtbmapTileLayer = new L.TileLayer('http://tile.mtbmap.cz/mtbmap_tiles/{z}/{x}/{y}.png', {
    maxZoom: 18,
    attribution: 'Data: <a href="http://openstreetmap.org">OpenStreetMap</a>,&nbsp;<a href="http://dds.cr.usgs.gov/srtm/" >USGS</a>'
});
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
// define tile overlays
//var mtbmapSymbolsTileLayer = new L.TileLayer('http://mtbmap.cz/overlay-mtbscale_tiles/{z}/{x}/{y}.png', {
//    maxZoom: 18
//});
var baseLayers = {
    "MTB mapa": mtbmapTileLayer,
    "OpenStreetMap": osmTileLayer,
    "OpenCycleMap": cyclemapTileLayer,
    "Hike & Bike Map": hikebikeTileLayer
}
var overlayLayers = {
//    "MTB obtížnost": mtbmapSymbolsTileLayer
}
mtbmapTileLayer.addTo(map);

////////////////////////////////////////////////////////////////////////////////
// setup methods for ajax requests
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

////////////////////////////////////////////////////////////////////////////////
// add map controls
map.addControl(L.control.zoom({
    position:"topright"
}));
map.addControl(L.control.scale({
    position:"bottomright",
    imperial:false,
    maxWidth:200
})
);
map.addControl(new L.Control.Position({}));
var layers = new L.Control.Layers(baseLayers, overlayLayers);
map.addControl(layers)
map.addControl(new L.Control.Permalink({
    text: 'Permalink',
    layers: layers,
    position: 'bottomright'
}));

////////////////////////////////////////////////////////////////////////////////
// add map events
map.on('zoomend', onMapZoom);
map.on('moveend', onMapMoveEnd);
map.on('click', onMapClick);
// update legend on map zoom
function onMapZoom(e) {
    if (menuActive=='legend') {
        $.get("/map/legend/", {
            zoom: map.getZoom()
        }, function(data) {
            $('#tab-legend').html(data);
        });
    }
}
var userChanged = false;
function onMapMoveEnd(e) {
    $.cookie('latitude', map.getCenter().lat, {
        expires: 7
    });
    $.cookie('longitude', map.getCenter().lng, {
        expires: 7
    });
    $.cookie('zoom', map.getZoom(), {
        expires: 7
    });
    if (menuActive=='export' && !userChanged) {
        setCurrentBounds();
    }
}
function onMapClick(e){
    if (menuActive=='routes') {
        pLine.addPoint(e.latlng);
        if (!pLine.visible) {
            pLine.show()
        }
    }
}

////////////////////////////////////////////////////////////////////////////////
// content
var menuItems = ["home", "legend", "export", "routes", "places"]
var menuActive = ''
var routesActive = ''

function tabHome() {
    $.get("/map/home/", function(data) {
        $('#tab-home').html(data);
    });
    menuActive = 'home';
}
function tabLegend() {
    $.get("/map/legend/", {
        zoom: map.getZoom()
    }, function(data) {
        $('#tab-legend').html(data);
    });
    menuActive = 'legend';
}
function tabRoutes() {
    $.get("/map/routes/", function(data) {
        $('#tab-routes').html(data);
        if (!pLine.getLatLngs().length>0) {
            $('.line_buttons').hide();
        }
        $('#routes-tabs').tabs({
            //            collapsible: true,
            active: 0,
            heightStyle: 'content',
            activate: function(event, ui) {
                var $tabs = $('#routes-tabs').tabs();
                var selected = $tabs.tabs('option', 'active');
                // check file API for GPX functions
                if (selected==1) {
                    if (!(window.File && window.FileReader && window.FileList && window.Blob)) {
                        alert(LANG.fileAPIError);
                    }
                }
            }
        });
        setContentMaxHeight();
        $('#routes_accordion').accordion({
            collapsible: true,
            active: false,
            heightStyle: 'content'
        });
        $('.fit_to_line').button().click(function(event) {
            fitToLine();
        });
        $('.reset_line').button().click(function(event) {
            resetLine();
        });
        $('.create_profile_button').button().click(function(event) {
            setProfileParams();
        });
        $('.get_route_button').button();
    });
    menuActive = 'routes';
}
function tabPlaces() {
    $.get("/map/places/", function(data) {
        $('#tab-places').html(data);
        submitOnEnter('places_addr', 'places_submit');
        $('#places_submit').button().click(function(event) {
            addrSearch();
        });
        $('#places_addr').focus();
    });
    menuActive = 'places'
}
function tabExport() {
    $.get("/map/export/", function(data) {
        $('#tab-export').html(data);
        setCurrentBounds();
        $('#set-bounds-button').button().click(function(event) {
            event.preventDefault();
            setCurrentBounds();
        });
        $('#export-button').button().click(function(event) {
            getParams();
        });
    });
    menuActive = 'export'
}
function setContentMaxHeight() {
    maxheight = $('#map').height() - ($('#footer').height() + 80);
    $('.main-tab-content').css('max-height', maxheight);
    $('.subtab-panel').css('max-height', maxheight-50);
}
$(window).resize(function(event) {
    setContentMaxHeight();
});
$(document).ready(function() {
    // set focus on map
    $('#map').focus();
    // set height of main panel
    setContentMaxHeight();
    // initialize main tabs menu
    $('#main-tabs').tabs({
        collapsible: true,
        active: false,
        activate: function(event, ui) {
            var $tabs = $('#main-tabs').tabs();
            var selected = $tabs.tabs('option', 'active');
            if (selected==0) tabHome()
            else if (selected==1) tabLegend()
            else if (selected==2) tabRoutes()
            else if (selected==3) tabPlaces()
            else if (selected==4) tabExport()
            else return;
        }
    });
});

////////////////////////////////////////////////////////////////////////////////
// handling user export:
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
    $('#export_bounds').val(getBounds().toBBoxString());
    $('#export_zoom').val($('#export_zoom_select').val());
    $('#export_line').val(pLine.getLatLngs());
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
function submitOnEnter(input_id, submit_id) {
    $("#" + input_id).keyup(function(event){
        if(event.keyCode == 13){
            $("#" + submit_id).click();
        }
    });
}
function addrSearch() {
    var input = $("#places_addr").val();

    $.getJSON('http://nominatim.openstreetmap.org/search?format=json&limit=5&q=' + input, function(data) {
        var items = [];

        $.each(data, function(key, val) {
            items.push("<li class='results_item' id='" + val.osm_id + "' ><a href='#' onclick='chooseAddr(" + val.lat + ", " + val.lon + ", \"" + val.type + "\", " + val.osm_id + ", \"" + val.osm_type + "\");return false;'>" + val.display_name + '</a><span id="osm_id"></span><span id="elevation"></span></li>');
        });
        $('#places_results').empty();
        if (items.length != 0) {
            $('<p>', {
                html: LANG.searchResults + ': '
            }).appendTo('#places_results');
            $('<ul>', {
                'class': 'results_list',
                html: items.join('')
            }).appendTo('#places_results');
        } else {
            $('<p>', {
                html: LANG.noResults
            }).appendTo('#places_results');
        }
    });
}
// zoom into given latlng and get elevation data
function chooseAddr(lat, lng, type, osm_id, osm_type) {
    var location = new L.LatLng(lat, lng);
    map.panTo(location);
    if (type == 'city' || type == 'administrative') {
        map.setZoom(12);
    } else {
        map.setZoom(14);
    }
    $("#" + osm_id + " > #osm_id").html('<p>OSM ID: ' + osmLink(osm_id, osm_type) + '</p>');
    $.get('/map/getheight/', {
        'profile_point': location.toString()
    }, function(data) {
        $('#' + osm_id + " > #elevation").html('<p>' + LANG.elevation + ': ' + data + ' m</p>');
    });
}

////////////////////////////////////////////////////////////////////////////////
// handling routes
function RouteLine(latlngs, lineOptions) {
    this.line = new L.Polyline(latlngs, lineOptions);
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
        $('.line_buttons').hide();
    }
    this.show = function() {
        if (!this.visible) {
            map.addLayer(this.line);
            map.addLayer(this.markersGroup);
            map.addLayer(this.routesGroup);
            latlngs = this.getLatLngs();
            if (latlngs.length>0) {
                $('.line_buttons').show();
            }
            this.visible = true;
        }
    }
    this.hide = function() {
        if (this.visible) {
            map.removeLayer(this.line);
            map.removeLayer(this.markersGroup);
            map.removeLayer(this.routesGroup);
            $('.line_buttons').hide();
            this.visible = false;
        }
    }
    this.addPoint = function(latlng) {
        marker = this._marker(latlng);
        this.markersGroup.addLayer(marker);
        this.line.addLatLng(latlng);
        latlngs = this.line.getLatLngs();
        if (latlngs.length==1) {
            $('.line_buttons').show();
        }
        $('.length').html(this.distanceString()).show();
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
        d = this.getDistance();
        return LANG.distance + ': ' + distanceWithUnits(d);
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
        $('.length').html(p.distanceString());
    }
    this._markerDragEnd = function(e) {
        p = this.parent;
        p.line.setLatLngs([]);
        p.markersGroup.eachLayer( function(layer) {
            p.line.addLatLng(layer.getLatLng());
        });
        $('.length').html(p.distanceString());
    }
    //distance in kilometers
    this.getDistance = function() {
        d = 0;
        latlngs = this.line.getLatLngs();
        for (i=1; i<latlngs.length; i++) {
            d += latlngs[i-1].distanceTo(latlngs[i]);
        }
        return d/1000;
    }
    this.getLine = function() {
        latlngs = this.getLatLngs();
        return '[' + latlngs + ']';
    }
    this.getRoute = function() {
        thisLine = this;
        this.routesGroup.clearLayers();
        latlngs = this.getLatLngs();
        if (latlngs.length<=1) {
            lPopup(map.getCenter(), '<h3>' + LANG.addPoints + '</h3>', true);
        } else {
            var params = $('#routes_params').serializeArray();
            $.post("/map/findroute/", {
                'params':JSON.stringify(params),
                'routing_line': '['+ latlngs + ']'
            }, function(data) {
                if (data.properties.status=='notfound') {
                    position = thisLine.line.getBounds().getCenter();
                    lPopup(position, LANG.routeNotFound, true);
                }
                geojsonLine = L.geoJson(data, {
                    style: routeStyle,
                    onEachFeature: onEachLineFeature
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
})

////////////////////////////////////////////////////////////////////////////////
// routing GUI functions
function fitToLine() {
    pLine.fitMapView();
}
function resetLine() {
    pLine.reset();
}
function setProfileParams() {
    $('.profile_params').val(pLine.getLatLngs());
}
function getRoute(e) {
    setupPost(e);
    pLine.getRoute();
}
function handleGPX(e) {
    files = e.target.files;
    for (var i = 0, f; f = files[i]; i++) {
        var reader = new FileReader()
        // Closure to capture the file information.
        reader.onload = (function(theFile) {
            return function(e) {
                parseGPX(e.target.result);
            };
        })(f);
        reader.readAsText(f);
    }
}
function parseGPX(data) {
    try {
        gpxdoc = $.parseXML(data);
    } catch (err) {
        alert(LANG.gpxNotValid);
        return;
    }
    $gpx = $( gpxdoc );
    root = $gpx.find("gpx");
    if (!root.length) {
        alert(LANG.gpxNotValid);
        return;
    }
    track = root.find("trk");
    segments = track.find("trkseg");
    if (!segments.length) {
        alert(LANG.gpxNoTrackpoints);
        return;
    }
    points = [];
    var polyline = new L.Polyline([]);
    try {
        segments.each(function () {
            pts = $(this).find("trkpt");
            pts.each(function() {
                lat = $(this).attr("lat");
                lon = $(this).attr("lon");
                point = new L.LatLng(lat, lon);
                polyline.addLatLng(point);
            });
        });
    } catch (err) {
        alert(LANG.gpxNotValid);
        return;
    }
    pLine.reset();
    pLine = new RouteLine(polyline.getLatLngs(), {
        color: '#FF6600',
        opacity: 0.9
    });
    $('.length').html(pLine.distanceString());
    pLine.show();
    pLine.fitMapView();
}
function routeStyle(feature) {
    return {
        color: weightColor(feature.properties.weight),
        weight: 6,
        opacity: 1
    }
}
function weightColor(weight) {
    if (weight==1) return '#2222ff'
    else if (weight==2) return '#3377ff'
    else if (weight==3) return '#66ccff'
    else if (weight==4) return '#ff7755'
    else return '#ff3322';
}
function highlightLine(e) {
    var lineLayer = e.target;
    lineLayer.setStyle({
        weight: 10,
        color: '#ffffff',
        opacity: 0.6
    });
    lineLayer.bringToFront();
}
function resetHighlight(e) {
    geojsonLine.resetStyle(e.target);
}
function onEachLineFeature(feature, layer) {
    layer.bindPopup(lineFeatureInfo(feature))
    layer.on({
        mouseover: highlightLine,
        mouseout: resetHighlight
    });
}
function lineFeatureInfo(feature) {
    var info = '';
    if (feature.properties) {
        if (feature.properties.name) {
            info += '<h3>' + feature.properties.name + '<h3>';
        }
        info += '<p>'
        info += LANG.length + ': ' + distanceWithUnits(feature.properties.length);
        info += '<br>';
        info += LANG.weight + ': ' + feature.properties.weight.toString();
        if (feature.properties.osm_id) {
            info += '<br>';
            info += 'OSM ID: ' + osmLink(feature.properties.osm_id, 'way')
        }
        info += '</p>'
    }
    return info;
}
// distance parameter in km
function distanceWithUnits(distance) {
    if (distance>1) {
        return distance.toFixed(2) + ' km';
    } else {
        return Math.round(distance*1000) + ' m';
    }
}
function osmLink(osm_id, osm_type) {
    return '<a href="http://www.openstreetmap.org/browse/' + osm_type + '/' + osm_id + '" target="_blank">' + osm_id + '</a>'
}
// shortcut for leaflet popup
function lPopup (position, content, showTip) {
    popup = L.popup().setLatLng(position).setContent(content).openOn(map);
    if (showTip) {
        L.DomUtil.addClass(popup._tipContainer, 'hidden');
    }
}
