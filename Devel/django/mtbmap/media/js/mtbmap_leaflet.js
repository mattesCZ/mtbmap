var map = L.map('map', {
    zoomControl: false
}).setView([51.04, 13.76], 12);

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

var drawControl = new L.Control.Draw({
    position: 'topright',
    polygon: false,
    circle: false,
    marker: false,
    rectangle: false
});
map.addControl(drawControl)

var drawnLines = new L.Polyline([], {});

map.on('draw:poly-created', function (e) {
//    alert(e.poly.getBounds().toBBoxString());
    drawnLines.setLatLngs(e.poly.getLatLngs());
    distance = 0;
    var latlngsArray = drawnLines.getLatLngs();
    for (i=0; i<latlngsArray.length-1; i++) {
        distance += latlngsArray[i].distanceTo(latlngsArray[i+1]);
    };
    $('#length').html(distance);
});
map.addLayer(drawnLines);

var menuItems = ["home", "legend", "export", "about"]

//function setZoom(){
//    document.getElementById('zoom').value=map.getZoom();
//}

function setExport() {
    document.getElementById('export_zoom').value=map.getZoom();
    //    document.getElementById('center').value=map.getCenter();
    document.getElementById('bounds').value=map.getBounds().toBBoxString();
    //    document.getElementById('size').value=map.getSize().toString();
}

var active = ''

$(document).ready(function() {
    $('#content').hide();
});
$(document).ready(function() {
    $('#home').bind('click', function () {
        if (active=='home') {
            $('#content').toggle();
        } else {
            $.get("/map/home/", function(data) {
                $('#content').html(data).show();
            });
            active = 'home'
        }
    });
});

$(document).ready(function() {
    $('#export').bind('click', function () {
        if (active=='export') {
            $('#content').toggle();
        } else {
            $.get("/map/export/", function(data) {
                $('#content').html(data).show();
            });
            active = 'export'
        }
    });
});

$(document).ready(function() {
    $('#legend').bind('click', function () {
        if (active=='legend') {
            $('#content').toggle();
        } else {
            $.get("/map/legend/"+ map.getZoom() +"/", function(data) {
                $('#content').html(data).show();
            });
            active = 'legend';
        };
        maxheight = $('#map').height() - ($('#header').height() + $('#footer').height() + 42);
        $('#content').css('max-height', maxheight);
    });
});

$(document).ready(function() {
    $('#profile').bind('click', function () {
        if (active=='profile') {
            $('#content').toggle();
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
};

map.on('zoomend', onMapZoom);

