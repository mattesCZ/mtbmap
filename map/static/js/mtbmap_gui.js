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
    $('#weights_template').buttonset();
    $('#weights_template > label').click(function(event) {
    	event.preventDefault();
    	$('#weights_template > input').prop('checked', false);
    	$('#' + this.htmlFor).prop('checked', true);
    	template_id = $('#' + this.htmlFor).val();
    	updateTemplate(template_id);
    });
    // force update template button and get params
    $('#weights_template > label').first().click();
    $('.fit-to-line').button().click(function(event) {
        MTBMAP.activeLine.fitMapView();
    });
    $('.reset-line').button().click(function(event) {
        MTBMAP.activeLine.reset();
    });
    $('.create-profile-button').button().click(function(event) {
        $('.profile-params').val(MTBMAP.activeLine.routeLatLngs());
    });
    $('.create-gpx-button').button().click(function(event) {
        $('.profile-params').val(MTBMAP.activeLine.routeLatLngs());
    });
    $('.get-route-button').button();
    $('.back-to-settings').button().click(function(event){
    	MTBMAP.activeLine.showSettings();
    });
    $('.get-template-button').button().click(function(event) {
   		var params = $('#routes-params').serializeArray();
    	$('.params').val(JSON.stringify(params));
    });
    $('#evaluation-dialog-form').dialog({
    	autoOpen: false,
    	modal: false,
    	width: 'auto',
    	buttons: {
			"Odeslat": function(event) {
			    form = $('#send-evaluation-form');
			    thisDialog = $( this );
			    if (!form.valid) {
			    	return;
			    } else {
					setupPost(event);
			    	var latlngs = MTBMAP.activeLine.getLatLngs();
			    	var params = $('#routes-params').serializeArray();
			    	$('#id_params').val(JSON.stringify(params));
			    	$('#id_linestring').val('[' + latlngs + ']');
			    	var form = $('#send-evaluation-form').serializeArray();
			    	$.post("/map/evaluation/", {
			    		'form': JSON.stringify(form)
			    	}, function(data) {
				    	if (data.valid) {
				    		$('#evaluation-dialog-form').html(data.html);
							thisDialog.dialog( "close" );
							var ThanksDialog = $(data.html);
							ThanksDialog.dialog({
								title: LANG.thanks,
								show: 'clip',
								hide: 'clip',
								buttons: {
									'Close': function() {$(this).dialog('close')}
								}
							});
				    	} else {
					    	Recaptcha.reload();
					    	$('#evaluation-dialog-form .error-message').html(LANG.correctEntries);
				    	}
			    	});
			    }
			},
			"Storno": function() {
				$( this ).dialog( "close" );
			}
    	}
    });
    $('#send-evaluation-form').validate({
    	rules: {
    		'comment': 'required',
    		'email': {
    			required: true,
    			email: true
    		}
    	}
    });
    $('.open-evaluation-dialog').button().click(function() {
    	$('#evaluation-dialog-form').dialog('open');
    })
    // $('.send-evaluation-button').button();
    if (!(window.File && window.FileReader && window.FileList && window.Blob)) {
        $('#params-buttons').hide();
    }
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
    $('#main-tabs').show();
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
function sendEvaluation(e) {
    form = $('#send-evaluation-form');
    if (!form.valid) {
    	return;
    } else {
	    setupPost(e);
	    MTBMAP.activeLine.sendEvaluation();
    }
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
function handleTemplate(e) {
    files = e.target.files;
    for (var i = 0, f; f = files[i]; i++) {
        var reader = new FileReader()
        // Closure to capture the file information.
        reader.onload = (function(theFile) {
            return function(e) {
                fillRouteParams(e.target.result);
            };
        })(f);
        reader.readAsText(f);
    }
}
function fillRouteParams(params) {
	try {
    	jsonParams = $.parseJSON(params);
	} catch (err) {
		alert(LANG.templateNotValid);
		return;
	}
	$('select[name=global__vehicle] > option').attr('selected', false);
	$('select[name=global__vehicle] > option[value='+jsonParams.vehicle+']').attr('selected', true);
	$('input[name=global__oneway]').attr('checked', jsonParams.oneway);
	for (var i=0; i<jsonParams.preferred.length; i++) {
		var pref = jsonParams.preferred[i];
		$('input[name=preferred__'+ pref.slug +']')
			.attr('checked', pref.value);
		if (pref.use){
			$('input[name=preferred__'+ pref.slug +']').parent().parent().css('display', 'table-row');
		} else {
			$('input[name=preferred__'+ pref.slug +']').parent().parent().css('display', 'none');
		}
	}
	for (var i=0; i<jsonParams.classes.length; i++) {
		var cl = jsonParams.classes[i];
		if (cl.max != null) {
			$('input[name=' + cl.slug + '__max]').attr('value', cl.max);
		};
		if (cl.min != null) {
			$('input[name=' + cl.slug + '__min]').attr('value', cl.min);
		};
		if (cl.features != null) {
			var fts = cl.features;
			for (var j=0; j<fts.length; j++) {
				$('select[name="' + cl.slug + '__'+ fts[j].slug +'"] option').each(function () {
					var $this = $(this);
					if ($this.val() == fts[j].value) {
						$this.prop('selected', true);
					} else {
						$this.prop('selected', false);
					}
				});
				if (fts[j].visible) {
					$('select[name="' + cl.slug + '__'+ fts[j].slug +'"]').parent().parent().css('display', 'table-row');
				} else {
					$('select[name="' + cl.slug + '__'+ fts[j].slug +'"]').parent().parent().css('display', 'none');
				};
			};
		};
		if (cl.visible) {
			$('#h-' + cl.slug).css('display', 'block');
		} else {
			$('#h-' + cl.slug).css('display', 'none');
		}
	}
	// alert(jsonParams.vehicle);
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
