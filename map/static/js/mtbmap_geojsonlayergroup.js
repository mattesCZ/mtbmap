MTB.GeojsonLayerGroup = L.GeoJSON.extend({
    initialize: function(geojson, options) {
        L.GeoJSON.prototype.initialize.call(this, null, options);
        this._featureIDS = [];
        if (geojson) {
            this.addGeojsonData(geojson);
        }
    },
    addGeojsonData: function(geojson) {
        var ids = this._featureIDS,
            features = geojson.features;
        if (features) {
            for (var i = 0; i < features.length; i++) {
                if (features[i].id) {
                    if (ids.indexOf(features[i]) >= 0) {
                        geojson.features[i].geometry = null;
                    } else {
                        ids.push(features[i].id);
                    }
                }
            }
            this._featureIDS = ids;
        }
        this.addData(geojson);
        this._addParent();
    },
    _addParent: function() {
        var parent = this;
        this.eachLayer(function (layer) {
            layer.parentGroup = parent;
        });
    }
});

MTB.AjaxGeojsonLayerGroup = MTB.GeojsonLayerGroup.extend({
    initialize: function(data, options) {
        MTB.GeojsonLayerGroup.prototype.initialize.call(this, data, options);
        this.active = false;
        this.dataBounds = null;
    },
    options: {
        name: '',
        slug: '',
        minZoom: 13,
        maxZoom: 18,
        layersControl: null
    },
    onAdd: function (map) {
        this._map = map;
        map.on({
            'moveend': this._update
        }, this);
        this._update();
    },
    onRemove: function () {
        this._remove();
        this._map = null;
    },
    _remove: function () {
        this.eachLayer(MTB.map.removeLayer, MTB.map);
        this.active = false;
    },
    _update: function () {
        if (!this._map) {
            return;
        }

        var zoom = this._map.getZoom();
        if (zoom > this.options.maxZoom || zoom < this.options.minZoom) {
            this._remove();
            if (this.options.layersControl) {
                this.options.layersControl.removeLayer(this);
            }
        } else {
            this.eachLayer(MTB.map.addLayer, MTB.map);
            if (this.options.layersControl) {
                this.options.layersControl.addOverlay(this, this.options.name);
            }
            this.active = true;
            this._updateData();
        }
    },
    _updateData: function () {
        if (this._needsUpdate()) {
            var newDataBounds = this._extendBounds(this._map.getBounds());
            this._getData(newDataBounds);
        }
    },
    _needsUpdate: function () {
        var oldDataBounds = this.dataBounds,
            viewBounds = this._map.getBounds();
        return !(oldDataBounds && oldDataBounds.contains(viewBounds));
    },
    _extendBounds: function (bounds) {
        var north = bounds.getNorthWest().lat,
            east = bounds.getSouthEast().lng,
            south = bounds.getSouthEast().lat,
            west = bounds.getNorthWest().lng,
            extendedNorthWest = L.latLng(north + (north-south), west - (east-west)),
            extendedSouthEast = L.latLng(south - (north-south), east + (east-west));
        return bounds.extend(extendedNorthWest).extend(extendedSouthEast);
    },
    _getData: function (bounds) {
        var _this = this;
        this.dataBounds = bounds;
        jQuery.get('/map/getjsondata/', {
            'bounds': '[' + bounds.toBBoxString() + ']',
            'slug': _this.options.slug
        }, function(data) {
            // TODO add data to layer
            var geojson = jQuery.parseJSON(data);
            _this.addGeojsonData(geojson);
        });
    }
});

MTB.EVENTS.onEachFeature = function(feature, layer) {
    layer.on({
        mouseover: MTB.EVENTS.highlightFeature,
        mouseout: MTB.EVENTS.resetHighlight
    });
    if (feature.properties && feature.properties.popupContent) {
        layer.bindPopup(feature.properties.popupContent);
    }
    if (feature.properties && feature.properties.label) {
        layer.bindLabel(feature.properties.label);
    }
};

MTB.EVENTS.highlightFeature = function(e) {
    var layer = e.target;
    layer.setStyle({
        opacity: 1,
        fillOpacity: 0.8
    });
    if (!L.Browser.ie && !L.Browser.opera) {
        layer.bringToFront();
    }
};

MTB.EVENTS.resetHighlight = function(e) {
    var layer = e.target;
    layer.parentGroup.resetStyle(layer);
};
