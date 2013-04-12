// lines for routing and gpx parsing
MTBMAP.lines['manual'] = new MTBMAP.SimpleLine([], {
    color: '#FF6600',
    opacity: 0.9
});
MTBMAP.lines['gpx'] = new MTBMAP.GpxLine([], {
    color: '#FF6600',
    clickable: false,
    opacity: 0.9
});
MTBMAP.lines['routing'] = new MTBMAP.RoutingLine([], {
    color: '#FF6600',
    opacity: 0.4
});
MTBMAP.activeLine = MTBMAP.lines[MTBMAP.activeRoutesPanel];

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
            MTBMAP.activePanel = ui.newPanel.selector.replace('#tab-', '');
            if (MTBMAP.activePanel=='legend') {
                updateLegend(map.getZoom());
            } else if (MTBMAP.activePanel=='places') {
                $('#places-addr').focus().select();
            } else if (MTBMAP.activePanel=='export') {
                setCurrentBounds();
            }
        }
    });
    // initialize routes sub-tabs menu
    $('#routes-tabs').tabs({
        active: 0,
        heightStyle: 'content',
        activate: function(event, ui) {
            MTBMAP.activeRoutesPanel = ui.newPanel.selector.replace('#routes-content-', '');
            // check file API for GPX functions
            MTBMAP.activeLine.hide();
            MTBMAP.activeLine = MTBMAP.lines[MTBMAP.activeRoutesPanel];
            MTBMAP.activeLine.show();
            MTBMAP.activeLine.updateDistance();
            if (MTBMAP.activeRoutesPanel=='gpx') {
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
    // initialize weights_template radio
    $('#weights_template').buttonset().click(function(event) {
    	event.preventDefault();
    	// uncheck old radio button
    	// $('#weights_template>input:checked').val().removeAttr("checked");
    	template_id = event.target.parentNode.htmlFor;
    	// check current radio button
    	$('#'+template_id).attr("checked","checked");
    	updateTemplate(template_id);
    });
    $('.fit-to-line').button().click(function(event) {
        MTBMAP.activeLine.fitMapView();
    });
    $('.reset-line').button().click(function(event) {
        MTBMAP.activeLine.reset();
    });
    $('.create-profile-button').button().click(function(event) {
        $('.profile-params').val(MTBMAP.activeLine.routeLatLngs());
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
        $('#export-line').val(MTBMAP.activeLine.routeLatLngs());
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
function updateTemplate(template_id) {
	$('#routes-accordion').accordion({animate: false});
	$.get("/map/routingparams/", { template_id: template_id }, function(data) {
		$('#routes-accordion').html(data).accordion("refresh").accordion({active: false}).show().accordion({animate: 400});
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
    MTBMAP.activeLine.getRoute();
}
function handleGPX(e) {
    files = e.target.files;
    for (var i = 0, f; f = files[i]; i++) {
        var reader = new FileReader()
        // Closure to capture the file information.
        reader.onload = (function(theFile) {
            return function(e) {
                MTBMAP.activeLine.parseGPX(e.target.result);
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
