L.Control.Position = L.Control.extend({
    options: {
        position: 'bottomright'
    },
    onAdd: function(map) {
        this._map = map;
        this.latlng = map.getCenter();
        this.zoom = map.getZoom();
        var className = 'leaflet-control-position',
            container = L.DomUtil.create('div', className);
        this.container = container;
        this._update();
        map.on('mousemove', this._setLatLng, this);
        map.on('zoomend', this._setZoom, this);
        return container;
    },
    _update: function() {
        this.container.innerHTML = this.latlng.lat.toFixed(5) +
                                     ', ' + this.latlng.lng.toFixed(5) +
                                     ', z' + this.zoom;
    },
    _setLatLng: function(e) {
        this.latlng = e.latlng;
        this._update();
    },
    _setZoom: function() {
        this.zoom = this._map.getZoom();
        this._update();
    }
});
