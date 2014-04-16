// lines for routing and gpx parsing
MTB.lines.manual = new MTB.SimpleLine([], {
    color: '#FF6600',
    opacity: 0.9
});
MTB.lines.gpx = new MTB.GpxLine([], {
    color: '#FF6600',
    clickable: false,
    opacity: 0.9
});
MTB.lines.routing = new MTB.RoutingLine([], {
    color: '#FF6600',
    opacity: 0.4
});
MTB.activeLine = MTB.lines[MTB.activeRoutesPanel];

jQuery(document).ready(function() {
    // set focus on map
    jQuery('#map').focus();
    // set height of main panel
    setPanelsMaxHeight();
    // initialize main tabs menu
    jQuery('#main-tabs').tabs({
        collapsible: true,
        active: false,
        activate: function(event, ui) {
            MTB.activePanel = ui.newPanel.selector.replace('#tab-', '');
            if (MTB.activePanel === 'legend') {
                updateLegend(map.getZoom());
            } else if (MTB.activePanel === 'places') {
                jQuery('#places-addr').focus().select();
            } else if (MTB.activePanel === 'export') {
                setCurrentBounds();
            }
            if (MTB.activePanel.length > 0) {
                if (MTB.activePanel !== 'legend') {
                    jQuery('#close-main-tab-panel').show();
                }
            } else {
                jQuery('#close-main-tab-panel').hide();
            }
        }
    });
    // initialize routes sub-tabs menu
    jQuery('#routes-tabs').tabs({
        active: 0,
        heightStyle: 'content',
        activate: function(event, ui) {
            MTB.activeRoutesPanel = ui.newPanel.selector.replace('#routes-content-', '');
            // check file API for GPX functions
            MTB.activeLine.hide();
            MTB.activeLine = MTB.lines[MTB.activeRoutesPanel];
            MTB.activeLine.show();
            MTB.activeLine.updateDistance();
            if (MTB.activeRoutesPanel === 'gpx') {
                if (!(window.File && window.FileReader && window.FileList && window.Blob)) {
                    jQuery('#routes-content-gpx').html('<h4>' + LANG.fileAPIError + '</h4>');
                }
            }
        }
    });
    // tab places interaction
    submitOnEnter('places-addr', 'places-submit');
    jQuery('#places-submit').button().click(function() {
        addrSearch();
    });
    // tab routes interaction
    jQuery('#routes-accordion').accordion({
        collapsible: true,
        active: false,
        heightStyle: 'content'
    });
    // initialize weights_template radio
    jQuery('#weights_template').buttonset();
    jQuery('#weights_template > label').click(function(event) {
        event.preventDefault();
        jQuery('#weights_template > input').prop('checked', false);
        jQuery('#' + this.htmlFor).prop('checked', true);
        var templateId = jQuery('#' + this.htmlFor).val();
        updateTemplate(templateId);
    });
    // force update template button and get params
    jQuery('#weights_template > label').first().click();
    jQuery('.fit-to-line').button().click(function(event) {
        MTB.activeLine.fitMapView();
    });
    jQuery('.reset-line').button().click(function(event) {
        MTB.activeLine.reset();
    });
    jQuery('.create-profile-button').button().click(function(event) {
        jQuery('.profile-params').val(MTB.activeLine.routeLatLngs());
    });
    jQuery('.create-gpx-button').button().click(function(event) {
        jQuery('.profile-params').val(MTB.activeLine.routeLatLngs());
    });
    jQuery('.get-route-button').button();
    jQuery('.back-to-settings').button().click(function(event){
        MTB.activeLine.showSettings();
    });
    jQuery('.get-template-button').button().click(function(event) {
        var params = jQuery('#routes-params').serializeArray();
        jQuery('.params').val(JSON.stringify(params));
    });
    jQuery('#evaluation-dialog-form').dialog({
        autoOpen: false,
        modal: false,
        width: 'auto',
        buttons: {
            'Odeslat': function(event) {
                var form = jQuery('#send-evaluation-form');
                var thisDialog = jQuery(this);
                if (!form.valid) {
                    return;
                } else {
                    setupPost(event);
                    var latlngs = MTB.activeLine.getLatLngs();
                    var params = jQuery('#routes-params').serializeArray();
                    jQuery('#id_params').val(JSON.stringify(params));
                    jQuery('#id_linestring').val('[' + latlngs + ']');
                    form = jQuery('#send-evaluation-form').serializeArray();
                    jQuery.post('/map/evaluation/', {
                        'form': JSON.stringify(form)
                    }, function(data) {
                        if (data.valid) {
                            jQuery('#evaluation-dialog-form').html(data.html);
                            thisDialog.dialog( 'close' );
                            var ThanksDialog = jQuery(data.html);
                            ThanksDialog.dialog({
                                title: LANG.thanks,
                                show: 'clip',
                                hide: 'clip',
                                buttons: {
                                    'Close': function() {
                                        jQuery(this).dialog('close');
                                    }
                                }
                            });
                        } else {
                            jQuery('#evaluation-dialog-form .error-message').html(LANG.correctEntries);
                        }
                    });
                }
            },
            'Storno': function() {
                jQuery( this ).dialog( 'close' );
            }
        }
    });
    jQuery('#send-evaluation-form').validate({
        rules: {
            'comment': 'required',
            'email': {
                required: true,
                email: true
            }
        }
    });
    jQuery('.open-evaluation-dialog').button().click(function() {
        jQuery('#evaluation-dialog-form').dialog('open');
    });
    // jQuery('.send-evaluation-button').button();
    if (!(window.File && window.FileReader && window.FileList && window.Blob)) {
        jQuery('#params-buttons').hide();
    }
    // tab export interaction
    jQuery('#set-bounds-button').button().click(function(event) {
        event.preventDefault();
        setCurrentBounds();
    });
    jQuery('#export-button').button().click(function(event) {
        // set range parameters for map export
        jQuery('#export-bounds').val(getBounds().toBBoxString());
        jQuery('#export-zoom').val(jQuery('#export-zoom-select').val());
        jQuery('#export-line').val(MTB.activeLine.routeLatLngs());
    });
    var $closeButton = jQuery('#close-main-tab-panel');
    $closeButton.button({
        icons: {
            primary: 'ui-icon-closethick'
        },
        text: false
    }).click(function(event) {
        $closeButton.hide();
        jQuery('a[href="#tab-' + MTB.activePanel + '"]').click();
    });
    jQuery('#main-tabs').show();
});
jQuery(window).resize(function() {
    setPanelsMaxHeight();
});

function updateLegend(zoom) {
    jQuery.get('/map/legend/', {
        zoom: zoom
    }, function(data) {
        jQuery('#tab-legend').html(data);
        jQuery('#close-main-tab-panel').show();
    });
}

function updateTemplate(templateId) {
    jQuery('#routes-accordion').accordion({animate: false});
    jQuery.get('/map/routingparams/', {'template_id': templateId }, function(data) {
        jQuery('#routes-accordion').html(data)
            .accordion('refresh').accordion({active: false})
            .show().accordion({animate: 400});
    });
}
function setPanelsMaxHeight() {
    var maxheight = jQuery('#map').height() - (jQuery('#footer').height() + 85);
    jQuery('.main-tab-panel').css('max-height', maxheight);
    jQuery('.subtab-panel').css('max-height', maxheight - 40);
}
////////////////////////////////////////////////////////////////////////////////
// GUI functions for routes
function getRoute(e) {
    setupPost(e);
    MTB.activeLine.getRoute();
}
function sendEvaluation(e) {
    var form = jQuery('#send-evaluation-form');
    if (form.valid) {
        setupPost(e);
        MTB.activeLine.sendEvaluation();
    }
}
function handleGPX(e) {
    var files = e.target.files;
    for (var i = 0, f; f = files[i]; i++) {
        var reader = new FileReader();
        // Closure to capture the file information.
        reader.onload = (function(theFile) {
            return function(e) {
                MTB.activeLine.parseGPX(e.target.result);
            };
        })(f);
        reader.readAsText(f);
    }
}
function handleTemplate(e) {
    var files = e.target.files;
    for (var i = 0, f; f = files[i]; i++) {
        var reader = new FileReader();
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
    var jsonParams, i;
    try {
        jsonParams = jQuery.parseJSON(params);
    } catch (err) {
        alert(LANG.templateNotValid);
        return;
    }
    jQuery('select[name=global__vehicle] > option').attr('selected', false);
    jQuery('select[name=global__vehicle] > option[value=' + jsonParams.vehicle + ']').attr('selected', true);
    jQuery('input[name=global__oneway]').attr('checked', jsonParams.oneway);
    for (i = 0; i < jsonParams.preferred.length; i++) {
        var pref = jsonParams.preferred[i];
        jQuery('input[name=preferred__'+ pref.slug +']')
            .attr('checked', pref.value);
        if (pref.use){
            jQuery('input[name=preferred__'+ pref.slug +']').parent().parent().css('display', 'table-row');
        } else {
            jQuery('input[name=preferred__'+ pref.slug +']').parent().parent().css('display', 'none');
        }
    }
    for (i = 0; i < jsonParams.classes.length; i++) {
        var cl = jsonParams.classes[i];
        if (cl.max != null) {
            jQuery('input[name=' + cl.slug + '__max]').attr('value', cl.max);
        }
        if (cl.min != null) {
            jQuery('input[name=' + cl.slug + '__min]').attr('value', cl.min);
        };
        if (cl.features) {
            var fts = cl.features;
            for (var j=0; j<fts.length; j++) {
                jQuery('select[name="' + cl.slug + '__'+ fts[j].slug +'"] option').each(function () {
                    var $this = jQuery(this);
                    if ($this.val() === fts[j].value) {
                        $this.prop('selected', true);
                    } else {
                        $this.prop('selected', false);
                    }
                });
                if (fts[j].visible) {
                    jQuery('select[name="' + cl.slug + '__'+ fts[j].slug +'"]').parent().parent().css('display', 'table-row');
                } else {
                    jQuery('select[name="' + cl.slug + '__'+ fts[j].slug +'"]').parent().parent().css('display', 'none');
                }
            }
        }
        if (cl.visible) {
            jQuery('#h-' + cl.slug).css('display', 'block');
        } else {
            jQuery('#h-' + cl.slug).css('display', 'none');
        }
    }
}

function osmLink(osmId, osmType) {
    return '<a href="http://www.openstreetmap.org/browse/' + osmType + '/' + osmId + '" target="_blank">' + osmId + '</a>';
}
// shortcut for leaflet popup
function lPopup(position, content, hideTip) {
    var popup = L.popup().setLatLng(position).setContent(content).openOn(map);
    if (hideTip) {
        L.DomUtil.addClass(popup._tipContainer, 'hidden');
    }
}
