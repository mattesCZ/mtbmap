function RouteLine(latlngs, lineOptions) {
    this.line = new L.Polyline(latlngs, lineOptions);
    this.markersGroup = new L.LayerGroup([]);
    this.markerIcon = L.icon({
        iconUrl: '../media/js/images/line-marker.png',
        iconSize: [9, 9]
    });
    this.visible = false;
    this.routesGroup = new L.LayerGroup([]);

    this.reset = function() {
        this.line.setLatLngs([]);
        this.markersGroup.clearLayers();
        this.routesGroup.clearLayers();
        this.hide();
    }
    this.show = function() {
        if (!this.visible) {
            map.addLayer(this.line);
            map.addLayer(this.markersGroup);
            map.addLayer(this.routesGroup);
            latlngs = this.getLatLngs();
            if (latlngs.length>0) {
                $('.line-buttons').show();
            }
            this.visible = true;
        }
    }
    this.hide = function() {
        if (this.visible) {
            map.removeLayer(this.line);
            map.removeLayer(this.markersGroup);
            map.removeLayer(this.routesGroup);
            $('.line-buttons').hide();
            this.visible = false;
        }
    }
    this.addPoint = function(latlng) {
        marker = this._marker(latlng);
        this.markersGroup.addLayer(marker);
        this._updateLine();
    }
    this._updateLine = function() {
        thisLine = this.line;
        thisLine.setLatLngs([]);
        this.markersGroup.eachLayer( function(layer) {
            thisLine.addLatLng(layer.getLatLng());
        });
        $('.length').html(this.distanceString());
    }
    this.removeMarker = function(marker) {
        this.markersGroup.removeLayer(marker);
        this._updateLine();
    }
    this.getLatLngs = function() {
        return this.line.getLatLngs();
    }
    this.fitMapView = function() {
        latlngs = this.getLatLngs();
        if (latlngs.length>1) {
            map.fitBounds(this.line.getBounds());
        } else if (latlngs.length==1) {
            map.panTo(latlngs[0]);
        }
    }
    this.distanceString = function() {
        return LANG.distance + ': ' + distanceWithUnits(this.getDistance());
    }
    this._marker = function(latlng) {
        m = new L.marker(latlng, {
            'draggable': true,
            'icon': this.markerIcon
        });
        m.on('dragend', this._markerDragEnd);
        m.on('click', this._markerClick);
        m.routeLine = this;
        return m;
    }
    this._markerClick = function() {
        this.routeLine.removeMarker(this);
    }
    this._markerDragEnd = function(e) {
        this.routeLine._updateLine();
    }
    //distance in kilometers
    this.getDistance = function() {
        d = 0;
        latlngs = this.getLatLngs();
        for (i=1; i<latlngs.length; i++) {
            d += latlngs[i-1].distanceTo(latlngs[i]);
        }
        return d/1000;
    }
    this.getRoute = function() {
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
                    position = thisLine.line.getBounds().getCenter();
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
    this.parseGPX = function (data) {
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
        this.line.setLatLngs(points);
        $('.length').html(this.distanceString());
        this.show();
        this.fitMapView();
    }
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
// distance parameter in km
function distanceWithUnits(distance) {
    if (distance>1) {
        return distance.toFixed(2) + ' km';
    } else {
        return Math.round(distance*1000) + ' m';
    }
}
