<!-- Style for hiking tracks with offset position 0 -->
<Style name="osmc-track0">
  <Rule title="trasa: red:white:red_bar">
    <Filter>([osmcsymbol0] = 'red:white:red_bar')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bar">
    <Filter>([osmcsymbol0] = 'red:white:red_bar')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'red:white:red_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'red:white:red_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'red:white:red_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'red:white:red_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'red:white:red_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'red:white:red_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_dot">
    <Filter>([osmcsymbol0] = 'red:white:red_dot')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_dot">
    <Filter>([osmcsymbol0] = 'red:white:red_dot')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'red:white:red_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'red:white:red_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'red:white:red_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'red:white:red_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'red:white:red_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'red:white:red_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_backslash">
    <Filter>([osmcsymbol0] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_backslash">
    <Filter>([osmcsymbol0] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bowl">
    <Filter>([osmcsymbol0] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bowl">
    <Filter>([osmcsymbol0] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_L">
    <Filter>([osmcsymbol0] = 'red:white:red_L')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_L">
    <Filter>([osmcsymbol0] = 'red:white:red_L')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'red:white:red_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'red:white:red_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'red:white:red_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'red:white:red_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'red:white:red_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'red:white:red_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_turned_T">
    <Filter>([osmcsymbol0] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_turned_T">
    <Filter>([osmcsymbol0] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_triangle">
    <Filter>([osmcsymbol0] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_triangle">
    <Filter>([osmcsymbol0] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_corner">
    <Filter>([osmcsymbol0] = 'red:white:red_corner')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_corner">
    <Filter>([osmcsymbol0] = 'red:white:red_corner')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'red:white:red_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'red:white:red_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'red:white:red_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'red:white:red_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'red:white:red_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'red:white:red_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bar">
    <Filter>([osmcsymbol0] = 'blue:white:blue_bar')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bar">
    <Filter>([osmcsymbol0] = 'blue:white:blue_bar')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'blue:white:blue_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'blue:white:blue_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'blue:white:blue_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'blue:white:blue_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'blue:white:blue_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'blue:white:blue_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_dot">
    <Filter>([osmcsymbol0] = 'blue:white:blue_dot')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_dot">
    <Filter>([osmcsymbol0] = 'blue:white:blue_dot')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'blue:white:blue_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'blue:white:blue_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'blue:white:blue_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'blue:white:blue_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'blue:white:blue_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'blue:white:blue_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_backslash">
    <Filter>([osmcsymbol0] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_backslash">
    <Filter>([osmcsymbol0] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bowl">
    <Filter>([osmcsymbol0] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bowl">
    <Filter>([osmcsymbol0] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_L">
    <Filter>([osmcsymbol0] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_L">
    <Filter>([osmcsymbol0] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_turned_T">
    <Filter>([osmcsymbol0] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_turned_T">
    <Filter>([osmcsymbol0] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_triangle">
    <Filter>([osmcsymbol0] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_triangle">
    <Filter>([osmcsymbol0] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_corner">
    <Filter>([osmcsymbol0] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_corner">
    <Filter>([osmcsymbol0] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bar">
    <Filter>([osmcsymbol0] = 'green:white:green_bar')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bar">
    <Filter>([osmcsymbol0] = 'green:white:green_bar')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'green:white:green_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'green:white:green_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'green:white:green_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'green:white:green_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'green:white:green_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'green:white:green_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_dot">
    <Filter>([osmcsymbol0] = 'green:white:green_dot')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_dot">
    <Filter>([osmcsymbol0] = 'green:white:green_dot')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'green:white:green_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'green:white:green_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'green:white:green_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'green:white:green_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'green:white:green_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'green:white:green_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_backslash">
    <Filter>([osmcsymbol0] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_backslash">
    <Filter>([osmcsymbol0] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bowl">
    <Filter>([osmcsymbol0] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bowl">
    <Filter>([osmcsymbol0] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_L">
    <Filter>([osmcsymbol0] = 'green:white:green_L')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_L">
    <Filter>([osmcsymbol0] = 'green:white:green_L')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'green:white:green_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'green:white:green_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'green:white:green_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'green:white:green_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'green:white:green_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'green:white:green_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_turned_T">
    <Filter>([osmcsymbol0] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_turned_T">
    <Filter>([osmcsymbol0] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_triangle">
    <Filter>([osmcsymbol0] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_triangle">
    <Filter>([osmcsymbol0] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_corner">
    <Filter>([osmcsymbol0] = 'green:white:green_corner')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_corner">
    <Filter>([osmcsymbol0] = 'green:white:green_corner')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'green:white:green_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'green:white:green_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'green:white:green_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'green:white:green_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'green:white:green_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'green:white:green_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bar">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_bar')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bar">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_bar')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'yellow:white:yellow_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'yellow:white:yellow_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'yellow:white:yellow_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'yellow:white:yellow_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'yellow:white:yellow_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'yellow:white:yellow_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_dot">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_dot')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_dot">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_dot')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'yellow:white:yellow_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'yellow:white:yellow_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'yellow:white:yellow_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'yellow:white:yellow_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'yellow:white:yellow_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'yellow:white:yellow_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_backslash">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_backslash">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bowl">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bowl">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_L">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_L">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_turned_T">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_turned_T">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_triangle">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_triangle">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_corner">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_corner">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom10;
    &minscale_zoom10;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol0] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol0] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
</Style>
<!-- Style for hiking tracks with offset position 1 -->
<Style name="osmc-track1">
  <Rule title="trasa: red:white:red_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'red:white:red_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'red:white:red_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'red:white:red_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'red:white:red_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'red:white:red_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'red:white:red_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'red:white:red_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'red:white:red_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'red:white:red_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'red:white:red_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'red:white:red_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'red:white:red_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'red:white:red_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'red:white:red_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'red:white:red_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'red:white:red_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'red:white:red_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'red:white:red_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'red:white:red_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'red:white:red_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'red:white:red_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'red:white:red_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'red:white:red_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'red:white:red_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'blue:white:blue_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'blue:white:blue_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'blue:white:blue_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'blue:white:blue_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'blue:white:blue_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'blue:white:blue_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'blue:white:blue_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'blue:white:blue_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'blue:white:blue_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'blue:white:blue_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'blue:white:blue_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'blue:white:blue_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'green:white:green_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'green:white:green_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'green:white:green_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'green:white:green_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'green:white:green_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'green:white:green_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'green:white:green_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'green:white:green_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'green:white:green_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'green:white:green_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'green:white:green_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'green:white:green_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'green:white:green_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'green:white:green_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'green:white:green_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'green:white:green_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'green:white:green_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'green:white:green_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'green:white:green_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'green:white:green_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'green:white:green_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'green:white:green_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'green:white:green_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'green:white:green_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'yellow:white:yellow_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'yellow:white:yellow_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'yellow:white:yellow_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'yellow:white:yellow_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'yellow:white:yellow_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'yellow:white:yellow_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'yellow:white:yellow_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'yellow:white:yellow_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'yellow:white:yellow_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'yellow:white:yellow_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'yellow:white:yellow_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'yellow:white:yellow_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol1] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol1] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-7</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
</Style>
<!-- Style for hiking tracks with offset position 2 -->
<Style name="osmc-track2">
  <Rule title="trasa: red:white:red_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'red:white:red_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'red:white:red_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'red:white:red_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'red:white:red_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'red:white:red_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'red:white:red_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'red:white:red_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'red:white:red_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'red:white:red_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'red:white:red_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'red:white:red_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'red:white:red_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'red:white:red_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'red:white:red_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'red:white:red_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'red:white:red_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'red:white:red_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'red:white:red_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'red:white:red_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'red:white:red_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'red:white:red_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'red:white:red_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'red:white:red_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'red:white:red_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'blue:white:blue_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'blue:white:blue_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'blue:white:blue_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'blue:white:blue_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'blue:white:blue_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'blue:white:blue_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'blue:white:blue_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'blue:white:blue_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'blue:white:blue_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'blue:white:blue_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'blue:white:blue_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'blue:white:blue_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'green:white:green_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'green:white:green_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'green:white:green_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'green:white:green_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'green:white:green_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'green:white:green_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'green:white:green_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'green:white:green_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'green:white:green_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'green:white:green_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'green:white:green_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'green:white:green_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'green:white:green_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'green:white:green_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'green:white:green_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'green:white:green_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'green:white:green_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'green:white:green_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'green:white:green_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'green:white:green_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'green:white:green_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'green:white:green_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'green:white:green_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'green:white:green_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'yellow:white:yellow_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'yellow:white:yellow_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'yellow:white:yellow_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'yellow:white:yellow_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'yellow:white:yellow_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'yellow:white:yellow_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'yellow:white:yellow_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'yellow:white:yellow_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'yellow:white:yellow_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'yellow:white:yellow_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'yellow:white:yellow_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'yellow:white:yellow_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-6</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-9</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol2] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol2] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-11</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
</Style>
<!-- Style for hiking tracks with offset position 3 -->
<Style name="osmc-track3">
  <Rule title="trasa: red:white:red_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'red:white:red_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'red:white:red_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'red:white:red_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'red:white:red_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'red:white:red_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'red:white:red_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'red:white:red_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'red:white:red_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'red:white:red_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'red:white:red_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'red:white:red_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'red:white:red_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'red:white:red_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'red:white:red_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'red:white:red_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'red:white:red_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'red:white:red_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'red:white:red_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'red:white:red_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'red:white:red_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'red:white:red_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'red:white:red_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'red:white:red_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: red:white:red_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'red:white:red_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_red;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'blue:white:blue_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'blue:white:blue_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'blue:white:blue_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'blue:white:blue_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'blue:white:blue_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'blue:white:blue_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'blue:white:blue_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'blue:white:blue_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'blue:white:blue_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'blue:white:blue_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'blue:white:blue_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'blue:white:blue_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: blue:white:blue_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_blue;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'green:white:green_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'green:white:green_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'green:white:green_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'green:white:green_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'green:white:green_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'green:white:green_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'green:white:green_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'green:white:green_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'green:white:green_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'green:white:green_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'green:white:green_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'green:white:green_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'green:white:green_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'green:white:green_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'green:white:green_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'green:white:green_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'green:white:green_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'green:white:green_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'green:white:green_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'green:white:green_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'green:white:green_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'green:white:green_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'green:white:green_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: green:white:green_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'green:white:green_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_green;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'yellow:white:yellow_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'yellow:white:yellow_bar')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'yellow:white:yellow_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'yellow:white:yellow_bar')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bar">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'yellow:white:yellow_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bar">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'yellow:white:yellow_bar')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'yellow:white:yellow_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'yellow:white:yellow_dot')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'yellow:white:yellow_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'yellow:white:yellow_dot')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_dot">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'yellow:white:yellow_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_dot">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'yellow:white:yellow_dot')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1,7</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_backslash">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_backslash">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bowl">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_bowl">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_L">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_L">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_turned_T">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_turned_T">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_triangle">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_triangle">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom11;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-offset">-8</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-offset">-12</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">8,4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_corner">
    <Filter>(([offsetside] = 1) and [osmcsymbol3] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="trasa: yellow:white:yellow_corner">
    <Filter>(([offsetside] = -1) and [osmcsymbol3] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">0.7</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_kct_yellow;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-offset">-15</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">11,5</CssParameter>
    </LineSymbolizer>
  </Rule>
</Style>
<!-- Style for hiking track shields with offset position 0 -->
<Style name="osmc-shield0">
  <Rule title="Shield: red:white:red_backslash">
    <Filter>([osmcsymbol0] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_backslash">
    <Filter>([osmcsymbol0] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_bowl">
    <Filter>([osmcsymbol0] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_bowl">
    <Filter>([osmcsymbol0] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_L">
    <Filter>([osmcsymbol0] = 'red:white:red_L')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_L">
    <Filter>([osmcsymbol0] = 'red:white:red_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_turned_T">
    <Filter>([osmcsymbol0] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_turned_T">
    <Filter>([osmcsymbol0] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_triangle">
    <Filter>([osmcsymbol0] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_triangle">
    <Filter>([osmcsymbol0] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_corner">
    <Filter>([osmcsymbol0] = 'red:white:red_corner')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_corner">
    <Filter>([osmcsymbol0] = 'red:white:red_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_backslash">
    <Filter>([osmcsymbol0] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_backslash">
    <Filter>([osmcsymbol0] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_bowl">
    <Filter>([osmcsymbol0] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_bowl">
    <Filter>([osmcsymbol0] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_L">
    <Filter>([osmcsymbol0] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_L">
    <Filter>([osmcsymbol0] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_turned_T">
    <Filter>([osmcsymbol0] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_turned_T">
    <Filter>([osmcsymbol0] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_triangle">
    <Filter>([osmcsymbol0] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_triangle">
    <Filter>([osmcsymbol0] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_corner">
    <Filter>([osmcsymbol0] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_corner">
    <Filter>([osmcsymbol0] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_backslash">
    <Filter>([osmcsymbol0] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_backslash">
    <Filter>([osmcsymbol0] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_bowl">
    <Filter>([osmcsymbol0] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_bowl">
    <Filter>([osmcsymbol0] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_L">
    <Filter>([osmcsymbol0] = 'green:white:green_L')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_L">
    <Filter>([osmcsymbol0] = 'green:white:green_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_turned_T">
    <Filter>([osmcsymbol0] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_turned_T">
    <Filter>([osmcsymbol0] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_triangle">
    <Filter>([osmcsymbol0] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_triangle">
    <Filter>([osmcsymbol0] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_corner">
    <Filter>([osmcsymbol0] = 'green:white:green_corner')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_corner">
    <Filter>([osmcsymbol0] = 'green:white:green_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_backslash">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_backslash">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_bowl">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_bowl">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_L">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_L">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_turned_T">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_turned_T">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_triangle">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_triangle">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_corner">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_corner">
    <Filter>([osmcsymbol0] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
</Style>
<!-- Style for hiking track shields with offset position 1 -->
<Style name="osmc-shield1">
  <Rule title="Shield: red:white:red_backslash">
    <Filter>([osmcsymbol1] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_backslash">
    <Filter>([osmcsymbol1] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_bowl">
    <Filter>([osmcsymbol1] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_bowl">
    <Filter>([osmcsymbol1] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_L">
    <Filter>([osmcsymbol1] = 'red:white:red_L')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_L">
    <Filter>([osmcsymbol1] = 'red:white:red_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_turned_T">
    <Filter>([osmcsymbol1] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_turned_T">
    <Filter>([osmcsymbol1] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_triangle">
    <Filter>([osmcsymbol1] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_triangle">
    <Filter>([osmcsymbol1] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_corner">
    <Filter>([osmcsymbol1] = 'red:white:red_corner')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_corner">
    <Filter>([osmcsymbol1] = 'red:white:red_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_backslash">
    <Filter>([osmcsymbol1] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_backslash">
    <Filter>([osmcsymbol1] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_bowl">
    <Filter>([osmcsymbol1] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_bowl">
    <Filter>([osmcsymbol1] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_L">
    <Filter>([osmcsymbol1] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_L">
    <Filter>([osmcsymbol1] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_turned_T">
    <Filter>([osmcsymbol1] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_turned_T">
    <Filter>([osmcsymbol1] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_triangle">
    <Filter>([osmcsymbol1] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_triangle">
    <Filter>([osmcsymbol1] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_corner">
    <Filter>([osmcsymbol1] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_corner">
    <Filter>([osmcsymbol1] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_backslash">
    <Filter>([osmcsymbol1] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_backslash">
    <Filter>([osmcsymbol1] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_bowl">
    <Filter>([osmcsymbol1] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_bowl">
    <Filter>([osmcsymbol1] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_L">
    <Filter>([osmcsymbol1] = 'green:white:green_L')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_L">
    <Filter>([osmcsymbol1] = 'green:white:green_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_turned_T">
    <Filter>([osmcsymbol1] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_turned_T">
    <Filter>([osmcsymbol1] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_triangle">
    <Filter>([osmcsymbol1] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_triangle">
    <Filter>([osmcsymbol1] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_corner">
    <Filter>([osmcsymbol1] = 'green:white:green_corner')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_corner">
    <Filter>([osmcsymbol1] = 'green:white:green_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_backslash">
    <Filter>([osmcsymbol1] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_backslash">
    <Filter>([osmcsymbol1] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_bowl">
    <Filter>([osmcsymbol1] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_bowl">
    <Filter>([osmcsymbol1] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_L">
    <Filter>([osmcsymbol1] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_L">
    <Filter>([osmcsymbol1] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_turned_T">
    <Filter>([osmcsymbol1] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_turned_T">
    <Filter>([osmcsymbol1] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_triangle">
    <Filter>([osmcsymbol1] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_triangle">
    <Filter>([osmcsymbol1] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_corner">
    <Filter>([osmcsymbol1] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_corner">
    <Filter>([osmcsymbol1] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
</Style>
<!-- Style for hiking track shields with offset position 2 -->
<Style name="osmc-shield2">
  <Rule title="Shield: red:white:red_backslash">
    <Filter>([osmcsymbol2] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_backslash">
    <Filter>([osmcsymbol2] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_bowl">
    <Filter>([osmcsymbol2] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_bowl">
    <Filter>([osmcsymbol2] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_L">
    <Filter>([osmcsymbol2] = 'red:white:red_L')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_L">
    <Filter>([osmcsymbol2] = 'red:white:red_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_turned_T">
    <Filter>([osmcsymbol2] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_turned_T">
    <Filter>([osmcsymbol2] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_triangle">
    <Filter>([osmcsymbol2] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_triangle">
    <Filter>([osmcsymbol2] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_corner">
    <Filter>([osmcsymbol2] = 'red:white:red_corner')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_corner">
    <Filter>([osmcsymbol2] = 'red:white:red_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_backslash">
    <Filter>([osmcsymbol2] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_backslash">
    <Filter>([osmcsymbol2] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_bowl">
    <Filter>([osmcsymbol2] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_bowl">
    <Filter>([osmcsymbol2] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_L">
    <Filter>([osmcsymbol2] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_L">
    <Filter>([osmcsymbol2] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_turned_T">
    <Filter>([osmcsymbol2] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_turned_T">
    <Filter>([osmcsymbol2] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_triangle">
    <Filter>([osmcsymbol2] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_triangle">
    <Filter>([osmcsymbol2] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_corner">
    <Filter>([osmcsymbol2] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_corner">
    <Filter>([osmcsymbol2] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_backslash">
    <Filter>([osmcsymbol2] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_backslash">
    <Filter>([osmcsymbol2] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_bowl">
    <Filter>([osmcsymbol2] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_bowl">
    <Filter>([osmcsymbol2] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_L">
    <Filter>([osmcsymbol2] = 'green:white:green_L')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_L">
    <Filter>([osmcsymbol2] = 'green:white:green_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_turned_T">
    <Filter>([osmcsymbol2] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_turned_T">
    <Filter>([osmcsymbol2] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_triangle">
    <Filter>([osmcsymbol2] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_triangle">
    <Filter>([osmcsymbol2] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_corner">
    <Filter>([osmcsymbol2] = 'green:white:green_corner')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_corner">
    <Filter>([osmcsymbol2] = 'green:white:green_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_backslash">
    <Filter>([osmcsymbol2] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_backslash">
    <Filter>([osmcsymbol2] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_bowl">
    <Filter>([osmcsymbol2] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_bowl">
    <Filter>([osmcsymbol2] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_L">
    <Filter>([osmcsymbol2] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_L">
    <Filter>([osmcsymbol2] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_turned_T">
    <Filter>([osmcsymbol2] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_turned_T">
    <Filter>([osmcsymbol2] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_triangle">
    <Filter>([osmcsymbol2] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_triangle">
    <Filter>([osmcsymbol2] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_corner">
    <Filter>([osmcsymbol2] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_corner">
    <Filter>([osmcsymbol2] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
</Style>
<!-- Style for hiking track shields with offset position 3 -->
<Style name="osmc-shield3">
  <Rule title="Shield: red:white:red_backslash">
    <Filter>([osmcsymbol3] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_backslash">
    <Filter>([osmcsymbol3] = 'red:white:red_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_bowl">
    <Filter>([osmcsymbol3] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_bowl">
    <Filter>([osmcsymbol3] = 'red:white:red_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_L">
    <Filter>([osmcsymbol3] = 'red:white:red_L')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_L">
    <Filter>([osmcsymbol3] = 'red:white:red_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_turned_T">
    <Filter>([osmcsymbol3] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_turned_T">
    <Filter>([osmcsymbol3] = 'red:white:red_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_triangle">
    <Filter>([osmcsymbol3] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_triangle">
    <Filter>([osmcsymbol3] = 'red:white:red_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_corner">
    <Filter>([osmcsymbol3] = 'red:white:red_corner')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: red:white:red_corner">
    <Filter>([osmcsymbol3] = 'red:white:red_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/red-white-red_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_backslash">
    <Filter>([osmcsymbol3] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_backslash">
    <Filter>([osmcsymbol3] = 'blue:white:blue_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_bowl">
    <Filter>([osmcsymbol3] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_bowl">
    <Filter>([osmcsymbol3] = 'blue:white:blue_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_L">
    <Filter>([osmcsymbol3] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_L">
    <Filter>([osmcsymbol3] = 'blue:white:blue_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_turned_T">
    <Filter>([osmcsymbol3] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_turned_T">
    <Filter>([osmcsymbol3] = 'blue:white:blue_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_triangle">
    <Filter>([osmcsymbol3] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_triangle">
    <Filter>([osmcsymbol3] = 'blue:white:blue_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_corner">
    <Filter>([osmcsymbol3] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: blue:white:blue_corner">
    <Filter>([osmcsymbol3] = 'blue:white:blue_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/blue-white-blue_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_backslash">
    <Filter>([osmcsymbol3] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_backslash">
    <Filter>([osmcsymbol3] = 'green:white:green_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_bowl">
    <Filter>([osmcsymbol3] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_bowl">
    <Filter>([osmcsymbol3] = 'green:white:green_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_L">
    <Filter>([osmcsymbol3] = 'green:white:green_L')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_L">
    <Filter>([osmcsymbol3] = 'green:white:green_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_turned_T">
    <Filter>([osmcsymbol3] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_turned_T">
    <Filter>([osmcsymbol3] = 'green:white:green_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_triangle">
    <Filter>([osmcsymbol3] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_triangle">
    <Filter>([osmcsymbol3] = 'green:white:green_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_corner">
    <Filter>([osmcsymbol3] = 'green:white:green_corner')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: green:white:green_corner">
    <Filter>([osmcsymbol3] = 'green:white:green_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/green-white-green_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_backslash">
    <Filter>([osmcsymbol3] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_backslash">
    <Filter>([osmcsymbol3] = 'yellow:white:yellow_backslash')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_backslash.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_bowl">
    <Filter>([osmcsymbol3] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_bowl">
    <Filter>([osmcsymbol3] = 'yellow:white:yellow_bowl')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_bowl.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_L">
    <Filter>([osmcsymbol3] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_L">
    <Filter>([osmcsymbol3] = 'yellow:white:yellow_L')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_L.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_turned_T">
    <Filter>([osmcsymbol3] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_turned_T">
    <Filter>([osmcsymbol3] = 'yellow:white:yellow_turned_T')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_turned_T.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_triangle">
    <Filter>([osmcsymbol3] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_triangle">
    <Filter>([osmcsymbol3] = 'yellow:white:yellow_triangle')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_triangle.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_corner">
    <Filter>([osmcsymbol3] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
  <Rule title="Shield: yellow:white:yellow_corner">
    <Filter>([osmcsymbol3] = 'yellow:white:yellow_corner')</Filter>
    &maxscale_zoom15;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line"
    file= "../symbols/osmc/yellow-white-yellow_corner.png"
    type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
</Style>

