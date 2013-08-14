<!-- Styles for cycling paths-->
<Style name="cycleway">
  <Rule title="cyklostezka">
    &maxscale_zoom8;
    &minscale_zoom8;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_cycleway;</CssParameter>
      <CssParameter name="stroke-opacity">0.6</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="cyklostezka">
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_cycleway;</CssParameter>
      <CssParameter name="stroke-opacity">0.6</CssParameter>
      <CssParameter name="stroke-width">1.5</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="cyklostezka">
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_cycleway;</CssParameter>
      <CssParameter name="stroke-opacity">0.6</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="cyklostezka">
    &maxscale_zoom11;
    &minscale_zoom11;
    <Filter>([highway]='cycleway')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_cycleway;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="cyklotrasa">
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_cycleway;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1, 4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="cyklostezka">
    &maxscale_zoom12;
    &minscale_zoom13;
    <Filter>([highway]='cycleway')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_cycleway;</CssParameter>
      <CssParameter name="stroke-opacity">0.8</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="cyklotrasa">
    &maxscale_zoom12;
    &minscale_zoom13;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_cycleway;</CssParameter>
      <CssParameter name="stroke-opacity">0.8</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1, 6</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="cyklostezka">
    &maxscale_zoom14;
    &minscale_zoom14;
    <Filter>([highway]='cycleway')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_cycleway;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="cyklotrasa">
    &maxscale_zoom14;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_cycleway;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1, 6</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="cyklostezka">
    &maxscale_zoom15;
    <Filter>([highway]='cycleway')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_cycleway;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="cyklotrasa">
    &maxscale_zoom15;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_cycleway;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1, 8</CssParameter>
    </LineSymbolizer>
  </Rule>
</Style>
<Style name="cycleway-text">
  <Rule>
    &maxscale_zoom12;
    &minscale_zoom18;
    <Filter>([ncn]='yes' or [network]='ncn')</Filter>
    <TextSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="rgb(240,100,100)" placement="line" halo_radius="1" halo_fill="rgb(0,0,0)" spacing="275" min_distance="28"></TextSymbolizer>
  </Rule>
  <Rule>
    &maxscale_zoom14;
    &minscale_zoom18;
    <Filter>([rcn]='yes' or [network]='rcn' or [lcn]='yes' or [network]='lcn')</Filter>
    <TextSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="rgb(180,180,240)" placement="line" halo_radius="1" halo_fill="rgb(0,0,0)" spacing="275" min_distance="28"></TextSymbolizer>
  </Rule>
</Style>

<Style name="nobicycle">
  <Rule title="zákaz vjezdu cyklistů">
    &maxscale_zoom13;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line" file= "../symbols/noBicycle.png" type="png" width="8" height="8" min_distance="10" spacing="20"/>
  </Rule>
</Style>
