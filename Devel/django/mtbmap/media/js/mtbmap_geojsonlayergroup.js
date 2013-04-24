MTBMAP.GeojsonLayerGroup = L.GeoJSON.extend({
	initialize: function(data, options) {
		L.GeoJSON.prototype.initialize.call(this, data, options);
		this._addParent();
	},
	addGeojsonData: function(data) {
		this.addData(data);
		this._addParent();
	},
	_addParent: function() {
		var parent = this;
		this.eachLayer(function (layer) {
			layer.parentGroup = parent; 
		});
	}
});

MTBMAP.AjaxGeojsonLayerGroup = MTBMAP.GeojsonLayerGroup.extend({
	initialize: function(data, options) {
		MTBMAP.GeojsonLayerGroup.prototype.initialize.call(this, data, options);
		this.active = false;
	},
	options: {
		name: "",
		minZoom: 13,
		maxZoom: 18,
		layersControl: null
	},
	onAdd: function (map) {
		this._map = map;
		this.dataBounds = null;
		map.on({
			'moveend': this._update
		}, this);
		this._update();
	},
	onRemove: function (map) {
		this._remove();
		this._map = null;
	},
	_remove: function () {
		this.eachLayer(map.removeLayer, map);
		this.active = false;
	},
	_update: function () {
		if (!this._map) {return};

		var zoom = this._map.getZoom();
		if (zoom > this.options.maxZoom || zoom < this.options.minZoom) {
			this._remove();
			if (this.options.layersControl) {
				this.options.layersControl.removeLayer(this);
			};
			return;
		} else {
			this.eachLayer(map.addLayer, map);
			if (this.options.layersControl) {
				this.options.layersControl.addOverlay(this, this.options.name);
			}
			this.active = true;
			this._updateData();
		}
	},
	_updateData: function () {
		var oldDataBounds = this.dataBounds;
		var viewBounds = this._map.getBounds();
		if (oldDataBounds && oldDataBounds.contains(viewBounds)) {
			return;
		} else {
			var newDataBounds = this._extendBounds(viewBounds);
			this._getData(newDataBounds);
		}
	},
	_extendBounds: function (bounds) {
		var north = bounds.getNorthWest().lat,
		    east = bounds.getSouthEast().lng,
		    south = bounds.getSouthEast().lat,
		    west = bounds.getNorthWest().lng;
		extendedNorthWest = new L.LatLng(north + (north-south), west - (east-west));
		extendedSouthEast = new L.LatLng(south - (north-south), east + (east-west));
		return bounds.extend(extendedNorthWest).extend(extendedSouthEast);
	},
	_getData: function (bounds) {
		// TODO
		this.dataBounds = bounds;
	    $.get('/map/getjsondata/', {
	        'bounds': '[' + bounds.toBBoxString() + ']'
	    }, function(data) {
	    	// TODO add data to layer
	        alert(data.bounds);
	    });
	}
});
function resetHighlight(e) {
	var layer = e.target;
	layer.parentGroup.resetStyle(layer);
}

