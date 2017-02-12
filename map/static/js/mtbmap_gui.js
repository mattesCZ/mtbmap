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
    MTB.GUI.setPanelsMaxHeight();
    // initialize main tabs menu
    var mainTabs = jQuery('#main-tabs');
    mainTabs.tabs({
        collapsible: true,
        active: false,
        activate: function(event, ui) {
            MTB.activePanel = ui.newPanel.selector.replace('#tab-', '');
            if (MTB.activePanel === 'legend') {
                MTB.GUI.updateLegend(MTB.map.getZoom());
            } else if (MTB.activePanel === 'places') {
                jQuery('#places-addr').focus().select();
            } else if (MTB.activePanel === 'export') {
                MTB.EXPORT.setCurrentBounds();
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
                    jQuery('#routes-content-gpx').html('<h4>' + MTB.LANG.fileAPIError + '</h4>');
                }
            }
        }
    });
    // tab places interaction
    MTB.GUI.submitOnEnter('places-addr', 'places-submit');
    jQuery('#places-submit').button().click(function() {
        MTB.GUI.addrSearch();
    });
    // tab routes interaction
    jQuery('#routes-accordion').accordion({
        collapsible: true,
        active: false,
        heightStyle: 'content'
    });
    // initialize weights_template radio
    var weightsTemplate = jQuery('#weights_template');
    weightsTemplate.buttonset();
    weightsTemplate.children('label').click(function(event) {
        event.preventDefault();
        weightsTemplate.children('input').prop('checked', false);
        var $input = jQuery('#' + this.htmlFor);
        $input.prop('checked', true);
        var templateId = $input.val();
        MTB.GUI.updateTemplate(templateId);
    });
    // force update template button and get params
    weightsTemplate.children('label').first().click();
    jQuery('.fit-to-line').button().click(function() {
        MTB.activeLine.fitMapView();
    });
    jQuery('.reset-line').button().click(function() {
        MTB.activeLine.reset();
    });
    jQuery('.create-profile-button').button().click(function() {
        jQuery('.profile-params').val(MTB.activeLine.routeLatLngs());
    });
    jQuery('.create-gpx-button').button().click(function() {
        jQuery('.profile-params').val(MTB.activeLine.routeLatLngs());
    });
    jQuery('.get-route-button').button();
    jQuery('.back-to-settings').button().click(function(){
        MTB.activeLine.showSettings();
    });
    jQuery('.get-template-button').button().click(function() {
        var params = jQuery('#routes-params').serializeArray();
        jQuery('.params').val(JSON.stringify(params));
    });
    if (!(window.File && window.FileReader && window.FileList && window.Blob)) {
        jQuery('#params-buttons').hide();
    }
    // tab export interaction
    jQuery('#set-bounds-button').button().click(function(event) {
        event.preventDefault();
        MTB.EXPORT.setCurrentBounds();
    });
    jQuery('#export-button').button().click(function() {
        // set range parameters for map export
        jQuery('#export-bounds').val(MTB.EXPORT.getBounds().toBBoxString());
        jQuery('#export-zoom').val(jQuery('#export-zoom-select').val());
        jQuery('#export-line').val(MTB.activeLine.routeLatLngs());
    });
    var $closeButton = jQuery('#close-main-tab-panel');
    $closeButton.button({
        icons: {
            primary: 'ui-icon-closethick'
        },
        text: false
    }).click(function() {
        $closeButton.hide();
        jQuery('a[href="#tab-' + MTB.activePanel + '"]').click();
    });
    mainTabs.show();
});
jQuery(window).resize(function() {
    MTB.GUI.setPanelsMaxHeight();
});

MTB.GUI.updateLegend = function(zoom) {
    jQuery.get('/map/legend/', {
        zoom: zoom
    }, function(data) {
        jQuery('#tab-legend').html(data);
        jQuery('#close-main-tab-panel').show();
    });
};

MTB.GUI.updateTemplate = function(templateId) {
    jQuery('#routes-accordion').accordion({animate: false});
    jQuery.get('/map/routingparams/', {'template_id': templateId }, function(data) {
        jQuery('#routes-accordion').html(data)
            .accordion('refresh').accordion({active: false})
            .show().accordion({animate: 400});
    });
};

MTB.GUI.setPanelsMaxHeight = function() {
    var maxheight = jQuery('#map').height() - (jQuery('#footer').height() + 85);
    jQuery('.main-tab-panel').css('max-height', maxheight);
    jQuery('.subtab-panel').css('max-height', maxheight - 40);
};
////////////////////////////////////////////////////////////////////////////////
// GUI functions for routes
MTB.GUI.getRoute = function(e) {
    MTB.UTILS.AJAX.setupPost(e);
    MTB.activeLine.getRoute();
};

MTB.GUI.handleGPX = function(e) {
    var files = e.target.files;
    var f = files[0],
        reader = new FileReader();
    // Closure to capture the file information.
    reader.onloadend = (function() {
        return function(e) {
            MTB.activeLine.parseGPX(e.target.result);
        };
    })(f);
    reader.readAsText(f);
};

MTB.GUI.handleTemplate = function(e) {
    var files = e.target.files;
    var f = files[0],
        reader = new FileReader();
    // Closure to capture the file information.
    reader.onloadend = (function() {
        return function(e) {
            MTB.GUI.fillRouteParams(e.target.result);
        };
    })(f);
    reader.readAsText(f);
};

MTB.GUI.fillRouteParams = function(params) {
    var jsonParams, i;
    try {
        jsonParams = jQuery.parseJSON(params);
    } catch (err) {
        alert(MTB.LANG.templateNotValid);
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
        if (jQuery.isNumeric(cl.max)) {
            jQuery('input[name=' + cl.slug + '__max]').attr('value', cl.max);
        }
        if (jQuery.isNumeric(cl.min)) {
            jQuery('input[name=' + cl.slug + '__min]').attr('value', cl.min);
        }
        if (cl.features) {
            var fts = cl.features;
            for (var j=0; j<fts.length; j++) {
                /* jshint loopfunc:true */
                jQuery('select[name="' + cl.slug + '__'+ fts[j].slug +'"] option').each(function () {
                    var $this = jQuery(this);
                    if ($this.val() === fts[j].value) {
                        $this.prop('selected', true);
                    } else {
                        $this.prop('selected', false);
                    }
                });
                if (fts[j].visible) {
                    jQuery('select[name="' + cl.slug + '__'+ fts[j].slug +'"]')
                        .parent().parent().css('display', 'table-row');
                } else {
                    jQuery('select[name="' + cl.slug + '__'+ fts[j].slug +'"]')
                        .parent().parent().css('display', 'none');
                }
            }
        }
        if (cl.visible) {
            jQuery('#h-' + cl.slug).css('display', 'block');
        } else {
            jQuery('#h-' + cl.slug).css('display', 'none');
        }
    }
};

MTB.UTILS.osmLink= function(osmId, osmType) {
    return '<a href="http://www.openstreetmap.org/browse/' + osmType + '/' +
        osmId + '" target="_blank">' + osmId + '</a>';
};

MTB.GUI.lPopup = function(position, content, hideTip) {
    var popup = L.popup().setLatLng(position).setContent(content).openOn(MTB.map);
    if (hideTip) {
        L.DomUtil.addClass(popup._tipContainer, 'hidden');
    }
};
