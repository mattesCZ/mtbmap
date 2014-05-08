var MTB = {};

MTB.UTILS = {};
MTB.UTILS.LAYERS = {};
MTB.EVENTS = {};
MTB.EXPORT = {};
MTB.GUI = {};
MTB.ROUTES = {};

MTB.map = null;
MTB.baseLayers = {};
MTB.overlayLayers = {};
MTB.activePanel = '';
MTB.routePanels = ['routing', 'manual', 'gpx'];
MTB.activeRoutesPanel = MTB.routePanels[0];
MTB.lines = {};
MTB.initLatlng = L.latLng(49.5, 16.0);
MTB.initZoom = 6;
