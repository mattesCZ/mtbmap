// handling places
function submitOnEnter(inputID, submitID) {
    $("#" + inputID).keyup(function(event){
        if(event.keyCode == 13){
            $("#" + submitID).click();
        }
    });
}
function addrSearch() {
    var input = $("#places-addr").val();

    $.getJSON('http://nominatim.openstreetmap.org/search?format=json&limit=5&q=' + input, function(data) {
        var items = [];

        $.each(data, function(key, val) {
            items.push("<li id='" + val.osm_id + "' ><a href='#' onclick='chooseAddr(" + val.lat + ", " + val.lon + ", \"" + val.type + "\", " + val.osm_id + ", \"" + val.osm_type + "\");return false;'>" + val.display_name + '</a><span id="osm-id"></span><span id="elevation"></span></li>');
        });
        $('#places-results').empty();
        if (items.length != 0) {
            $('<p>', {
                html: LANG.searchResults + ': '
            }).appendTo('#places-results');
            $('<ul>', {
                'class': 'results-list',
                html: items.join('')
            }).appendTo('#places-results');
        } else {
            $('<p>', {
                html: LANG.noResults
            }).appendTo('#places-results');
        }
    });
}
// zoom into given latlng and get elevation data
function chooseAddr(lat, lng, type, osmID, osmType) {
    var location = new L.LatLng(lat, lng);
    map.panTo(location);
    if (type == 'city' || type == 'administrative') {
        map.setZoom(12);
    } else {
        map.setZoom(14);
    }
    $("#" + osmID + " > #osm-id").html('<p>OSM ID: ' + osmLink(osmID, osmType) + '</p>');
    $.get('/map/getheight/', {
        'profile-point': location.toString()
    }, function(data) {
        $('#' + osmID + " > #elevation").html('<p>' + LANG.elevation + ': ' + data + ' m</p>');
    });
}
