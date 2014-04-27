// handling places
MTB.GUI.submitOnEnter = function(inputID, submitID) {
    jQuery('#' + inputID).keyup(function(event){
        if(event.keyCode === 13){
            jQuery('#' + submitID).click();
        }
    });
};

MTB.GUI.addrSearch = function() {
    var input = jQuery('#places-addr').val();

    jQuery.getJSON('http://nominatim.openstreetmap.org/search?format=json&limit=5&q=' + input, function(data) {
        var items = [],
            idField = 'osm_id',
            typeField = 'osm_type',
            nameField = 'display_name';

        jQuery.each(data, function(key, val) {
            items.push('<li id="' + val[idField] + '" ><a href="#" onclick="MTB.GUI.chooseAddr(' + val.lat +
                ', ' + val.lon + ', \'' + val.type + '\', ' + val[idField] + ', \'' + val[typeField] +
                '\');return false;">' + val[nameField] + '</a><span id="osm-id"></span>' +
                '<span id="elevation"></span></li>');
        });
        jQuery('#places-results').empty();
        if (items.length !== 0) {
            jQuery('<p>', {
                html: MTB.LANG.searchResults + ': '
            }).appendTo('#places-results');
            jQuery('<ul>', {
                'class': 'results-list',
                html: items.join('')
            }).appendTo('#places-results');
        } else {
            jQuery('<p>', {
                html: MTB.LANG.noResults
            }).appendTo('#places-results');
        }
    });
};

// zoom into given latlng and get elevation data
MTB.GUI.chooseAddr = function(lat, lng, type, osmID, osmType) {
    var location = new L.LatLng(lat, lng);
    MTB.map.panTo(location);
    if (type === 'city' || type === 'administrative') {
        MTB.map.setZoom(12);
    } else {
        MTB.map.setZoom(14);
    }
    jQuery('#' + osmID + ' > #osm-id').html('<p>OSM ID: ' + MTB.UTILS.osmLink(osmID, osmType) + '</p>');
    jQuery.get('/map/getheight/', {
        'profile-point': location.toString()
    }, function(data) {
        jQuery('#' + osmID + ' > #elevation').html('<p>' + MTB.LANG.elevation + ': ' + data + ' m</p>');
    });
};
