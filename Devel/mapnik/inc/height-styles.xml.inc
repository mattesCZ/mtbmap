<!-- Style for shading. -->
<Style name="shading">
    <Rule>
      &maxscale_zoom7;
      &minscale_zoom12;
      <RasterSymbolizer>
        <CssParameter name="opacity">0.5</CssParameter>
        <CssParameter name="mode">multiply</CssParameter>
        <CssParameter name="scaling">bilinear8</CssParameter>
      </RasterSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom14;
      <RasterSymbolizer>
        <CssParameter name="opacity">0.4</CssParameter>
        <CssParameter name="mode">multiply</CssParameter>
        <CssParameter name="scaling">bilinear8</CssParameter>
      </RasterSymbolizer>
    </Rule>
    <Rule>
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
    <Rule>
      &maxscale_zoom7;
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
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">rgb(170,71,30)</CssParameter>
        <CssParameter name="stroke-width">0.3</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>
<Style name="contours10">
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">rgb(170,71,30)</CssParameter>
        <CssParameter name="stroke-width">0.3</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>
<Style name="contours20">
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer>
        <CssParameter name="stroke">rgb(170,71,30)</CssParameter>
        <CssParameter name="stroke-width">0.3</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>
<Style name="contours25">
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom18;
      <LineSymbolizer>
        <CssParameter name="stroke">rgb(170,71,30)</CssParameter>
        <CssParameter name="stroke-width">0.6</CssParameter>
      </LineSymbolizer>
    </Rule>
</Style>
<Style name="contours50">
    <Rule>
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
    <Rule>
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
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom18;
      <TextSymbolizer name="height" face_name="DejaVu Sans Book" size="8" fill="rgb(170,71,30)" halo_radius="1" placement="line" />
    </Rule>
</Style>

<Style name="contours-text50">
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom14;
      <TextSymbolizer name="height" face_name="DejaVu Sans Book" size="8" fill="rgb(170,71,30)" halo_radius="1" placement="line" />
    </Rule>
</Style>
<Style name="contours-text100">
    <Rule>
      &maxscale_zoom11;
      &minscale_zoom14;
      <TextSymbolizer name="height" face_name="DejaVu Sans Book" size="8" fill="rgb(170,71,30)" halo_radius="1" placement="line" />
    </Rule>
</Style>

