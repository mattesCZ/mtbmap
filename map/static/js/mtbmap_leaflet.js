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
    text: LANG.editPermalink,
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
			opacity: 0.3,
			color: "#EEE",
			weight: 4,
			smoothFactor: 2
		},
		onEachFeature: onEachFeature,
		name: name,
		slug: slug,
		layersControl: MTBMAP.layersControl,
		minZoom: minZoom
	});
}

////////////////////////////////////////////////////////////////////////////////
// add map events
map.on('zoomend', onMapZoom);
map.on('moveend', onMapMoveEnd);
map.on('click', onMapClick);
// update legend on map zoom
function onMapZoom() {
    if (MTBMAP.activePanel === 'legend') {
        updateLegend(map.getZoom());
    }
}
var userChanged = false;
function onMapMoveEnd() {
    jQuery.cookie('latitude', map.getCenter().lat, {
        expires: 7
    });
    jQuery.cookie('longitude', map.getCenter().lng, {
        expires: 7
    });
    jQuery.cookie('zoom', map.getZoom(), {
        expires: 7
    });
    if (MTBMAP.activePanel === 'export' && !userChanged) {
        setCurrentBounds();
    }
}
function onMapClick(e){
    if (MTBMAP.activePanel === 'routes' &&
            (MTBMAP.activeRoutesPanel === 'manual' || MTBMAP.activeRoutesPanel === 'routing')) {
        MTBMAP.activeLine.addPoint(e.latlng);
        if (!MTBMAP.activeLine.visible) {
            MTBMAP.activeLine.show();
        }
    }
}
