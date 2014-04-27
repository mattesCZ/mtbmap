// handling user export
MTB.EXPORT.setCurrentBounds = function() {
    var bounds = MTB.map.getBounds();
    jQuery('#export-left').val(bounds.getSouthWest().lng.toFixed(5));
    jQuery('#export-bottom').val(bounds.getSouthWest().lat.toFixed(5));
    jQuery('#export-right').val(bounds.getNorthEast().lng.toFixed(5));
    jQuery('#export-top').val(bounds.getNorthEast().lat.toFixed(5));
    jQuery('#export-zoom-select').val(MTB.map.getZoom());
    MTB.EXPORT.setMapImageSize();
    MTB.userChanged = false;
};

MTB.EXPORT.setMapImageSize = function() {
    var bounds = MTB.EXPORT.getBounds(),
        zoom = parseInt(jQuery('#export-zoom-select').val()),
        topLeft = MTB.map.project(bounds.getNorthWest(), zoom),
        bottomRight = MTB.map.project(bounds.getSouthEast(), zoom),
        width = bottomRight.x - topLeft.x,
        height = bottomRight.y - topLeft.y;
    if (jQuery('#export-highres').is(':checked')) {
        jQuery('#export-width').val(Math.round(width)*2);
        jQuery('#export-height').val(Math.round(height)*2);
    } else {
        jQuery('#export-width').val(Math.round(width));
        jQuery('#export-height').val(Math.round(height));
    }
};

MTB.EXPORT.getBounds = function() {
    var exportLeft = jQuery('#export-left').val(),
        exportBottom = jQuery('#export-bottom').val(),
        exportRight = jQuery('#export-right').val(),
        exportTop = jQuery('#export-top').val();
    if (!exportLeft || !exportBottom || !exportRight || !exportTop) {
        return MTB.map.getBounds();
    } else {
        var southWest = L.latLng(exportBottom, exportLeft);
        var northEast = L.latLng(exportTop, exportRight);
        return L.latLngBounds(southWest, northEast);
    }
};

MTB.EXPORT.recalculateSize = function() {
    MTB.userChanged = true;
    MTB.EXPORT.setMapImageSize();
};

MTB.EXPORT.recalculateBounds = function() {
    MTB.userChanged = true;
    var imgx = parseInt(jQuery('#export-width').val()),
        imgy = parseInt(jQuery('#export-height').val());
    if (imgx>0 && imgy>0) {
        var center = MTB.EXPORT.getBounds().getCenter(),
            exportZoom = parseInt(jQuery('#export-zoom-select').val()),
            centerPixel = MTB.map.project(center, exportZoom),
            sc = (jQuery('#export-highres').is(':checked')) ? 4 : 2,
            northWestPixel = new L.Point(centerPixel.x - imgx/sc, centerPixel.y - imgy/sc),
            southEastPixel = new L.Point(centerPixel.x + imgx/sc, centerPixel.y + imgy/sc),
            northWest = MTB.map.unproject(northWestPixel, exportZoom),
            southEast = MTB.map.unproject(southEastPixel, exportZoom);

        jQuery('#export-left').val(northWest.lng.toFixed(6));
        jQuery('#export-right').val(southEast.lng.toFixed(6));
        jQuery('#export-top').val(northWest.lat.toFixed(6));
        jQuery('#export-bottom').val(southEast.lat.toFixed(6));
    }
};
