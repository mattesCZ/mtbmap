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
function resetHighlight(e) {
	var layer = e.target;
	layer.parentGroup.resetStyle(layer);
}

