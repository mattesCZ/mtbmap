<!-- -->
<Style name="access">
    <Rule title="soukromá komunikace">
            <Filter>(([access]='private') or ([access]='no'))</Filter>
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(239,169,169)</CssParameter>
                <CssParameter name="stroke-width">6</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
                <CssParameter name="stroke-dasharray">6, 8</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="aerialways">
    <Rule title="kabinová lanovka">
            <Filter>([aerialway]='cable_car')</Filter>
            &minscale_zoom18;
            &maxscale_zoom12;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_aerialway;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_aerialway;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">0,9,14,9</CssParameter>
    </LineSymbolizer>
    </Rule>
    <Rule title="gondolová lanovka">
            <Filter>([aerialway]='gondola')</Filter>
            &minscale_zoom18;
            &maxscale_zoom12;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_aerialway;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_aerialway;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">5</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">0,8,1,7</CssParameter>
    </LineSymbolizer>
    </Rule>
    <Rule title="sedačková lanovka">
            <Filter>([aerialway]='chair_lift')</Filter>
            &minscale_zoom18;
            &maxscale_zoom12;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_aerialway;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_aerialway;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">5</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">0,8,1,7</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_white;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">0,8,1,7</CssParameter>
    </LineSymbolizer>
    </Rule>
    <Rule title="lyžařský vlek">
            <Filter>([aerialway]='drag_lift')</Filter>
            &minscale_zoom18;
            &maxscale_zoom13;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_aerialway;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_aerialway;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">0,12,1,12</CssParameter>
    </LineSymbolizer>
    </Rule>
    <Rule title="servisní lanovka">
            <Filter>([aerialway]='goods')</Filter>
            &minscale_zoom18;
            &maxscale_zoom14;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_aerialway;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">16,4</CssParameter>
    </LineSymbolizer>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_aerialway;</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">0,4,1,6,1,8</CssParameter>
    </LineSymbolizer>
    </Rule>
</Style>
<Style name="directions">
    <Rule title="jednosměrná ulice">
            <Filter>([oneway]='yes')</Filter>
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_oneway_arrow;</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 12, 10, 152</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_oneway_arrow;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 12, 9, 153</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_oneway_arrow;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 18, 2, 154</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_oneway_arrow;</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 18, 1, 155</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="jednosměrná ulice">
            <Filter>([oneway]='-1')</Filter>
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_oneway_arrow;</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 12, 10, 152</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_oneway_arrow;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 13, 9, 152</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_oneway_arrow;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 14, 2, 158</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_oneway_arrow;</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 15, 1, 158</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="footbikecycle-tunnels">
    <Rule title="!podchod">
            <Filter>([highway]='path')</Filter>
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_tunnel;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_casing;</CssParameter>
                <CssParameter name="stroke-width">2.2</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_fill;</CssParameter>
                <CssParameter name="stroke-width">1.4</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">7, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!podchod">
            <Filter>([highway]='bridleway')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_tunnel;</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bridleway_fill;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">7, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="podchod">
            <Filter>([highway]='footway')</Filter>
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(128,128,128)</CssParameter>
                <CssParameter name="stroke-width">5.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(250,128,114)</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
                <CssParameter name="stroke-dasharray">1, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="highway-area-casing">
    <Rule title="!prostranství">
            <Filter>((([highway]='residential') or ([highway]='unclassified')) or ([highway]='service') or ([highway]='living_street'))</Filter>
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential_background;</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!pěší zóna">
            <Filter>((([highway]='pedestrian') or ([highway]='service')) or ([highway]='footway'))</Filter>
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_pedestrian;</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="highway-area-fill">
    <Rule title="!prostranství">
            <Filter>((([highway]='residential') or ([highway]='unclassified')) or ([highway]='service') or ([highway]='living_street'))</Filter>
            &maxscale_zoom14;
            <PolygonSymbolizer>
                <CssParameter name="fill">&color_residential;</CssParameter>
            </PolygonSymbolizer>
    </Rule>
    <Rule title="!pěší zóna">
            <Filter>((([highway]='pedestrian') or ([highway]='service')) or ([highway]='footway'))</Filter>
            &maxscale_zoom14;
            <PolygonSymbolizer>
                <CssParameter name="fill">&color_pedestrian;</CssParameter>
            </PolygonSymbolizer>
    </Rule>
</Style>
<Style name="minor-roads-casing">
    <Rule title="dálnice, rychlostní silnice">
            <Filter>((([highway]='motorway') or ([highway]='trunk')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway_background;</CssParameter>
                <CssParameter name="stroke-width">4.6</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 1. třídy">
            <Filter>(([highway]='primary') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary_background;</CssParameter>
                <CssParameter name="stroke-width">4.1</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 2. třídy">
            <Filter>(([highway]='secondary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary_background;</CssParameter>
                <CssParameter name="stroke-width">3.6</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálnice, rychlostní silnice">
            <Filter>((([highway]='motorway') or ([highway]='trunk')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway_background;</CssParameter>
                <CssParameter name="stroke-width">6.6</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 1. třídy">
            <Filter>(([highway]='primary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary_background;</CssParameter>
                <CssParameter name="stroke-width">8.6</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 2. třídy">
            <Filter>(([highway]='secondary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary_background;</CssParameter>
                <CssParameter name="stroke-width">9.6</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálnice, rychlostní silnice">
            <Filter>((([highway]='motorway') or ([highway]='trunk')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway_background;</CssParameter>
                <CssParameter name="stroke-width">10.1</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 1. třídy">
            <Filter>(([highway]='primary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary_background;</CssParameter>
                <CssParameter name="stroke-width">12.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 2. třídy">
            <Filter>(([highway]='secondary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary_background;</CssParameter>
                <CssParameter name="stroke-width">12.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálnice, rychlostní silnice">
            <Filter>((([highway]='motorway') or ([highway]='trunk')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway_background;</CssParameter>
                <CssParameter name="stroke-width">13</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 1. třídy">
            <Filter>(([highway]='primary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary_background;</CssParameter>
                <CssParameter name="stroke-width">17.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 2. třídy">
            <Filter>(([highway]='secondary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary_background;</CssParameter>
                <CssParameter name="stroke-width">17.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 3. třídy">
            <Filter>(([highway]='tertiary') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tertiary_background;</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 3. třídy">
            <Filter>(([highway]='tertiary') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tertiary_background;</CssParameter>
                <CssParameter name="stroke-width">6</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní silnice">
            <Filter>((((([highway]='living_street') or ([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified'))) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential_background;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice s chybějící klasifikací">
            <Filter>(([highway]='road') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_road_background;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 3. třídy">
            <Filter>(([highway]='tertiary') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tertiary_background;</CssParameter>
                <CssParameter name="stroke-width">7.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified')) and not ([tunnel]='yes')) or (([highway]='service') and not (([service]='parking_aisle') or ([tunnel]='yes'))))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential_background;</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice s chybějící klasifikací">
            <Filter>(([highway]='road') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_road_background;</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 3. třídy">
            <Filter>(([highway]='tertiary') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tertiary_background;</CssParameter>
                <CssParameter name="stroke-width">11</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified') ) and not ([tunnel]='yes')) or (([highway]='service') and not (([service]='parking_aisle') or ([tunnel]='yes'))))</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential_background;</CssParameter>
                <CssParameter name="stroke-width">8.1</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified') ) and not ([tunnel]='yes')) or (([highway]='service') and not (([service]='parking_aisle') or ([tunnel]='yes'))))</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential_background;</CssParameter>
                <CssParameter name="stroke-width">11</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice s chybějící klasifikací">
            <Filter>(([highway]='road') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_road_background;</CssParameter>
                <CssParameter name="stroke-width">8.1</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice s chybějící klasifikací">
            <Filter>(([highway]='road') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_road_background;</CssParameter>
                <CssParameter name="stroke-width">11</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 3. třídy">
            <Filter>(([highway]='tertiary') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tertiary_background;</CssParameter>
                <CssParameter name="stroke-width">15</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified') ) and not ([tunnel]='yes')) or (([highway]='service') and not (([service]='parking_aisle') or ([tunnel]='yes'))))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential_background;</CssParameter>
                <CssParameter name="stroke-width">15</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice s chybějící klasifikací">
            <Filter>(([highway]='road') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_road_background;</CssParameter>
                <CssParameter name="stroke-width">15</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!tunel ostatní silnice">
            <Filter>(([highway]='service') and ([tunnel]='yes'))</Filter>
            &minscale_zoom15;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential_background;</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!tunel ostatní silnice">
            <Filter>(([highway]='service') and ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential_background;</CssParameter>
                <CssParameter name="stroke-width">7</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="pěší zóna">
            <Filter>(([highway]='pedestrian') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_pedestrian_background;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!pěší zóna">
            <Filter>(([highway]='pedestrian') and ([tunnel]='yes'))</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_pedestrian_background;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="pěší zóna">
            <Filter>(([highway]='pedestrian') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_pedestrian_background;</CssParameter>
                <CssParameter name="stroke-width">3.6</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!pěší zóna">
            <Filter>(([highway]='pedestrian') and ([tunnel]='yes'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_pedestrian_background;</CssParameter>
                <CssParameter name="stroke-width">3.6</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="pěší zóna">
            <Filter>(([highway]='pedestrian') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_pedestrian_background;</CssParameter>
                <CssParameter name="stroke-width">6.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!pěší zóna">
            <Filter>(([highway]='pedestrian') and ([tunnel]='yes'))</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_pedestrian_background;</CssParameter>
                <CssParameter name="stroke-width">6.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="pěší zóna">
            <Filter>(([highway]='pedestrian') and not (([tunnel]='yes')))</Filter>
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_pedestrian_background;</CssParameter>
                <CssParameter name="stroke-width">9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!pěší zóna">
            <Filter>(([highway]='pedestrian') and ([tunnel]='yes'))</Filter>
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_pedestrian_background;</CssParameter>
                <CssParameter name="stroke-width">9</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="minor-roads-casing-links">
    <Rule title="!přivaděč dálnice, rychlostní silnice">
            <Filter>((([highway]='motorway_link') or ([highway]='trunk_link')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway_background;</CssParameter>
                <CssParameter name="stroke-width">2.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!přivaděč dálnice, rychlostní silnice">
            <Filter>((([highway]='motorway_link') or ([highway]='trunk_link')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway_background;</CssParameter>
                <CssParameter name="stroke-width">4.6</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!přivaděč dálnice, rychlostní silnice">
            <Filter>((([highway]='motorway_link') or ([highway]='trunk_link')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway_background;</CssParameter>
                <CssParameter name="stroke-width">8.1</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!přivaděč dálnice, rychlostní silnice">
            <Filter>((([highway]='motorway_link') or ([highway]='trunk_link')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway_background;</CssParameter>
                <CssParameter name="stroke-width">11</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!přivaděč silnice 1. třídy">
            <Filter>(([highway]='primary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary_background;</CssParameter>
                <CssParameter name="stroke-width">4.1</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!přivaděč silnice 1. třídy">
            <Filter>(([highway]='primary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary_background;</CssParameter>
                <CssParameter name="stroke-width">8.6</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!přivaděč silnice 1. třídy">
            <Filter>(([highway]='primary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary_background;</CssParameter>
                <CssParameter name="stroke-width">12.6</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!přivaděč silnice 1. třídy">
            <Filter>(([highway]='primary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary_background;</CssParameter>
                <CssParameter name="stroke-width">17.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!přivaděč silnice 2. třídy">
            <Filter>(([highway]='secondary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary_background;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!přivaděč silnice 2. třídy">
            <Filter>(([highway]='secondary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary_background;</CssParameter>
                <CssParameter name="stroke-width">9.6</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!přivaděč silnice 2. třídy">
            <Filter>(([highway]='secondary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary_background;</CssParameter>
                <CssParameter name="stroke-width">12.6</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!přivaděč silnice 2. třídy">
            <Filter>(([highway]='secondary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary_background;</CssParameter>
                <CssParameter name="stroke-width">17.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="závodní okruh">
            <Filter>([highway]='raceway')</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_raceway;</CssParameter>
                <CssParameter name="stroke-width">1.2</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="závodní okruh">
            <Filter>([highway]='raceway')</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_raceway;</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="závodní okruh">
            <Filter>([highway]='raceway')</Filter>
            &minscale_zoom18;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_raceway;</CssParameter>
                <CssParameter name="stroke-width">7</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="minor-roads-fill">
    <Rule title="silnice ve výstavbě">
            <Filter>(([highway]='construction') and not (([construction]&lt;&gt;'')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálnice nebo rychlostní silnice ve výstavbě">
            <Filter>(([highway]='construction') and (([construction]='motorway') or ([construction]='motorway_link') or ([construction]='trunk') or ([construction]='trunk_link')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 1. třídy ve výstavbě">
            <Filter>(([highway]='construction') and (([construction]='primary') or ([construction]='primary_link')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 2.třídy ve výstavbě">
            <Filter>(([highway]='construction') and (([construction]='secondary') or ([construction]='secondary_link')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice ve výstavbě">
            <Filter>(([highway]='construction') and not (([construction]&lt;&gt;'')))</Filter>
            &minscale_zoom15;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential;</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-dasharray">6, 4</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálnice nebo rychlostní silnice ve výstavbě">
            <Filter>(([highway]='construction') and (([construction]='motorway') or ([construction]='motorway_link') or ([construction]='trunk') or ([construction]='trunk_link')))</Filter>
            &minscale_zoom15;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-dasharray">6, 4</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 1. třídy ve výstavbě">
            <Filter>(([highway]='construction') and (([construction]='primary') or ([construction]='primary_link')))</Filter>
            &minscale_zoom15;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary;</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-dasharray">6, 4</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 2.třídy ve výstavbě">
            <Filter>(([highway]='construction') and (([construction]='secondary') or ([construction]='secondary_link')))</Filter>
            &minscale_zoom15;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary;</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-dasharray">6, 4</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 3. třídy ve výstavbě">
            <Filter>(([highway]='construction') and (([construction]='tertiary') or ([construction]='tertiary_link')))</Filter>
            &minscale_zoom15;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tertiary;</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-dasharray">6, 4</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní silnice ve výstavbě">
            <Filter>(([highway]='construction') and (((([construction]='residential') or ([construction]='unclassified')) or ([construction]='living_street')) or ([construction]='service')))</Filter>
            &minscale_zoom15;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential;</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-dasharray">6, 4</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="zrušená silnice">
            <Filter>([highway]='abandoned')</Filter>
            &minscale_zoom15;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(151,151,151)</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-dasharray">6, 4</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice ve výstavbě">
            <Filter>(([highway]='construction') and not (([construction]&lt;&gt;'')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential;</CssParameter>
                <CssParameter name="stroke-width">8</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">7</CssParameter>
                <CssParameter name="stroke-dasharray">8, 6</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálnice nebo rychlostní silnice ve výstavbě">
            <Filter>(([highway]='construction') and (([construction]='motorway') or ([construction]='motorway_link') or ([construction]='trunk') or ([construction]='trunk_link')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">8</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">7</CssParameter>
                <CssParameter name="stroke-dasharray">8, 6</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 1. třídy ve výstavbě">
            <Filter>(([highway]='construction') and (([construction]='primary') or ([construction]='primary_link')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary;</CssParameter>
                <CssParameter name="stroke-width">8</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">7</CssParameter>
                <CssParameter name="stroke-dasharray">8, 6</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 2.třídy ve výstavbě">
            <Filter>(([highway]='construction') and (([construction]='secondary') or ([construction]='secondary_link')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary;</CssParameter>
                <CssParameter name="stroke-width">8</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">7</CssParameter>
                <CssParameter name="stroke-dasharray">8, 6</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 3. třídy ve výstavbě">
            <Filter>(([highway]='construction') and (([construction]='tertiary') or ([construction]='tertiary_link')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tertiary;</CssParameter>
                <CssParameter name="stroke-width">8</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">7</CssParameter>
                <CssParameter name="stroke-dasharray">8, 6</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní silnice ve výstavbě">
            <Filter>(([highway]='construction') and (((([construction]='residential') or ([construction]='unclassified')) or ([construction]='living_street')) or ([construction]='service')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential;</CssParameter>
                <CssParameter name="stroke-width">8</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">7</CssParameter>
                <CssParameter name="stroke-dasharray">8, 6</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="zrušená silnice">
            <Filter>([highway]='abandoned')</Filter>
            &minscale_zoom18;
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(151,151,151)</CssParameter>
                <CssParameter name="stroke-width">8</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">7</CssParameter>
                <CssParameter name="stroke-dasharray">8, 6</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálnice, rychlostní silnice">
            <Filter>((([highway]='motorway') or ([highway]='trunk')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálnice, rychlostní silnice">
            <Filter>((([highway]='motorway') or ([highway]='trunk')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálnice, rychlostní silnice">
            <Filter>((([highway]='motorway') or ([highway]='trunk')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">8.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálnice, rychlostní silnice">
            <Filter>((([highway]='motorway') or ([highway]='trunk')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">11</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 1. třídy">
            <Filter>(([highway]='primary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary;</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 1. třídy">
            <Filter>(([highway]='primary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary;</CssParameter>
                <CssParameter name="stroke-width">7</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 1. třídy">
            <Filter>(([highway]='primary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary;</CssParameter>
                <CssParameter name="stroke-width">11</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 1. třídy">
            <Filter>(([highway]='primary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary;</CssParameter>
                <CssParameter name="stroke-width">15.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 2. třídy">
            <Filter>(([highway]='secondary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 2. třídy">
            <Filter>(([highway]='secondary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary;</CssParameter>
                <CssParameter name="stroke-width">8</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 2. třídy">
            <Filter>(([highway]='secondary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary;</CssParameter>
                <CssParameter name="stroke-width">11</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 2. třídy">
            <Filter>(([highway]='secondary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary;</CssParameter>
                <CssParameter name="stroke-width">15.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="elektrifikovaná železnice">
            <Filter>([railway]='rail' and ([electrified]='yes' or [electrified]='contact_line'))</Filter>
            &minscale_zoom13;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_railway;</CssParameter>
                <CssParameter name="stroke-width">6</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 8, 1, 9, 1, 1</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="železniční tunel">
            <Filter>(([railway]='rail') and ([tunnel]='yes'))</Filter>
            &minscale_zoom13;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_railway;</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">1</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
    </Rule>
<!--    <Rule title="">
            <Filter>(((([railway]='disused') or ([railway]='abandoned')) or ([railway]='construction')) and not (([highway]&lt;&gt;'')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(128,128,128)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-dasharray">2, 4</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="">
            <Filter>((((([railway]='disused') or ([railway]='abandoned')) or ([railway]='construction')) and not (([highway]&lt;&gt;''))) and ([bridge]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">6</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(128,128,128)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-dasharray">2, 4</CssParameter>
            </LineSymbolizer>
    </Rule>-->
    <Rule title="železnice">
            <Filter>(([railway]='rail') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom13;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_railway;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-dasharray">8, 12</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="elektrifikovaná železnice">
            <Filter>([railway]='rail' and ([electrified]='yes' or [electrified]='contact_line'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_railway;</CssParameter>
                <CssParameter name="stroke-width">7</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">1,9,1,9</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="železniční most">
            <Filter>(([railway]='rail') and ([bridge]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke-width">7</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="železnice">
            <Filter>(([railway]='rail') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_railway;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-dasharray">0, 11, 8, 1</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="železniční tunel">
            <Filter>(([railway]='rail') and ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_railway;</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">1</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="vedlejší kolej">
            <Filter>([railway]='spur-siding-yard')</Filter>
            &minscale_zoom18;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_railway;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">0.7</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-dasharray">0, 11, 8, 1</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="úzkorozchodná železnice">
            <Filter>((([railway]='narrow_gauge') or ([railway]='funicular')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(102,102,102)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel úzkorozchodné železnice">
            <Filter>((([railway]='narrow_gauge') or ([railway]='funicular')) and ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(102,102,102)</CssParameter>
                <CssParameter name="stroke-width">5</CssParameter>
                <CssParameter name="stroke-dasharray">5, 3</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(170,170,170)</CssParameter>
                <CssParameter name="stroke-width">1.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!tunel pro tramvaj">
            <Filter>(([railway]='tram') and ([tunnel]='yes'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tram;</CssParameter>
                <CssParameter name="stroke-dasharray">5, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!tunel pro tramvaj">
            <Filter>(([railway]='tram') and ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tram;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-dasharray">5, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!městská rychlodráha">
            <Filter>(([railway]='light_rail') and ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(102,102,102)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-dasharray">5, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!městská rychlodráha">
            <Filter>(([railway]='light_rail') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(102,102,102)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="metro">
            <Filter>(([railway]='subway') and ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(153,153,153)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-dasharray">5, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="metro na povrchu">
            <Filter>(([railway]='subway') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(153,153,153)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 3. třídy">
            <Filter>(([highway]='tertiary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tertiary;</CssParameter>
                <CssParameter name="stroke-width">1</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 3. třídy">
            <Filter>(([highway]='tertiary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tertiary;</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 3. třídy">
            <Filter>(([highway]='tertiary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tertiary;</CssParameter>
                <CssParameter name="stroke-width">6</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 3. třídy">
            <Filter>(([highway]='tertiary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tertiary;</CssParameter>
                <CssParameter name="stroke-width">9.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 3. třídy">
            <Filter>(([highway]='tertiary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tertiary;</CssParameter>
                <CssParameter name="stroke-width">13</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified') ) and not ([tunnel]='yes')) or (([highway]='service') and not (([service]='parking_aisle') or ([tunnel]='yes'))))</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified') ) and not ([tunnel]='yes')) or (([highway]='service') and not (([service]='parking_aisle') or ([tunnel]='yes'))))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified') ) and not ([tunnel]='yes')) or (([highway]='service') and not (([service]='parking_aisle') or ([tunnel]='yes'))))</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential;</CssParameter>
                <CssParameter name="stroke-width">6.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified') ) and not ([tunnel]='yes')) or (([highway]='service') and not (([service]='parking_aisle') or ([tunnel]='yes'))))</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential;</CssParameter>
                <CssParameter name="stroke-width">9.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified') ) and not ([tunnel]='yes')) or (([highway]='service') and not (([service]='parking_aisle') or ([tunnel]='yes'))))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential;</CssParameter>
                <CssParameter name="stroke-width">13</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice s chybějící klasifikací">
            <Filter>(([highway]='road') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_road;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice s chybějící klasifikací">
            <Filter>(([highway]='road') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_road;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice s chybějící klasifikací">
            <Filter>(([highway]='road') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_road;</CssParameter>
                <CssParameter name="stroke-width">6.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice s chybějící klasifikací">
            <Filter>(([highway]='road') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_road;</CssParameter>
                <CssParameter name="stroke-width">9.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice s chybějící klasifikací">
            <Filter>(([highway]='road') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_road;</CssParameter>
                <CssParameter name="stroke-width">13</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="parkovací pruh">
            <Filter>(([highway]='service') and ([service]='parking_aisle'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="pěší zóna">
            <Filter>([highway]='pedestrian')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_pedestrian;</CssParameter>
                <CssParameter name="stroke-width">1.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="pěší zóna">
            <Filter>([highway]='pedestrian')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_pedestrian;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="pěší zóna">
            <Filter>([highway]='pedestrian')</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_pedestrian;</CssParameter>
                <CssParameter name="stroke-width">5.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="pěší zóna">
            <Filter>([highway]='pedestrian')</Filter>
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_pedestrian;</CssParameter>
                <CssParameter name="stroke-width">8</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="nástupiště">
            <Filter>(([highway]='platform') or ([railway]='platform'))</Filter>
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(128,128,128)</CssParameter>
                <CssParameter name="stroke-width">6</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="schodiště">
            <Filter>([highway]='steps')</Filter>
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(250,128,114)</CssParameter>
                <CssParameter name="stroke-width">5</CssParameter>
                <CssParameter name="stroke-dasharray">2, 1</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="pěšina">
            <Filter>(([highway]='path') and not ([tunnel]='yes'))</Filter>
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_casing;</CssParameter>
                <CssParameter name="stroke-width">2.2</CssParameter>
                <CssParameter name="stroke-opacity">0.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_fill;</CssParameter>
                <CssParameter name="stroke-width">1.0</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">3, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!stezka např. pro koně">
            <Filter>(([highway]='bridleway') and not ([tunnel]='yes'))</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-opacity">0.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bridleway_fill;</CssParameter>
                <CssParameter name="stroke-width">1.8</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">7, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="chodník">
            <Filter>(([highway]='footway') and not (([tunnel]='yes')))</Filter>
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
                <CssParameter name="stroke-opacity">0.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(250,128,114)</CssParameter>
                <CssParameter name="stroke-width">1.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
                <CssParameter name="stroke-dasharray">1, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="nástupiště">
            <Filter>(([highway]='platform') or ([railway]='platform'))</Filter>
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(187,187,187)</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="schodiště">
            <Filter>([highway]='steps')</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">6</CssParameter>
                <CssParameter name="stroke-opacity">0.4</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(250,128,114)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
                <CssParameter name="stroke-dasharray">1, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="přistávací plocha">
            <Filter>([aeroway]='runway')</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(187,187,204)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="přistávací plocha">
            <Filter>([aeroway]='runway')</Filter>
            &minscale_zoom13;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(187,187,204)</CssParameter>
                <CssParameter name="stroke-width">7</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="přistávací plocha">
            <Filter>(([aeroway]='runway') and not (([bridge]='yes')))</Filter>
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(187,187,204)</CssParameter>
                <CssParameter name="stroke-width">18</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!příjezd na ranvej">
            <Filter>([aeroway]='taxiway')</Filter>
            &minscale_zoom13;
            &maxscale_zoom11;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(187,187,204)</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!příjezd na ranvej">
            <Filter>(([aeroway]='taxiway') and not (([bridge]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(187,187,204)</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!příjezd na ranvej">
            <Filter>(([aeroway]='taxiway') and not (([bridge]='yes')))</Filter>
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(187,187,204)</CssParameter>
                <CssParameter name="stroke-width">6</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="minor-roads-fill-links">
    <Rule title="!přivaděč na dálnici nebo rychlostní silnici">
            <Filter>((([highway]='motorway_link') or ([highway]='trunk_link')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">1.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!přivaděč na dálnici nebo rychlostní silnici">
            <Filter>((([highway]='motorway_link') or ([highway]='trunk_link')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!přivaděč na dálnici nebo rychlostní silnici">
            <Filter>((([highway]='motorway_link') or ([highway]='trunk_link')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">6.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!přivaděč na dálnici nebo rychlostní silnici">
            <Filter>((([highway]='motorway_link') or ([highway]='trunk_link')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!přivaděč na silnici 1. třídy">
            <Filter>(([highway]='primary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary;</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!přivaděč na silnici 1. třídy">
            <Filter>(([highway]='primary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary;</CssParameter>
                <CssParameter name="stroke-width">7</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!přivaděč na silnici 1. třídy">
            <Filter>(([highway]='primary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary;</CssParameter>
                <CssParameter name="stroke-width">11</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!přivaděč na silnici 1. třídy">
            <Filter>(([highway]='primary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary;</CssParameter>
                <CssParameter name="stroke-width">15.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!přivaděč na silnici 2. třídy">
            <Filter>(([highway]='secondary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!přivaděč na silnici 2. třídy">
            <Filter>(([highway]='secondary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary;</CssParameter>
                <CssParameter name="stroke-width">8</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!přivaděč na silnici 2. třídy">
            <Filter>(([highway]='secondary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary;</CssParameter>
                <CssParameter name="stroke-width">11</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!přivaděč na silnici 2. třídy">
            <Filter>(([highway]='secondary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary;</CssParameter>
                <CssParameter name="stroke-width">15.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="mwaybridge_layer0_casing">
    <Rule title="dálniční most">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">6.6</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálniční most">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke-width">10.1</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálniční most">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke-width">13</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="mwaybridge_layer0_fill">
    <Rule title="dálniční most">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">5.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálniční most">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">7.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálniční most">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">10</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="mwaybridge_layer1_casing">
    <Rule title="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='1'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">6.6</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='1'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke-width">10.1</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='1'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke-width">13</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="mwaybridge_layer1_fill">
    <Rule title="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='1'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">5.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='1'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">7.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='1'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">10</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="mwaybridge_layer2_casing">
    <Rule title="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='2'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">6.6</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='2'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke-width">10.1</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='2'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke-width">13</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="mwaybridge_layer2_fill">
    <Rule title="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='2'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">5.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='2'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">7.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='2'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">10</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="mwaybridge_layer3_casing">
    <Rule title="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='3'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">6.6</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='3'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke-width">10.1</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='3'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke-width">13</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="mwaybridge_layer3_fill">
    <Rule title="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='3'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">5.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='3'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">7.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='3'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">10</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="noncased-ways-bridges">
    <Rule title="!přistávací plocha">
            <Filter>([aeroway]='runway')</Filter>
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke-width">19</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(187,187,204)</CssParameter>
                <CssParameter name="stroke-width">18</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!příjezd na ranvej">
            <Filter>([aeroway]='taxiway')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke-width">5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(187,187,204)</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!příjezd na ranvej">
            <Filter>([aeroway]='taxiway')</Filter>
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke-width">7</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(187,187,204)</CssParameter>
                <CssParameter name="stroke-width">6</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!metro">
            <Filter>([railway]='subway')</Filter>
            &minscale_zoom18;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke-width">5.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(153,153,153)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!městská rychlodráha">
            <Filter>([railway]='light_rail')</Filter>
            &minscale_zoom18;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(85,85,85)</CssParameter>
                <CssParameter name="stroke-width">5.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(102,102,102)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!stezka">
            <Filter>([highway]='path')</Filter>
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke-width">3.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_casing;</CssParameter>
                <CssParameter name="stroke-width">2.2</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_fill;</CssParameter>
                <CssParameter name="stroke-width">1.4</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">7, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!stezka např. pro koně">
            <Filter>([highway]='bridleway')</Filter>
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke-width">4.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bridleway_fill;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">7, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!chodník">
            <Filter>([highway]='footway')</Filter>
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke-width">6</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(250,128,114)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
                <CssParameter name="stroke-dasharray">1, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="primarybridge_layer0_casing">
    <Rule title="most na silnici 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">8.6</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke-width">12.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke-width">17.5</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="primarybridge_layer0_fill">
    <Rule title="most na silnici 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary;</CssParameter>
                <CssParameter name="stroke-width">7</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary;</CssParameter>
                <CssParameter name="stroke-width">9.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary;</CssParameter>
                <CssParameter name="stroke-width">14.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="primarybridge_layer1_casing">
    <Rule title="most na silnici 1. třídy">
            <Filter>((([highway]='primary') or ([highway]='primary_link')) and ([layer]='1'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">8.6</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici 1. třídy">
            <Filter>((([highway]='primary') or ([highway]='primary_link')) and ([layer]='1'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke-width">12.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici 1. třídy">
            <Filter>((([highway]='primary') or ([highway]='primary_link')) and ([layer]='1'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke-width">17.5</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="primarybridge_layer1_fill">
    <Rule title="most na silnici 1. třídy">
            <Filter>((([highway]='primary') or ([highway]='primary_link')) and ([layer]='1'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary;</CssParameter>
                <CssParameter name="stroke-width">7</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici 1. třídy">
            <Filter>((([highway]='primary') or ([highway]='primary_link')) and ([layer]='1'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary;</CssParameter>
                <CssParameter name="stroke-width">9.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici 1. třídy">
            <Filter>((([highway]='primary') or ([highway]='primary_link')) and ([layer]='1'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary;</CssParameter>
                <CssParameter name="stroke-width">14.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="primarybridge_layer2_casing">
    <Rule title="most na silnici 1. třídy">
            <Filter>((([highway]='primary') or ([highway]='primary_link')) and ([layer]='2'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">8.6</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici 1. třídy">
            <Filter>((([highway]='primary') or ([highway]='primary_link')) and ([layer]='2'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke-width">12.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici 1. třídy">
            <Filter>((([highway]='primary') or ([highway]='primary_link')) and ([layer]='2'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke-width">17.5</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="primarybridge_layer2_fill">
    <Rule title="most na silnici 1. třídy">
            <Filter>((([highway]='primary') or ([highway]='primary_link')) and ([layer]='2'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary;</CssParameter>
                <CssParameter name="stroke-width">7</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici 1. třídy">
            <Filter>((([highway]='primary') or ([highway]='primary_link')) and ([layer]='2'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary;</CssParameter>
                <CssParameter name="stroke-width">9.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici 1. třídy">
            <Filter>((([highway]='primary') or ([highway]='primary_link')) and ([layer]='2'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary;</CssParameter>
                <CssParameter name="stroke-width">14.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="road-bridges-casing">
    <Rule title="dálniční most">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway_background;</CssParameter>
                <CssParameter name="stroke-width">4.6</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary_background;</CssParameter>
                <CssParameter name="stroke-width">4.1</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici 2. třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">10</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici 2. třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke-width">12.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici 2. třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke-width">17.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici 3. třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke-width">7.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici 3. třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke-width">11</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici 3. třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke-width">16</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na ostatní silnici">
            <Filter>(((([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified')) or ([highway]='road') or ([highway]='service'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke-width">4.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na ostatní silnici">
            <Filter>(((([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified')) or ([highway]='road') or ([highway]='service'))</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke-width">9</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na ostatní silnici">
            <Filter>(((([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified')) or ([highway]='road') or ([highway]='service'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke-width">11</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na ostatní silnici">
            <Filter>(((([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified')) or ([highway]='road') or ([highway]='service'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke-width">16</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!most v pěší zóně">
            <Filter>([highway]='pedestrian')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">2.2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!most v pěší zóně">
            <Filter>([highway]='pedestrian')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke-width">3.8</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!most v pěší zóně">
            <Filter>([highway]='pedestrian')</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke-width">7</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!most v pěší zóně">
            <Filter>([highway]='pedestrian')</Filter>
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke-width">9.5</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="road-bridges-fill">
    <Rule title="dálniční most">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici 2. třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary;</CssParameter>
                <CssParameter name="stroke-width">9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici 2. třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary;</CssParameter>
                <CssParameter name="stroke-width">10.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici 2. třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary;</CssParameter>
                <CssParameter name="stroke-width">14.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici 3. třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tertiary;</CssParameter>
                <CssParameter name="stroke-width">6</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici 3. třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tertiary;</CssParameter>
                <CssParameter name="stroke-width">9.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici 3. třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tertiary;</CssParameter>
                <CssParameter name="stroke-width">14</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na ostatní silnici">
            <Filter>((([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified')  or ([highway]='service'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na ostatní silnici">
            <Filter>((([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified')  or ([highway]='service'))</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential;</CssParameter>
                <CssParameter name="stroke-width">7.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na ostatní silnici">
            <Filter>((([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified')  or ([highway]='service'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential;</CssParameter>
                <CssParameter name="stroke-width">9.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na ostatní silnici">
            <Filter>((([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified')  or ([highway]='service'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential;</CssParameter>
                <CssParameter name="stroke-width">14</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_road;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_road;</CssParameter>
                <CssParameter name="stroke-width">7.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_road;</CssParameter>
                <CssParameter name="stroke-width">9.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="most na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_road;</CssParameter>
                <CssParameter name="stroke-width">14</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!most v pěší zóně">
            <Filter>([highway]='pedestrian')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_pedestrian;</CssParameter>
                <CssParameter name="stroke-width">1.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!most v pěší zóně">
            <Filter>([highway]='pedestrian')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_pedestrian;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!most v pěší zóně">
            <Filter>([highway]='pedestrian')</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_pedestrian;</CssParameter>
                <CssParameter name="stroke-width">5.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!most v pěší zóně">
            <Filter>([highway]='pedestrian')</Filter>
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_pedestrian;</CssParameter>
                <CssParameter name="stroke-width">8</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="roads-casing">
    <Rule title="dálnice, rychlostní silnice">
            <Filter>(([highway]='motorway') or ([highway]='trunk'))</Filter>
            &minscale_zoom6;
            &maxscale_zoom6;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway_background;</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálnice, rychlostní silnice">
            <Filter>(([highway]='motorway') or ([highway]='trunk'))</Filter>
            &minscale_zoom8;
            &maxscale_zoom7;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway_background;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálnice, rychlostní silnice">
            <Filter>(([highway]='motorway') or ([highway]='trunk'))</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway_background;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálnice, rychlostní silnice">
            <Filter>(([highway]='motorway') or ([highway]='trunk'))</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway_background;</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálnice, rychlostní silnice">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway_background;</CssParameter>
                <CssParameter name="stroke-width">4.6</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 1. třídy">
            <Filter>([highway]='primary')</Filter>
            &minscale_zoom8;
            &maxscale_zoom7;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary_background;</CssParameter>
                <CssParameter name="stroke-width">2.4</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 1. třídy">
            <Filter>([highway]='primary')</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary_background;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 1. třídy">
            <Filter>([highway]='primary')</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary_background;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary_background;</CssParameter>
                <CssParameter name="stroke-width">4.1</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 2. třídy">
            <Filter>([highway]='secondary')</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary_background;</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 2. třídy">
            <Filter>([highway]='secondary')</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary_background;</CssParameter>
                <CssParameter name="stroke-width">2.8</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 2. třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary_background;</CssParameter>
                <CssParameter name="stroke-width">3.6</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="roads">
    <Rule title="dálnice, rychlostní silnice">
            <Filter>(([highway]='motorway') or ([highway]='trunk'))</Filter>
            &minscale_zoom6;
            &maxscale_zoom6;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">1</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálnice, rychlostní silnice">
            <Filter>(([highway]='motorway') or ([highway]='trunk'))</Filter>
            &minscale_zoom8;
            &maxscale_zoom7;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">1.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálnice, rychlostní silnice">
            <Filter>(([highway]='motorway') or ([highway]='trunk'))</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálnice, rychlostní silnice">
            <Filter>(([highway]='motorway') or ([highway]='trunk'))</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálnice, rychlostní silnice">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 1. třídy">
            <Filter>([highway]='primary')</Filter>
            &minscale_zoom8;
            &maxscale_zoom7;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary;</CssParameter>
                <CssParameter name="stroke-width">1</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 1. třídy">
            <Filter>([highway]='primary')</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary;</CssParameter>
                <CssParameter name="stroke-width">1.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 1. třídy">
            <Filter>([highway]='primary')</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary;</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 2. třídy">
            <Filter>([highway]='secondary')</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary;</CssParameter>
                <CssParameter name="stroke-width">1.2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 2. třídy">
            <Filter>([highway]='secondary')</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary;</CssParameter>
                <CssParameter name="stroke-width">1.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="silnice 2. třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="železnice">
            <Filter>([railway]='rail')</Filter>
            &minscale_zoom9;
            &maxscale_zoom8;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_railway;</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="elektrifikovaná železnice">
            <Filter>([railway]='rail' and ([electrified]='yes' or [electrified]='contact_line'))</Filter>
            &minscale_zoom11;
            &maxscale_zoom10;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_railway;</CssParameter>
                <CssParameter name="stroke-width">3.4</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">1, 8</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="železnice">
            <Filter>([railway]='rail')</Filter>
            &minscale_zoom11;
            &maxscale_zoom10;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_railway;</CssParameter>
                <CssParameter name="stroke-width">1.2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="úzkorozchodná železnice">
            <Filter>([railway]='narrow_gauge')</Filter>
            &minscale_zoom12;
            &maxscale_zoom10;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_railway;</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="historická železnice">
            <Filter>([railway]='preserved')</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_railway;</CssParameter>
                <CssParameter name="stroke-width">1.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="historická železnice">
            <Filter>([railway]='preserved')</Filter>
            &minscale_zoom18;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_railway;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_white;</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-dasharray">0, 1, 8, 1</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="trams">
    <Rule title="koleje tramvají">
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tram;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-dasharray">1, 8</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tram;</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="koleje tramvají">
            &minscale_zoom18;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tram;</CssParameter>
                <CssParameter name="stroke-width">5</CssParameter>
                <CssParameter name="stroke-dasharray">1, 8</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tram;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="tunnels-casing">
    <Rule title="dálniční tunel">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway_background;</CssParameter>
                <CssParameter name="stroke-width">4.6</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálniční tunel">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway_background;</CssParameter>
                <CssParameter name="stroke-width">6.6</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálniční tunel">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway_background;</CssParameter>
                <CssParameter name="stroke-width">10.1</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálniční tunel">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway_background;</CssParameter>
                <CssParameter name="stroke-width">13</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel silnice 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary_background;</CssParameter>
                <CssParameter name="stroke-width">4.1</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel silnice 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary_background;</CssParameter>
                <CssParameter name="stroke-width">8.6</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel silnice 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary_background;</CssParameter>
                <CssParameter name="stroke-width">12.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel silnice 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary_background;</CssParameter>
                <CssParameter name="stroke-width">17.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel silnice 2. třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary_background;</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel silnice 2. třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary_background;</CssParameter>
                <CssParameter name="stroke-width">10</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel silnice 2. třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary_background;</CssParameter>
                <CssParameter name="stroke-width">12.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel silnice 2. třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary_background;</CssParameter>
                <CssParameter name="stroke-width">17.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel silnice 3. třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tertiary_background;</CssParameter>
                <CssParameter name="stroke-width">6</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel silnice 3. třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tertiary_background;</CssParameter>
                <CssParameter name="stroke-width">7.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel ostatní silnice">
            <Filter>(((([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified')) )</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential_background;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel ostatní silnice">
            <Filter>(((([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified')) )</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential_background;</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_road_background;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_road_background;</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel silnice 3. třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tertiary_background;</CssParameter>
                <CssParameter name="stroke-width">11</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel ostatní silnice">
            <Filter>(((([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified')) )</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential_background;</CssParameter>
                <CssParameter name="stroke-width">8.1</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel ostatní silnice">
            <Filter>(((([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified')) )</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential_background;</CssParameter>
                <CssParameter name="stroke-width">11</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_road_background;</CssParameter>
                <CssParameter name="stroke-width">8.1</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_road_background;</CssParameter>
                <CssParameter name="stroke-width">11</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel silnice 3. třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tertiary_background;</CssParameter>
                <CssParameter name="stroke-width">16</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel ostatní silnice">
            <Filter>((((([highway]='tertiary') or ([highway]='residential')) or ([highway]='minor')) or ([highway]='unclassified')) )</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential_background;</CssParameter>
                <CssParameter name="stroke-width">16</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_road_background;</CssParameter>
                <CssParameter name="stroke-width">16</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="tunnels-fill">
    <Rule title="dálniční tunel">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway_tunnel;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálniční tunel">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway_tunnel;</CssParameter>
                <CssParameter name="stroke-width">5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálniční tunel">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway_tunnel;</CssParameter>
                <CssParameter name="stroke-width">8.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="dálniční tunel">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_motorway_tunnel;</CssParameter>
                <CssParameter name="stroke-width">11</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel silnice 1.třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary_tunnel;</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel silnice 1.třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary_tunnel;</CssParameter>
                <CssParameter name="stroke-width">7</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel silnice 1.třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary_tunnel;</CssParameter>
                <CssParameter name="stroke-width">11</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel silnice 1.třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_primary_tunnel;</CssParameter>
                <CssParameter name="stroke-width">15</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel silnice 2.třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary_tunnel;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel silnice 2.třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary_tunnel;</CssParameter>
                <CssParameter name="stroke-width">8</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel silnice 2.třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary_tunnel;</CssParameter>
                <CssParameter name="stroke-width">11</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel silnice 2.třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_secondary_tunnel;</CssParameter>
                <CssParameter name="stroke-width">15</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel silnice 3.třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tertiary_tunnel;</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel silnice 3.třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tertiary_tunnel;</CssParameter>
                <CssParameter name="stroke-width">6</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel ostatní silnice">
            <Filter>(((([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified')) )</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential_tunnel;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel ostatní silnice">
            <Filter>(((([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified')) )</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential_tunnel;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_road_tunnel;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_road_tunnel;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel silnice 3.třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tertiary_tunnel;</CssParameter>
                <CssParameter name="stroke-width">9.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel silnice 3.třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_tertiary_tunnel;</CssParameter>
                <CssParameter name="stroke-width">13</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel ostatní silnice">
            <Filter>(((([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified')) )</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential_tunnel;</CssParameter>
                <CssParameter name="stroke-width">6.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel ostatní silnice">
            <Filter>(((([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified')) )</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential_tunnel;</CssParameter>
                <CssParameter name="stroke-width">9.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_road_tunnel;</CssParameter>
                <CssParameter name="stroke-width">6.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_road_tunnel;</CssParameter>
                <CssParameter name="stroke-width">9.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel ostatní silnice">
            <Filter>(((([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified')) )</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_residential_tunnel;</CssParameter>
                <CssParameter name="stroke-width">13</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tunel na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_road_tunnel;</CssParameter>
                <CssParameter name="stroke-width">13</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="turning_circle">
    <Rule title="!točna pro auta">
            &minscale_zoom16;
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;turning_circle.15.png" type="png" width="15" height="15"></PointSymbolizer>
    </Rule>
    <Rule title="">
            &maxscale_zoom17;
            <PointSymbolizer file="&symbols-path;turning_circle.19.png" type="png" width="19" height="19"></PointSymbolizer>
    </Rule>
</Style>

