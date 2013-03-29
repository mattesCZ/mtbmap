MTBMAP.Line = L.Polyline.extend({
	initialize : function(latlngs, options) {
		L.Polyline.prototype.initialize.call(this, latlngs, options);
		this.visible = false;
	},
	reset: function () {
        this.setLatLngs([]);
        this.hide();
	},
    show: function() {
        if (!this.visible) {
            map.addLayer(this);
            latlngs = this.getLatLngs();
            this._showButtons();
            this.visible = true;
        }
    },
    hide: function() {
        if (this.visible) {
            map.removeLayer(this);
            this._hideButtons();
            this.visible = false;
        }
    },
    fitMapView: function() {
        latlngs = this.getLatLngs();
        if (latlngs.length>1) {
            map.fitBounds(this.getBounds());
        } else if (latlngs.length==1) {
            map.panTo(latlngs[0]);
        }
    },
    distanceString: function() {
        return LANG.distance + ': ' + distanceWithUnits(this.getDistance());
    },
    getDistance: function() {
        d = 0;
        latlngs = this.getLatLngs();
        for (i=1; i<latlngs.length; i++) {
            d += latlngs[i-1].distanceTo(latlngs[i]);
        }
        return d/1000;
    },
    _showButtons: function() {
    	if (this.getLatLngs().length > 0) {
    		$('.line-buttons').show();
    	}
    },
    _hideButtons: function() {
    	$('.line-buttons').hide();
    }
})
MTBMAP.GpxLine = MTBMAP.Line.extend({
    parseGPX: function (data) {
        this.reset();
        try {
            gpxdoc = $.parseXML(data);
        } catch (err) {
            alert(LANG.gpxNotValid);
            return;
        }
        $gpx = $( gpxdoc );
        root = $gpx.find("gpx");
        if (!root.length) {
            alert(LANG.gpxNotValid);
            return;
        }
        track = root.find("trk");
        segments = track.find("trkseg");
        if (!segments.length) {
            alert(LANG.gpxNoTrackpoints);
            return;
        }
        points = [];
        try {
            segments.each(function () {
                pts = $(this).find("trkpt");
                pts.each(function() {
                    lat = $(this).attr("lat");
                    lon = $(this).attr("lon");
                    point = new L.LatLng(lat, lon);
                    points.push(point);
                });
            });
        } catch (err) {
            alert(LANG.gpxNotValid);
            return;
        }
        this.setLatLngs(points);
        $('.length').html(this.distanceString());
        this.show();
        this.fitMapView();
    }
})

MTBMAP.SimpleLine = MTBMAP.Line.extend({
	initialize : function(latlngs, options) {
		MTBMAP.Line.prototype.initialize.call(this, latlngs, options);
		this.markersGroup = new L.LayerGroup([]);
		this.markerIcon = L.icon({
			iconUrl : '../media/js/images/line-marker.png',
			iconSize : [9, 9]
		});
		// this.routesGroup = new L.LayerGroup([]);
	},
	reset: function() {
        this.setLatLngs([]);
        this.markersGroup.clearLayers();
        // this.routesGroup.clearLayers();
        this.hide();
    },
    show: function() {
        if (!this.visible) {
            map.addLayer(this);
            map.addLayer(this.markersGroup);
            // map.addLayer(this.routesGroup);
            latlngs = this.getLatLngs();
            this._showButtons();
            this.visible = true;
        }
    },
    hide: function() {
        if (this.visible) {
            map.removeLayer(this);
            map.removeLayer(this.markersGroup);
            // map.removeLayer(this.routesGroup);
            this._hideButtons();
            this.visible = false;
        }
    },
    addPoint: function(latlng) {
        marker = this._marker(latlng);
        this.markersGroup.addLayer(marker);
        this._updateLine();
    },
    _updateLine: function() {
        thisLine = this;
        thisLine.setLatLngs([]);
        this.markersGroup.eachLayer( function(layer) {
            thisLine.addLatLng(layer.getLatLng());
        });
        this._showButtons();
        $('.length').html(this.distanceString());
    },
    removePoint: function(marker) {
        this.markersGroup.removeLayer(marker);
        this._updateLine();
    },
    _marker: function(latlng) {
        m = new L.marker(latlng, {
            'draggable': true,
            'icon': this.markerIcon
        });
        m.on('dragend', _markerDragEnd);
        m.on('click', _markerClick);
        m.parentLine = this;
        return m;
    }
})
MTBMAP.RoutingLine = MTBMAP.SimpleLine.extend({
	initialize : function(latlngs, options) {
		MTBMAP.SimpleLine.prototype.initialize.call(this, latlngs, options);
		this.routesGroup = new L.LayerGroup([]);
	},
	reset: function() {
        this.setLatLngs([]);
        this.markersGroup.clearLayers();
        this.routesGroup.clearLayers();
        this.hide();
    },
    show: function() {
        if (!this.visible) {
            map.addLayer(this);
            map.addLayer(this.markersGroup);
            map.addLayer(this.routesGroup);
            latlngs = this.getLatLngs();
            this._showButtons();
            this.visible = true;
        }
    },
    hide: function() {
        if (this.visible) {
            map.removeLayer(this);
            map.removeLayer(this.markersGroup);
            map.removeLayer(this.routesGroup);
            this._hideButtons();
            this.visible = false;
        }
    },
	getRoute: function() {
        thisLine = this;
        this.routesGroup.clearLayers();
        latlngs = this.getLatLngs();
        if (latlngs.length<=1) {
            lPopup(map.getCenter(), '<h3>' + LANG.addPoints + '</h3>', true);
        } else {
            var params = $('#routes-params').serializeArray();
            $.post("/map/findroute/", {
                'params':JSON.stringify(params),
                'routing-line': '['+ latlngs + ']'
            }, function(data) {
                if (data.properties.status=='notfound') {
                    position = thisLine.getBounds().getCenter();
                    lPopup(position, LANG.routeNotFound, true);
                }
                geojsonLine = L.geoJson(data, {
                    style: routeStyle,
                    onEachFeature: onEachLineFeature
                });
                thisLine.routesGroup.addLayer(geojsonLine);
                map.fitBounds(geojsonLine.getBounds());
            });
        }
    }
})
// distance parameter in km
function distanceWithUnits(distance) {
    if (distance>1) {
        return distance.toFixed(2) + ' km';
    } else {
        return Math.round(distance*1000) + ' m';
    }
}
function _markerClick (e) {
    this.parentLine.removePoint(this);
}
function _markerDragEnd (e) {
    this.parentLine._updateLine();
}



function routeStyle(feature) {
    return {
        color: weightColor(feature.properties.weight),
        weight: 6,
        opacity: 1
    }
}
function weightColor(weight) {
    if (weight==1) return '#2222ff'
    else if (weight==2) return '#3377ff'
    else if (weight==3) return '#66ccff'
    else if (weight==4) return '#ff7755'
    else return '#ff3322';
}
function highlightLine(e) {
    var lineLayer = e.target;
    lineLayer.setStyle({
        weight: 10,
        color: '#ffffff',
        opacity: 0.6
    });
    lineLayer.bringToFront();
}
function resetHighlight(e) {
    geojsonLine.resetStyle(e.target);
}
function onEachLineFeature(feature, layer) {
    layer.bindPopup(lineFeatureInfo(feature))
    layer.on({
        mouseover: highlightLine,
        mouseout: resetHighlight
    });
}
function lineFeatureInfo(feature) {
    var info = '';
    if (feature.properties) {
        if (feature.properties.name) {
            info += '<h3>' + feature.properties.name + '<h3>';
        }
        info += '<p>'
        info += LANG.length + ': ' + distanceWithUnits(feature.properties.length);
        info += '<br>';
        info += LANG.weight + ': ' + feature.properties.weight.toString();
        if (feature.properties.osm_id) {
            info += '<br>';
            info += 'OSM ID: ' + osmLink(feature.properties.osm_id, 'way')
        }
        info += '</p>'
    }
    return info;
}
