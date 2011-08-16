
// starting center coordinates and zoom for Brno
/*    var lat=49.22
    var lon=16.58
    var zoom=12
*/
// for Czech Republic
    var lat=49.82
    var lon=15.0
    var zoom=8
    var map, vectors, controls, measureControls;

    function getTileURL(bounds)
    {
      var res = this.map.getResolution();
      var x = Math.round((bounds.left - this.maxExtent.left) / (res * this.tileSize.w));
      var y = Math.round((this.maxExtent.top - bounds.top) / (res * this.tileSize.h));
      var z = this.map.getZoom();
      return this.url + z + "/" + x + "/" + y + "." + this.type;
    }


    function init(){
        graticule = new OpenLayers.Control.Graticule({layerName: "Zeměpisná síť"});
        map = new OpenLayers.Map("map",
        {
        controls:[new OpenLayers.Control.Navigation(),
                  graticule,
                  new OpenLayers.Control.PanZoomBar(),
                  new OpenLayers.Control.Permalink(),
                  new OpenLayers.Control.MousePosition(),
                  new OpenLayers.Control.KeyboardDefaults(),
                  new OpenLayers.Control.ScaleLine(),
                  new OpenLayers.Control.LayerSwitcher({'div': OpenLayers.Util.getElement('layerswitcher')})],
        maxExtent: new OpenLayers.Bounds(-20037508.34,-20037508.34,20037508.34,20037508.34),
        maxResolution: 156543.0399,
        numZoomLevels: 19,
        units: 'm',
        projection: new OpenLayers.Projection("EPSG:900913"),
        displayProjection: new OpenLayers.Projection("EPSG:4326")
        });

// basic MTB layers
        map.addLayer(new OpenLayers.Layer.OSM("MTB Map", "mtbmap_tiles/", {type: 'png', numZoomLevels: 19, getURL: getTileURL}));
//        map.addLayer(new OpenLayers.Layer.OSM("MTB Map Complete", "osm_tiles/", {type: 'png', numZoomLevels: 19, getURL: getTileURL}));
//        map.addLayer(new OpenLayers.Layer.OSM("Shading + contours", "shade_tiles/", {type: 'png', numZoomLevels: 19, getURL: getTileURL}));

// overlays
/*        mtbonly = new OpenLayers.Layer.OSM("Mtb tracks", 
"mtbonly_tiles/", {type: 'png', numZoomLevels: 19, getURL: getTileURL});
        mtbonly.setIsBaseLayer(false);
        mtbonly.setVisibility(false);
        map.addLayer(mtbonly);
        textonly = new OpenLayers.Layer.OSM("text", "text_tiles/", {type: 'png', numZoomLevels: 19, getURL: getTileURL});
        textonly.setIsBaseLayer(false);
        textonly.setVisibility(false);
        map.addLayer(textonly);
*/
// standard OpenStreetMap layers
        map.addLayer(new OpenLayers.Layer.OSM.Mapnik("OpenStreetMap"));
        map.addLayer(new OpenLayers.Layer.OSM.CycleMap("OpenCycleMap"));

        map.getLayersByName("Zeměpisná síť")[0].setVisibility(false);

// draw altitude style
        var sketchSymbolizers = {
            "Point": {
                pointRadius: 4,
                fillColor: "white",
                fillOpacity: 0.3,
                strokeWidth: 1,
                strokeOpacity: 1,
                strokeColor: "#333333"
            },
            "Line": {
                strokeWidth: 3,
                strokeOpacity: 1,
                strokeColor: "#ff0000",
                strokeDashstyle: "dash"
            }
        };
        var style = new OpenLayers.Style();
        style.addRules([
            new OpenLayers.Rule({symbolizer: sketchSymbolizers})
        ]);
        var styleMap = new OpenLayers.StyleMap({"default": style});

// draw altitude control based on OpenLayers Measure feature
        measureControls = {
            line: new OpenLayers.Control.Measure(
                OpenLayers.Handler.Path, {
                    persist: true,
                    handlerOptions: {
                        layerOptions: {styleMap: styleMap}
                    }
                }
            )
        };

        var control = measureControls['line'];
        control.events.on({
            "measure": handleMeasurements,
            "measurepartial": handleMeasurements
        });
        map.addControl(control);
        document.getElementById('OpenLayers.Control.PanZoomBar_4').style.left = "324px";
//        document.getElementById('OpenLayers.Control.Permalink_5').style.right = "324px";
//        document.getElementById('OpenLayers.Control.MousePosition_6').style.right = "324px";
        document.getElementById('OpenLayers.Control.ScaleLine_8').style.left = "335px";

        document.getElementById('noneToggle').checked = true;
        if (!map.getCenter())
        {
          var lonLat = new OpenLayers.LonLat(lon, lat).transform(new OpenLayers.Projection("EPSG:4326"), map.getProjectionObject());
          map.setCenter(lonLat, zoom);
        }
    }

    var geometry;        

    function handleMeasurements(event) {
        geometry = event.geometry;
    }

    function toggleControl(element) {
        for(key in measureControls) {
            var control = measureControls[key];
            if(element.value == key && element.checked) {
                document.getElementById('profileButton').style.display = 'inline'
                control.activate();
            } else {
                document.getElementById('profileButton').style.display = 'none'
                control.deactivate();
            }
        }
    }
// set values for altitude computing
    function fillHiddenField(){
        if (document.getElementById('geometry').value != geometry) {
            geometry=geometry.transform(new OpenLayers.Projection('EPSG:900913'), 
new OpenLayers.Projection('EPSG:4326'));
            document.getElementById('geometry').value=geometry;
        }
    }
// set values for image export    
    function getCenter(){
        center = map.getCenter().transform(new OpenLayers.Projection('EPSG:900913'), new OpenLayers.Projection('EPSG:4326'));
        mapZoom = map.getZoom();
        size = map.getSize();
        scale = map.getScale()
        extent = map.getExtent().transform(new OpenLayers.Projection('EPSG:900913'), new OpenLayers.Projection('EPSG:4326'));
        var properties = new Array(extent.bottom, extent.left, extent.top, extent.right, size.w, size.h);
        document.getElementById('center').value=properties;
    }
    
    function showLegend(){
        legend = 'legenda v zoomu ' + map.getZoom().toString() + '<br><input type="button" onclick="showLegend()" value="Show Legend" />';
        document.getElementById('legend').innerHTML = legend;
    }
