// default initial position and zoom, central Europe
var initLatlng = new L.LatLng(49.50, 16.00);
var initZoom = 6;
// read last position cookies
if ($.cookie('latitude') && $.cookie('longitude') && $.cookie('zoom')) {
    initLatlng = new L.LatLng($.cookie('latitude'), $.cookie('longitude'));
    initZoom = $.cookie('zoom');
}
// create map object, set initial view
var map = L.map('map', {
    zoomControl: false
}).setView(initLatlng, initZoom);
// start geolocation
map.locate({
	setView: true,
	maxZoom: 16
});
// create Leaflet TileLayer
function tileLayer(url, attribution) {
    return new L.TileLayer(url, {
        maxZoom: 18,
        attribution: attribution
    })
}
// define tile layers
var baseLayers = {};
baseLayers["MTB mapa"] = tileLayer('http://tile.mtbmap.cz/mtbmap_tiles/{z}/{x}/{y}.png', 'Data: <a href="http://openstreetmap.org">OpenStreetMap</a>,&nbsp;<a href="http://dds.cr.usgs.gov/srtm/" >USGS</a>');
baseLayers["OpenStreetMap"] = tileLayer('http://{s}.tile.openstreetmap.org/{z}/{x}/{y}.png', 'Data: <a href="http://openstreetmap.org">OpenStreetMap</a>');
baseLayers["OpenCycleMap"] = tileLayer('http://{s}.tile.opencyclemap.org/cycle/{z}/{x}/{y}.png', 'Data: <a href="http://opencyclemap.org">OpenCycleMap</a>');
baseLayers["Hike & Bike Map"] = tileLayer('http://toolserver.org/tiles/hikebike/{z}/{x}/{y}.png', 'Data: <a href="http://www.hikebikemap.de">Hike &amp; Bike Map</a>');
// define tile overlays
var overlayLayers = {};
//overlayLayers["MTB obtížnost"] = tileLayer('http://mtbmap.cz/overlay-mtbscale_tiles/{z}/{x}/{y}.png', 'Data: <a href="http://openstreetmap.org">OpenStreetMap</a>,&nbsp;<a href="http://dds.cr.usgs.gov/srtm/" >USGS</a>');

baseLayers["MTB mapa"].addTo(map);
////////////////////////////////////////////////////////////////////////////////
// add map controls
// topright position, first is on top
map.addControl(L.control.zoom({
    position:"topright"
}));
var layers = new L.Control.Layers(baseLayers, overlayLayers);
map.addControl(layers);
// bottomright position, first is the lowest
map.addControl(L.control.scale({
    position:"bottomright",
    imperial:false,
    maxWidth:200
}));
map.addControl(new L.Control.Position({}));
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
    if (MTBMAP.activePanel=='legend') {
        updateLegend(map.getZoom());
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
    if (MTBMAP.activePanel=='export' && !userChanged) {
        setCurrentBounds();
    }
}
function onMapClick(e){
    if (MTBMAP.activePanel=='routes' && (MTBMAP.activeRoutesPanel=='manual' || MTBMAP.activeRoutesPanel=='routing')) {
        MTBMAP.activeLine.addPoint(e.latlng);
        if (!MTBMAP.activeLine.visible) {
            MTBMAP.activeLine.show();
        }
    }
}
