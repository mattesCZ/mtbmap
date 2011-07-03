<!-- Style for shading. -->
<Style name="shading">
    <Rule title="!stínování reliéfu">
      &maxscale_zoom7;
      &minscale_zoom12;
      <RasterSymbolizer>
        <CssParameter name="opacity">0.5</CssParameter>
        <CssParameter name="mode">multiply</CssParameter>
        <CssParameter name="scaling">bilinear8</CssParameter>
      </RasterSymbolizer>
    </Rule>
    <Rule title="!stínování reliéfu">
      &maxscale_zoom13;
      &minscale_zoom14;
      <RasterSymbolizer>
        <CssParameter name="opacity">0.4</CssParameter>
        <CssParameter name="mode">multiply</CssParameter>
        <CssParameter name="scaling">bilinear8</CssParameter>
      </RasterSymbolizer>
    </Rule>
    <Rule title="!stínování reliéfu">
      &maxscale_zoom15;
      &minscale_zoom18;
      <RasterSymbolizer>
        <CssParameter name="opacity">0.35</CssParameter>
        <CssParameter name="mode">multiply</CssParameter>
        <CssParameter name="scaling">bilinear8</CssParameter>
      </RasterSymbolizer>
    </Rule>
</Style>
<!-- Style for hypsometry. -->
<Style name="hypsometry">
    <Rule title="výškopis">
      &maxscale_zoom0;
      &minscale_zoom10;
      <RasterSymbolizer>
        <CssParameter name="opacity">0.6</CssParameter>
        <CssParameter name="mode">multiply</CssParameter>
        <CssParameter name="scaling">bilinear</CssParameter>
      </RasterSymbolizer>
    </Rule>
</Style>
<!-- Contour lines styles. -->
<Style name="contours5">
    <Rule title="vrstevnice po 5 metrech">
      &maxscale_zoom15;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">rgb(170,71,30)</CssParameter>
        <CssParameter name="stroke-width">0.3</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>
<Style name="contours10">
    <Rule title="vrstevnice po 10 metrech">
      &maxscale_zoom13;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">rgb(170,71,30)</CssParameter>
        <CssParameter name="stroke-width">0.3</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>
<Style name="contours20">
    <Rule title="vrstevnice po 20 metrech">
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">rgb(170,71,30)</CssParameter>
        <CssParameter name="stroke-width">0.3</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>
<Style name="contours25">
    <Rule title="vrstevnice po 25 metrech">
      &maxscale_zoom15;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">rgb(170,71,30)</CssParameter>
        <CssParameter name="stroke-width">0.6</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>
<Style name="contours50">
    <Rule title="vrstevnice po 50 metrech">
      &maxscale_zoom11;
      &minscale_zoom11;
      <LineSymbolizer>
        <CssParameter name="stroke">rgb(170,71,30)</CssParameter>
        <CssParameter name="stroke-width">0.3</CssParameter>
      </LineSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">rgb(170,71,30)</CssParameter>
        <CssParameter name="stroke-width">0.6</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>
<Style name="contours100">
    <Rule title="vrstevnice po 100 metrech">
      &maxscale_zoom11;
      &minscale_zoom14;
      <LineSymbolizer>
        <CssParameter name="stroke">rgb(170,71,30)</CssParameter>
        <CssParameter name="stroke-width">0.6</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>

<!-- Style for contour lines heights. -->
<Style name="contours-text25">
    <Rule title="!popis vrstevnic po 25 metrech">
      &maxscale_zoom15;
      &minscale_zoom18;
      <TextSymbolizer name="height" face_name="DejaVu Sans Book" size="8" fill="rgb(170,71,30)" halo_radius="1" placement="line" />
    </Rule>
</Style>

<Style name="contours-text50">
    <Rule title="!popis vrstevnic po 50 metrech">
      &maxscale_zoom13;
      &minscale_zoom14;
      <TextSymbolizer name="height" face_name="DejaVu Sans Book" size="8" fill="rgb(170,71,30)" halo_radius="1" placement="line" />
    </Rule>
</Style>
<Style name="contours-text100">
    <Rule title="!popis vrstevnic po 100 metrech">
      &maxscale_zoom11;
      &minscale_zoom14;
      <TextSymbolizer name="height" face_name="DejaVu Sans Book" size="8" fill="rgb(170,71,30)" halo_radius="1" placement="line" />
    </Rule>
</Style>

