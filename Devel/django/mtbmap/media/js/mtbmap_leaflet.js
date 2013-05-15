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
MTBMAP.baseLayers["MTB mapa"] = tileLayer('http://tile.mtbmap.cz/mtbmap_tiles/{z}/{x}/{y}.png', 'Data: <a href="http://openstreetmap.org">OpenStreetMap</a>,&nbsp;<a href="http://dds.cr.usgs.gov/srtm/" >USGS</a>');
MTBMAP.baseLayers["OpenStreetMap"] = tileLayer('http://{s}.tile.openstreetmap.org/{z}/{x}/{y}.png', 'Data: <a href="http://openstreetmap.org">OpenStreetMap</a>');
MTBMAP.baseLayers["OpenCycleMap"] = tileLayer('http://{s}.tile.opencyclemap.org/cycle/{z}/{x}/{y}.png', 'Data: <a href="http://opencyclemap.org">OpenCycleMap</a>');
MTBMAP.baseLayers["Hike & Bike Map"] = tileLayer('http://toolserver.org/tiles/hikebike/{z}/{x}/{y}.png', 'Data: <a href="http://www.hikebikemap.de">Hike &amp; Bike Map</a>');
// define tile overlays
//overlayLayers["MTB obtížnost"] = tileLayer('http://mtbmap.cz/overlay-mtbscale_tiles/{z}/{x}/{y}.png', 'Data: <a href="http://openstreetmap.org">OpenStreetMap</a>,&nbsp;<a href="http://dds.cr.usgs.gov/srtm/" >USGS</a>');

MTBMAP.baseLayers["MTB mapa"].addTo(map);
////////////////////////////////////////////////////////////////////////////////
// add map controls
// topright position, first is on top
map.addControl(L.control.zoom({
    position:"topright"
}));
MTBMAP.layersControl = new L.Control.Layers(MTBMAP.baseLayers, MTBMAP.overlayLayers);
map.addControl(MTBMAP.layersControl);
// bottomright position, first is the lowest
map.addControl(L.control.scale({
    position:"bottomright",
    imperial:false,
    maxWidth:200
}));
map.addControl(new L.Control.Position({}));
map.addControl(new L.Control.Permalink({
    text: 'Edit OSM data',
    useAnchor: false,
    position: 'bottomright',
    urlBase: "http://www.openstreetmap.org/edit.html"
}));
map.addControl(new L.Control.Permalink({
    text: 'Permalink',
    layers: MTBMAP.layersControl,
    position: 'bottomright'
}));

////////////////////////////////////////////////////////////////////////////////
// geojson overlays
// create Ajax Geojson Layer
function geojsonOverlay(slug, name, minZoom) {
	return new MTBMAP.AjaxGeojsonLayerGroup(null, {
		style: {
			opacity: 1,
			fillOpacity: 0
		},
		pointToLayer: function (feature, latlng) {
			return L.circleMarker(latlng, {
				radius: 7,
				fillColor: "#fff",
				color: "#f22",
				weight: 1.5
			});
		},
		onEachFeature: onEachFeature,
		name: name,
		slug: slug,
		layersControl: MTBMAP.layersControl,
		minZoom: minZoom
	});
}
function geojsonOverlayLines(slug, name, minZoom) {
	return new MTBMAP.AjaxGeojsonLayerGroup(null, {
		style: {
			opacity: 0.2,
			color: "#706"
		},
		onEachFeature: onEachFeature,
		name: name,
		slug: slug,
		layersControl: MTBMAP.layersControl,
		minZoom: minZoom
	});
}
MTBMAP.overlayLayers["guidepost"] = geojsonOverlay("guideposts", "Guideposts", 13);
MTBMAP.overlayLayers["guidepost"].addTo(map);
MTBMAP.overlayLayers["sport_shop"] = geojsonOverlay("sport_shop", "Sport shops", 14);
MTBMAP.overlayLayers["sport_shop"].addTo(map);
MTBMAP.overlayLayers["mtb_description"] = geojsonOverlayLines("mtb_description", "MTB description", 14);
MTBMAP.overlayLayers["mtb_description"].addTo(map);


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
