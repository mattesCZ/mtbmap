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
