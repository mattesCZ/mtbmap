// handling user export
function setCurrentBounds() {
    bounds = map.getBounds();
    $('#export-left').val(bounds.getSouthWest().lng.toFixed(5));
    $('#export-bottom').val(bounds.getSouthWest().lat.toFixed(5));
    $('#export-right').val(bounds.getNorthEast().lng.toFixed(5));
    $('#export-top').val(bounds.getNorthEast().lat.toFixed(5));
    $('#export-zoom-select').val(map.getZoom());
    setMapImageSize();
    userChanged = false;
}
function setMapImageSize() {
    bounds = getBounds();
    zoom = parseInt($('#export-zoom-select').val());
    topLeft = map.project(bounds.getNorthWest(), zoom);
    bottomRight = map.project(bounds.getSouthEast(), zoom);
    width = bottomRight.x - topLeft.x;
    height = bottomRight.y - topLeft.y;
    if ($('#export-highres').is(':checked')) {
        $('#export-width').val(Math.round(width)*2);
        $('#export-height').val(Math.round(height)*2);
    } else {
        $('#export-width').val(Math.round(width));
        $('#export-height').val(Math.round(height));
    }
}
function getBounds() {
    exportLeft = $('#export-left').val();
    exportBottom = $('#export-bottom').val();
    exportRight = $('#export-right').val();
    exportTop = $('#export-top').val();
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
    imgx = parseInt($('#export-width').val());
    imgy = parseInt($('#export-height').val());
    if (imgx>0 && imgy>0) {
        center = getBounds().getCenter();
        exportZoom = parseInt($('#export-zoom-select').val());
        centerPixel = map.project(center, exportZoom);
        sc = ($('#export-highres').is(':checked')) ? 4 : 2;
        northWestPixel = new L.Point(centerPixel.x - imgx/sc, centerPixel.y - imgy/sc);
        southEastPixel = new L.Point(centerPixel.x + imgx/sc, centerPixel.y + imgy/sc);
        northWest = map.unproject(northWestPixel, exportZoom);
        southEast = map.unproject(southEastPixel, exportZoom);

        $('#export-left').val(northWest.lng.toFixed(6));
        $('#export-right').val(southEast.lng.toFixed(6));
        $('#export-top').val(northWest.lat.toFixed(6));
        $('#export-bottom').val(southEast.lat.toFixed(6));
    } else return;
}
