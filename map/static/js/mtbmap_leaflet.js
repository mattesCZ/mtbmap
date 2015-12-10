// Add map controls
// topright position, first is on top
MTB.map.addControl(L.control.zoom({
    position:'topright'
}));

// quick and dirty addition of waymarkedtrails overlay
MTB.overlayLayers.WayMarkedTrailsHiking = L.tileLayer('http://tile.waymarkedtrails.org/hiking/{z}/{x}/{y}.png', {
    maxZoom: 18,
    attribution: 'waymarkedtrails.org'
}).addTo(MTB.map);

MTB.layersControl = new L.Control.Layers(MTB.baseLayers, MTB.overlayLayers);
MTB.map.addControl(MTB.layersControl);
// bottomright position, first is the lowest
MTB.map.addControl(L.control.scale({
    position:'bottomright',
    imperial:false,
    maxWidth:200
}));
MTB.map.addControl(new L.Control.Position({}));
MTB.map.addControl(new L.Control.Permalink({
    text: MTB.LANG.editPermalink,
    useAnchor: false,
    position: 'bottomright',
    urlBase: 'http://www.openstreetmap.org/edit.html'
}));
MTB.map.addControl(new L.Control.Permalink({
    text: 'Permalink',
    layers: MTB.layersControl,
    position: 'bottomright'
}));

MTB.map.on('locationfound', function(event) {
    if (L.UrlUtil.hash() === '') {
        var latlng = L.latLng(event.latlng.lat, event.latlng.lng);
        MTB.map.setView(latlng, 16);
    }
});
////////////////////////////////////////////////////////////////////////////////
// geojson overlays
// create Ajax Geojson Layer
MTB.UTILS.LAYERS.geojsonOverlay = function(slug, name, minZoom) {
    return new MTB.AjaxGeojsonLayerGroup(null, {
        style: {
            opacity: 1,
            fillOpacity: 0
        },
        pointToLayer: function (feature, latlng) {
            return L.circleMarker(latlng, {
                radius: 7,
                fillColor: '#fff',
                color: '#f22',
                weight: 1.5
            });
        },
        onEachFeature: MTB.EVENTS.onEachFeature,
        name: name,
        slug: slug,
        layersControl: MTB.layersControl,
        minZoom: minZoom
    });
};

MTB.UTILS.LAYERS.geojsonOverlayLines = function(slug, name, minZoom) {
    return new MTB.AjaxGeojsonLayerGroup(null, {
        style: {
            opacity: 0.3,
            color: '#EEE',
            weight: 4,
            smoothFactor: 2
        },
        onEachFeature: MTB.EVENTS.onEachFeature,
        name: name,
        slug: slug,
        layersControl: MTB.layersControl,
        minZoom: minZoom
    });
};

////////////////////////////////////////////////////////////////////////////////
// update legend on map zoom
MTB.EVENTS.onMapZoom = function() {
    if (MTB.activePanel === 'legend') {
        MTB.GUI.updateLegend(MTB.map.getZoom());
    }
};

MTB.userChanged = false;
MTB.EVENTS.onMapMoveEnd = function() {
    jQuery.cookie('latitude', MTB.map.getCenter().lat, {
        expires: 7
    });
    jQuery.cookie('longitude', MTB.map.getCenter().lng, {
        expires: 7
    });
    jQuery.cookie('zoom', MTB.map.getZoom(), {
        expires: 7
    });
    if (MTB.activePanel === 'export' && !MTB.userChanged) {
        MTB.EXPORT.setCurrentBounds();
    }
};

MTB.EVENTS.onMapClick = function(e){
    if (MTB.activePanel === 'routes' &&
            (MTB.activeRoutesPanel === 'manual' || MTB.activeRoutesPanel === 'routing')) {
        MTB.activeLine.addPoint(e.latlng);
        if (!MTB.activeLine.visible) {
            MTB.activeLine.show();
        }
    }
};

// add map events
MTB.map.on('zoomend', MTB.EVENTS.onMapZoom);
MTB.map.on('moveend', MTB.EVENTS.onMapMoveEnd);
MTB.map.on('click', MTB.EVENTS.onMapClick);
