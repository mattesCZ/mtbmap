var activePanel = ''
var routePanels = ['manual', 'gpx', 'routing']
var activeRoutesPanel = routePanels[0]

$(document).ready(function() {
    // set focus on map
    $('#map').focus();
    // set height of main panel
    setPanelsMaxHeight();
    // initialize main tabs menu
    $('#main-tabs').tabs({
        collapsible: true,
        active: false,
        activate: function(event, ui) {
            activePanel = ui.newPanel.selector.replace('#tab-', '');
            if (activePanel=='legend') {
                updateLegend(map.getZoom());
            } else if (activePanel=='places') {
                $('#places-addr').focus().select();
            } else if (activePanel=='export') {
                setCurrentBounds();
            }
        }
    });
    // initialize routes sub-tabs menu
    $('#routes-tabs').tabs({
        active: 0,
        heightStyle: 'content',
        activate: function(event, ui) {
            activeRoutesPanel = ui.newPanel.selector.replace('#routes-content-', '');
            // check file API for GPX functions
            if (activeRoutesPanel=='gpx') {
                if (!(window.File && window.FileReader && window.FileList && window.Blob)) {
                    $('#routes-content-gpx').html('<h4>' + LANG.fileAPIError + '</h4>');
                }
            }
        }
    });
    // tab places interaction
    submitOnEnter('places-addr', 'places-submit');
    $('#places-submit').button().click(function(event) {
        addrSearch();
    });
    // tab routes interaction
    $('#routes-accordion').accordion({
        collapsible: true,
        active: false,
        heightStyle: 'content'
    });
    $('.fit-to-line').button().click(function(event) {
        pLine.fitMapView();
    });
    $('.reset-line').button().click(function(event) {
        pLine.reset();
    });
    $('.create-profile-button').button().click(function(event) {
        $('.profile-params').val(pLine.getLatLngs());
    });
    $('.get-route-button').button();
    // tab export interaction
    $('#set-bounds-button').button().click(function(event) {
        event.preventDefault();
        setCurrentBounds();
    });
    $('#export-button').button().click(function(event) {
        // set range parameters for map export
        $('#export-bounds').val(getBounds().toBBoxString());
        $('#export-zoom').val($('#export-zoom-select').val());
        $('#export-line').val(pLine.getLatLngs());
    });
});
$(window).resize(function(event) {
    setPanelsMaxHeight();
});
function updateLegend(zoom) {
    $.get("/map/legend/", {
        zoom: zoom
    }, function(data) {
        $('#tab-legend').html(data);
    });
}
function setPanelsMaxHeight() {
    maxheight = $('#map').height() - ($('#footer').height() + 70);
    $('.main-tab-panel').css('max-height', maxheight);
    $('.subtab-panel').css('max-height', maxheight-40);
}
////////////////////////////////////////////////////////////////////////////////
// GUI functions for routes
function getRoute(e) {
    setupPost(e);
    pLine.getRoute();
}
function handleGPX(e) {
    files = e.target.files;
    for (var i = 0, f; f = files[i]; i++) {
        var reader = new FileReader()
        // Closure to capture the file information.
        reader.onload = (function(theFile) {
            return function(e) {
                pLine.parseGPX(e.target.result);
            };
        })(f);
        reader.readAsText(f);
    }
}
function osmLink(osm_id, osm_type) {
    return '<a href="http://www.openstreetmap.org/browse/' + osm_type + '/' + osm_id + '" target="_blank">' + osm_id + '</a>'
}
// shortcut for leaflet popup
function lPopup (position, content, hideTip) {
    popup = L.popup().setLatLng(position).setContent(content).openOn(map);
    if (hideTip) {
        L.DomUtil.addClass(popup._tipContainer, 'hidden');
    }
}
