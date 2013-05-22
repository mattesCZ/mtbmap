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
        latlngs = this.routeLatLngs();
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
        latlngs = this.routeLatLngs();
        for (i=1; i<latlngs.length; i++) {
            d += latlngs[i-1].distanceTo(latlngs[i]);
        }
        return d/1000;
    },
    updateDistance: function() {
    	$('.length').html(this.distanceString());
    },
    _showButtons: function() {
    	if (this.getLatLngs().length > 0) {
    		$('.line-buttons').show();
    	}
    },
    _hideButtons: function() {
    	$('.line-buttons').hide();
    },
    // the same like getLatLngs, overloaded only in RoutingLine
    routeLatLngs: function() {
    	return this.getLatLngs();
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
        points = [];
        points = points.concat(this._findRoutePoints(root));
        points = points.concat(this._findTrackPoints(root));
        if (!points.length) {
            alert(LANG.gpxNoTrackpoints);
            return;
        }
        this.setLatLngs(points);
        this.show();
        this.updateDistance();
        this.fitMapView();
    },
    _findTrackPoints: function (root) {
    	gpxLine = this;
        tracks = root.find("trk");
        trkPts = [];
        tracks.each(function () {
	        segments = $(this).find("trkseg");
	        if (segments.length) {
	        	trkPts = trkPts.concat(gpxLine._findPoints(segments, "trkpt"));        	
	        }
        });
        return trkPts;
    },
    _findRoutePoints: function (root) {
    	routes = root.find("rte");
    	return this._findPoints(routes, "rtept");
    },
    _findPoints: function (parentElements, name) {
    	pts = [];
    	try {
	    	parentElements.each(function () {
	    		pointElements = $(this).find(name);
	    		pointElements.each(function () {
	                lat = $(this).attr("lat");
	                lon = $(this).attr("lon");
	                point = new L.LatLng(lat, lon);
	                pts.push(point);
	    		});
	    	});
	    } catch (err) {
	    	alert(LANG.gpxNotValid);
	    	return [];
	    }
	    return pts;
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
		this.on('click', this.onClick);
		// this.on('mouseover', this.onMouseover);
		// this.on('mouseout', this.onMouseout);
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
    _redraw: function (latlngs) {
    	this.markersGroup.clearLayers();
    	for (var i=0; i < latlngs.length; i++) {
			marker = this._marker(latlngs[i]);
			this.markersGroup.addLayer(marker);
		};
		this._updateLine();
    },
    _updateLine: function() {
        thisLine = this;
        thisLine.setLatLngs([]);
        this.markersGroup.eachLayer( function(layer) {
            thisLine.addLatLng(layer.getLatLng());
        });
        this._showButtons();
        this.updateDistance();
	    this.fire('line-changed');
    },
    removePoint: function(marker) {
        this.markersGroup.removeLayer(marker);
        this._updateLine();
    },
    insertPoint: function(latlng, segmentIndex) {
    	latlngs = this.getLatLngs();
    	latlngs.splice(segmentIndex, 0, latlng);
    	this._redraw(latlngs);
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
    },
    onClick: function(event) {
    	clickLatlng = event.latlng;
    	segmentIndex = this._nearestSegment(clickLatlng);
		this.insertPoint(clickLatlng, segmentIndex);
    },
    // onMouseover: function (event) {
    	// L.DomUtil.addClass(document.body, 'target-cursor');
    // },
    // onMouseout: function (event) {
    	// L.DomUtil.removeClass(document.body, 'target-cursor');
    // },
    _nearestSegment: function (clickLatlng) {
    	minDist = 41000000;
    	segmentIndex = 0;
    	latlngs = this.getLatLngs();
    	for (var i=1; i < latlngs.length; i++) {
    		var p = {}
    		p.x = clickLatlng.lng
    		p.y = clickLatlng.lat
    		var p1 = {}
    		p1.x = latlngs[i-1].lng
    		p1.y = latlngs[i-1].lat
    		var p2 = {}
    		p2.x = latlngs[i].lng
    		p2.y = latlngs[i].lat
    		var dist = L.LineUtil.pointToSegmentDistance(p, p1, p2);
    		if (dist < minDist) {
    			minDist = dist;
    			segmentIndex = i;
    		}
		};
    	return segmentIndex;
    }
})
MTBMAP.RoutingLine = MTBMAP.SimpleLine.extend({
	initialize : function(latlngs, options) {
		MTBMAP.SimpleLine.prototype.initialize.call(this, latlngs, options);
		this.routesGroup = new L.LayerGroup([]);
		this.resultsShown = false;
	},
	reset: function() {
        this.setLatLngs([]);
        this.markersGroup.clearLayers();
        this.routesGroup.clearLayers();
        this.showSettings();
        this.hide();
    },
    show: function() {
    	var thisLine = this;
        if (!this.visible) {
            map.addLayer(this);
            map.addLayer(this.markersGroup);
            map.addLayer(this.routesGroup);
            this.on('line-changed', thisLine._onLineChange)
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
    showResults: function() {
    	$('#routes-settings').hide();
    	$('#routes-results').show();
    	this.resultsShown = true;
    },
    showSettings: function() {
    	$('#routes-results').hide();
    	$('#routes-settings').show();
    	this.resultsShown = false;
    },
    getBounds: function() {
    	return L.polyline(this.routeLatLngs(), {}).getBounds();
    },
    sendEvaluation: function() {
    	var latlngs = this.getLatLngs();
    	var params = $('#routes-params').serializeArray();
    	$('#id_params').val(JSON.stringify(params));
    	$('#id_linestring').val('[' + latlngs + ']');
    	var form = $('#send-evaluation-form').serializeArray();
    	$.post("/map/evaluation/", {
    		'form': JSON.stringify(form)
    	}, function(data) {
	    	Recaptcha.reload();
	    	if (data.valid) {
	    		form[0].reset();
	    		alert('thanks');
	    	} else {
	    		alert('retype captcha again, please');
	    	}
    	});
    },
	getRoute: function() {
        thisLine = this;
        this.routesGroup.clearLayers();
        latlngs = this.getLatLngs();
        if (latlngs.length<=1) {
            lPopup(map.getCenter(), '<h3>' + LANG.addPoints + '</h3>', true);
        } else {
            var params = $('#routes-params').serializeArray();
        	$('.loading').addClass('ajax-loading');
            $.post("/map/findroute/", {
                'params':JSON.stringify(params),
                'routing-line': '['+ latlngs + ']'
            }, function(data) {
                if (data.properties.status=='notfound') {
                	position = L.polyline(thisLine.getLatLngs(), {}).getBounds().getCenter();
                    lPopup(position, LANG.routeNotFound, true);
                }
                geojsonLine = new MTBMAP.GeojsonLayerGroup(data, {
                    style: routeStyle,
                    onEachFeature: onEachLineFeature
                });
                thisLine.routesGroup.addLayer(geojsonLine);
                geojsonLine.bringToFront();
                map.fitBounds(geojsonLine.getBounds());
            }).always( function () {
            	$('.loading').removeClass('ajax-loading');
            }).done( function () {
            	thisLine.updateDistance();
            	thisLine.showResults();
            });
        }
    },
    // get latLngs from geojson layer group
    routeLatLngs: function () {
    	var gLine = new L.Polyline([], {});
		this.routesGroup.eachLayer(function (layer) {
			layer.eachLayer(function (sublayer) {
				gLine.spliceLatLngs(gLine.getLatLngs().length-1,1)
				newLatLngs = sublayer.getLatLngs();
				for (i in newLatLngs) {
					gLine.addLatLng(newLatLngs[i]);
				}
			})
		})
		return gLine.getLatLngs();
    },
    _onLineChange: function (event) {
    	if (this.resultsShown) {
	    	this.showSettings();
	    	this.routesGroup.clearLayers();
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
        opacity: 1,
        smoothFactor: 2
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
