// handling user export
function setCurrentBounds() {
    var bounds = map.getBounds();
    jQuery('#export-left').val(bounds.getSouthWest().lng.toFixed(5));
    jQuery('#export-bottom').val(bounds.getSouthWest().lat.toFixed(5));
    jQuery('#export-right').val(bounds.getNorthEast().lng.toFixed(5));
    jQuery('#export-top').val(bounds.getNorthEast().lat.toFixed(5));
    jQuery('#export-zoom-select').val(map.getZoom());
    setMapImageSize();
    userChanged = false;
}
function setMapImageSize() {
    var bounds = getBounds(),
        zoom = parseInt(jQuery('#export-zoom-select').val()),
        topLeft = map.project(bounds.getNorthWest(), zoom),
        bottomRight = map.project(bounds.getSouthEast(), zoom),
        width = bottomRight.x - topLeft.x,
        height = bottomRight.y - topLeft.y;
    if (jQuery('#export-highres').is(':checked')) {
        jQuery('#export-width').val(Math.round(width)*2);
        jQuery('#export-height').val(Math.round(height)*2);
    } else {
        jQuery('#export-width').val(Math.round(width));
        jQuery('#export-height').val(Math.round(height));
    }
}
function getBounds() {
    var exportLeft = jQuery('#export-left').val(),
        exportBottom = jQuery('#export-bottom').val(),
        exportRight = jQuery('#export-right').val(),
        exportTop = jQuery('#export-top').val();
    if (!exportLeft || !exportBottom || !exportRight || !exportTop) {
        return map.getBounds();
    } else {
        var southWest = new L.LatLng(exportBottom, exportLeft);
        var northEast = new L.LatLng(exportTop, exportRight);
        var bounds = new L.LatLngBounds(southWest, northEast);
        return bounds;
    }
}
function recalculateSize() {
    userChanged = true;
    setMapImageSize();
}
function recalculateBounds() {
    userChanged = true;
    var imgx = parseInt(jQuery('#export-width').val()),
        imgy = parseInt(jQuery('#export-height').val());
    if (imgx>0 && imgy>0) {
        var center = getBounds().getCenter(),
            exportZoom = parseInt(jQuery('#export-zoom-select').val()),
            centerPixel = map.project(center, exportZoom),
            sc = (jQuery('#export-highres').is(':checked')) ? 4 : 2,
            northWestPixel = new L.Point(centerPixel.x - imgx/sc, centerPixel.y - imgy/sc),
            southEastPixel = new L.Point(centerPixel.x + imgx/sc, centerPixel.y + imgy/sc),
            northWest = map.unproject(northWestPixel, exportZoom),
            southEast = map.unproject(southEastPixel, exportZoom);

        jQuery('#export-left').val(northWest.lng.toFixed(6));
        jQuery('#export-right').val(southEast.lng.toFixed(6));
        jQuery('#export-top').val(northWest.lat.toFixed(6));
        jQuery('#export-bottom').val(southEast.lat.toFixed(6));
    } else {
        return;
    }
}
