<!-- Styles for MTB tracks -->
<Style name="mtb_basic">
  <Rule title="MTB stezka">
    &maxscale_zoom6;
    &minscale_zoom8;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_mtb_track;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="MTB stezka">
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_mtb_track;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">1.5</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="MTB stezka">
    &maxscale_zoom10;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_mtb_track;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="MTB stezka">
    &maxscale_zoom12;
    &minscale_zoom12;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_mtb_track;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="MTB stezka obtížnosti 0">
    &maxscale_zoom13;
    &minscale_zoom14;
    <Filter>([mtb:scale]='0' or [mtb:scale]='0+' or [mtb:scale]='0-')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_mtb_track;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="MTB stezka obtížnosti 1">
    &maxscale_zoom13;
    &minscale_zoom14;
    <Filter>([mtb:scale]='1' or [mtb:scale]='1+' or [mtb:scale]='1-')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_mtb_track;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="MTB stezka obtížnosti 2">
    &maxscale_zoom13;
    &minscale_zoom14;
    <Filter>([mtb:scale]='2' or [mtb:scale]='2+' or [mtb:scale]='2-')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_mtb_track;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">3,3</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="MTB stezka obtížnosti 3">
    &maxscale_zoom13;
    &minscale_zoom14;
    <Filter>([mtb:scale]='3' or [mtb:scale]='3+' or [mtb:scale]='3-')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_mtb_track;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">6,2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_mtb_track;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">6</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">0,2,2,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="MTB stezka obtížnosti 4 a 5">
    &maxscale_zoom13;
    &minscale_zoom14;
    <Filter>([mtb:scale]='4' or [mtb:scale]='4+' or [mtb:scale]='4-' or [mtb:scale]='5' or [mtb:scale]='5+' or [mtb:scale]='5-')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_mtb_track;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">5</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">0,2,1,2</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="MTB stezka bez značení obtížnosti">
    &maxscale_zoom13;
    &minscale_zoom14;
    <ElseFilter />
    <LineSymbolizer>
      <CssParameter name="stroke">&color_mtb_track;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">4,4,8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="MTB stezka obtížnosti 0">
    &maxscale_zoom15;
    <Filter>([mtb:scale]='0' or [mtb:scale]='0+' or [mtb:scale]='0-')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_mtb_track;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="MTB stezka obtížnosti 1">
    &maxscale_zoom15;
    <Filter>([mtb:scale]='1' or [mtb:scale]='1+' or [mtb:scale]='1-')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_mtb_track;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="MTB stezka obtížnosti 2">
    &maxscale_zoom15;
    <Filter>([mtb:scale]='2' or [mtb:scale]='2+' or [mtb:scale]='2-')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_mtb_track;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">4,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="MTB stezka obtížnosti 3">
    &maxscale_zoom15;
    <Filter>([mtb:scale]='3' or [mtb:scale]='3+' or [mtb:scale]='3-')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_mtb_track;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">6,2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_mtb_track;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">6</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">0,2,2,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="MTB stezka obtížnosti 4 a 5">
    &maxscale_zoom15;
    <Filter>([mtb:scale]='4' or [mtb:scale]='4+' or [mtb:scale]='4-' or [mtb:scale]='5' or [mtb:scale]='5+' or [mtb:scale]='5-')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_mtb_track;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">6</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">0,2,2,2</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="MTB stezka bez značení obtížnosti">
    &maxscale_zoom15;
    <ElseFilter />
    <LineSymbolizer>
      <CssParameter name="stroke">&color_mtb_track;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">4,4,8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
</Style>
<!--<Style name="mtb_shield0">
  <Rule title="MTB obtížnost 0">
    &maxscale_zoom13;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line" file= "../symbols/mtb_sh_scale0.png" type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
</Style>
<Style name="mtb_shield1">
  <Rule title="MTB obtížnost 1">
    &maxscale_zoom13;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line" file= "../symbols/mtb_sh_scale1.png" type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
</Style>
<Style name="mtb_shield2">
  <Rule title="MTB obtížnost 2">
    &maxscale_zoom13;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line" file= "../symbols/mtb_sh_scale2.png" type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
</Style>
<Style name="mtb_shield3">
  <Rule title="MTB obtížnost 3">
    &maxscale_zoom13;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line" file= "../symbols/mtb_sh_scale3.png" type="png" width="13" height="12" min_distance="10" spacing="100"/>
  </Rule>
</Style>
<Style name="mtb_shield4">
  <Rule title="MTB obtížnost 4">
    &maxscale_zoom13;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line" file= "../symbols/mtb_sh_scale4.png" type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
</Style>
<Style name="mtb_shield5">
  <Rule title="MTB obtížnost 5">
    &maxscale_zoom13;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line" file= "../symbols/mtb_sh_scale5.png" type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
</Style>-->
<Style name="mtb_incline">
  <Rule title="příkré stoupání">
    &maxscale_zoom13;
    &minscale_zoom18;
    <Filter>(([mtb:scale:uphill]='3' or [mtb:scale:uphill]='4' or [mtb:scale:uphill]='5' or [mtb:scale]!='')and([incline]='up'))</Filter>
    <LinePatternSymbolizer width="20" height="12" type="png" file="../symbols/mtb_up.png"/>
  </Rule>
  <Rule title="prudké klesání">
    &maxscale_zoom13;
    &minscale_zoom18;
    <Filter>(([mtb:scale:uphill]='3' or [mtb:scale:uphill]='4' or [mtb:scale:uphill]='5' or [mtb:scale]!='')and([incline]='down'))</Filter>
    <LinePatternSymbolizer width="20" height="12" type="png" file="../symbols/mtb_down.png"/>
  </Rule>
</Style>

