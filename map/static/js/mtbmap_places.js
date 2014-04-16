// handling places
function submitOnEnter(inputID, submitID) {
    jQuery("#" + inputID).keyup(function(event){
        if(event.keyCode === 13){
            jQuery("#" + submitID).click();
        }
    });
}
function addrSearch() {
    var input = jQuery("#places-addr").val();

    jQuery.getJSON('http://nominatim.openstreetmap.org/search?format=json&limit=5&q=' + input, function(data) {
        var items = [];

        jQuery.each(data, function(key, val) {
            items.push("<li id='" + val.osm_id + "' ><a href='#' onclick='chooseAddr(" + val.lat + ", " + val.lon + ", \"" + val.type + "\", " + val.osm_id + ", \"" + val.osm_type + "\");return false;'>" + val.display_name + '</a><span id="osm-id"></span><span id="elevation"></span></li>');
        });
        jQuery('#places-results').empty();
        if (items.length !== 0) {
            jQuery('<p>', {
                html: LANG.searchResults + ': '
            }).appendTo('#places-results');
            jQuery('<ul>', {
                'class': 'results-list',
                html: items.join('')
            }).appendTo('#places-results');
        } else {
            jQuery('<p>', {
                html: LANG.noResults
            }).appendTo('#places-results');
        }
    });
}
// zoom into given latlng and get elevation data
function chooseAddr(lat, lng, type, osmID, osmType) {
    var location = new L.LatLng(lat, lng);
    map.panTo(location);
    if (type === 'city' || type === 'administrative') {
        map.setZoom(12);
    } else {
        map.setZoom(14);
    }
    jQuery("#" + osmID + " > #osm-id").html('<p>OSM ID: ' + osmLink(osmID, osmType) + '</p>');
    jQuery.get('/map/getheight/', {
        'profile-point': location.toString()
    }, function(data) {
        jQuery('#' + osmID + " > #elevation").html('<p>' + LANG.elevation + ': ' + data + ' m</p>');
    });
}
