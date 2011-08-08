<!-- styles for landuse -->
<Style name="cliffs">
    <Rule title="útes, skála">
            <Filter>([natural]='cliff')</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LinePatternSymbolizer file="&symbols-path;cliff.png" type="png" width="10" height="4"></LinePatternSymbolizer>
    </Rule>
    <Rule title="útes, skála">
            <Filter>([natural]='cliff')</Filter>
            &maxscale_zoom15;
            <LinePatternSymbolizer file="&symbols-path;cliff2.png" type="png" width="12" height="6"></LinePatternSymbolizer>
    </Rule>
    <Rule title="násep">
            <Filter>([man_made]='embankment')</Filter>
            &maxscale_zoom15;
            <LinePatternSymbolizer file="&symbols-path;cliff.png" type="png" width="10" height="4"></LinePatternSymbolizer>
    </Rule>
</Style>
<Style name="leisure">
<!--    <Rule title="přístaviště">
            <Filter>([leisure]='marina')</Filter>
            &maxscale_zoom10;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(114,155,249)</CssParameter>
            </PolygonSymbolizer>
    </Rule>-->
    <Rule title="hřiště">
            <Filter>([leisure]='playground')</Filter>
            &maxscale_zoom13;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(204,255,241)</CssParameter>
            </PolygonSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(102,102,102)</CssParameter>
                <CssParameter name="stroke-width">0.3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="tábořiště">
            <Filter>((([tourism]='camp_site') or ([tourism]='caravan_site')) or ([tourism]='picnic_site'))</Filter>
            &maxscale_zoom13;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(204,255,153)</CssParameter>
                <CssParameter name="fill-opacity">0.5</CssParameter>
            </PolygonSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(102,102,102)</CssParameter>
                <CssParameter name="stroke-width">0.3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!turistická zajímavost">
            <Filter>([tourism]='attraction')</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(242,202,234)</CssParameter>
            </PolygonSymbolizer>
    </Rule>
    <Rule title="důl">
            <Filter>([landuse]='quarry')</Filter>
            &maxscale_zoom11;
            <PolygonPatternSymbolizer file="&symbols-path;quarry2.png" type="png" width="30" height="30"></PolygonPatternSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(128,128,128)</CssParameter>
                <CssParameter name="stroke-width">0.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="přírodní rezervace, vinice">
            <Filter>(([leisure]='nature_reserve') or ([landuse]='vineyard') or ([landuse]='orchard'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom11;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(171,223,150)</CssParameter>
            </PolygonSymbolizer>
    </Rule>
    <Rule title="vinice">
            <Filter>([landuse]='vineyard')</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <PolygonPatternSymbolizer file="&symbols-path;vineyard.png" type="png" width="19" height="21"></PolygonPatternSymbolizer>
    </Rule>
    <Rule title="vinice">
            <Filter>([landuse]='vineyard')</Filter>
            &maxscale_zoom15;
            <PolygonPatternSymbolizer file="&symbols-path;vineyard.png" type="png" width="29" height="29"></PolygonPatternSymbolizer>
    </Rule>
    <Rule title="ovocný sad">
            <Filter>([landuse]='orchard')</Filter>
            &maxscale_zoom13;
            <PolygonPatternSymbolizer file="&symbols-path;orchard.png" type="png" width="29" height="29"></PolygonPatternSymbolizer>
    </Rule>
    <Rule title="přírodní rezervace">
            <Filter>([leisure]='nature_reserve')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <PolygonPatternSymbolizer file="&symbols-path;nature_reserve.png" type="png" width="21" height="24"></PolygonPatternSymbolizer>
    </Rule>
    <Rule title="přírodní rezervace">
            <Filter>([leisure]='nature_reserve')</Filter>
            &maxscale_zoom14;
            <PolygonPatternSymbolizer file="&symbols-path;nature_reserve2.png" type="png" width="42" height="48"></PolygonPatternSymbolizer>
    </Rule>
    <Rule title="hřbitov">
            <Filter>(([landuse]='cemetery') or ([amenity]='grave_yard'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom11;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(170,203,175)</CssParameter>
            </PolygonSymbolizer>
    </Rule>
    <Rule title="zastavěná plocha">
            <Filter>([landuse]='residential')</Filter>
            &minscale_zoom18;
            &maxscale_zoom11;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(221,221,221)</CssParameter>
            </PolygonSymbolizer>
    </Rule>
    <Rule title="vojenský objekt">
            <Filter>([military]='barracks')</Filter>
            &minscale_zoom18;
            &maxscale_zoom11;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(255,143,143)</CssParameter>
            </PolygonSymbolizer>
    </Rule>
    <Rule title="vojenský prostor">
            <Filter>([military]='danger_area' or [landuse]='military')</Filter>
            &minscale_zoom18;
            &maxscale_zoom11;
            <PolygonPatternSymbolizer file="&symbols-path;military_red_hz2.png" type="png" width="24" height="24"></PolygonPatternSymbolizer>
            <LineSymbolizer>
              <CssParameter name="stroke">#f55</CssParameter>
              <CssParameter name="stroke-width">3</CssParameter>
              <CssParameter name="stroke-opacity">0.329</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="hřbitov">
            <Filter>(([landuse]='cemetery') or ([amenity]='grave_yard'))</Filter>
            &maxscale_zoom14;
            <PolygonPatternSymbolizer file="&symbols-path;grave_yard.png" type="png" width="16" height="16"></PolygonPatternSymbolizer>
    </Rule>
    <Rule title="louka">
            <Filter>(([landuse]='meadow') or ([landuse]='grass') or ([natural]='fell'))</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer>
                <CssParameter name="fill">&color_grass;</CssParameter>
            </PolygonSymbolizer>
    </Rule>
    <Rule title="park, zahrada">
            <Filter>(([leisure]='park') or ([leisure]='dog_park') or ([landuse]='recreation_ground') or ([landuse]='village_green') or ([leisure]='garden'))</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer>
                <CssParameter name="fill">&color_park;</CssParameter>
                <CssParameter name="fill-opacity">0.8</CssParameter>
            </PolygonSymbolizer>
    </Rule>
    <Rule title="zoologická zahrada">
            <Filter>([tourism]='zoo')</Filter>
            &maxscale_zoom11;
            <PolygonPatternSymbolizer file="&symbols-path;zoo.png" type="png" width="21" height="24"></PolygonPatternSymbolizer>
    </Rule>
<!--    <Rule title="volné prostranství">
            <Filter>([leisure]='common')</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(207,236,168)</CssParameter>
            </PolygonSymbolizer>
    </Rule>-->
    <Rule title="golfové hřiště">
            <Filter>([leisure]='golf_course')</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(181,227,181)</CssParameter>
            </PolygonSymbolizer>
    </Rule>
    <Rule title="zahrádkářská kolonie">
            <Filter>([landuse]='allotments')</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(200,176,132)</CssParameter>
            </PolygonSymbolizer>
    </Rule>
    <Rule title="les">
            <Filter>([landuse]='forest')</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer>
                <CssParameter name="fill">&color_forest;</CssParameter>
            </PolygonSymbolizer>
    </Rule>
    <Rule title="prales">
            <Filter>([natural]='wood')</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer>
                <CssParameter name="fill">&color_wood;</CssParameter>
            </PolygonSymbolizer>
    </Rule>
    <Rule title="farma">
            <Filter>([landuse]='farmyard')</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(221,191,146)</CssParameter>
            </PolygonSymbolizer>
    </Rule>
    <Rule title="zemědělská plocha">
            <Filter>(([landuse]='farm') or ([landuse]='farmland'))</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(234,216,189)</CssParameter>
            </PolygonSymbolizer>
    </Rule>
    <Rule title="">
            <Filter>([landuse]='retail')</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(241,218,218)</CssParameter>
            </PolygonSymbolizer>
    </Rule>
    <Rule title="průmyslová plocha">
            <Filter>(([landuse]='industrial') or ([landuse]='railway'))</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(223,209,214)</CssParameter>
            </PolygonSymbolizer>
    </Rule>
    <Rule title="transformační stanice">
            <Filter>([power]='station')</Filter>
            &maxscale_zoom12;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(187,187,187)</CssParameter>
            </PolygonSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(85,85,85)</CssParameter>
                <CssParameter name="stroke-width">0.4</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="transformační stanice">
            <Filter>([power]='sub_station')</Filter>
            &maxscale_zoom13;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(187,187,187)</CssParameter>
            </PolygonSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(85,85,85)</CssParameter>
                <CssParameter name="stroke-width">0.4</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="plocha určená k výstavbě">
            <Filter>(((([landuse]='brownfield') or ([landuse]='landfill')) or ([landuse]='greenfield')) or ([landuse]='construction'))</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(157,157,108)</CssParameter>
            </PolygonSymbolizer>
    </Rule>
    <Rule title="škola">
            <Filter>((((([amenity]='university') or ([amenity]='college')) or ([amenity]='school')) or ([amenity]='hospital')) or ([amenity]='kindergarten'))</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(240,240,216)</CssParameter>
            </PolygonSymbolizer>
    </Rule>
    <Rule title="škola">
            <Filter>((((([amenity]='university') or ([amenity]='college')) or ([amenity]='school')) or ([amenity]='hospital')) or ([amenity]='kindergarten'))</Filter>
            &maxscale_zoom12;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(165,42,42)</CssParameter>
                <CssParameter name="stroke-width">0.3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="parkoviště">
            <Filter>([amenity]='parking')</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(247,239,183)</CssParameter>
            </PolygonSymbolizer>
    </Rule>
    <Rule title="parkoviště">
            <Filter>([amenity]='parking')</Filter>
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(238,238,209)</CssParameter>
                <CssParameter name="stroke-width">0.3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="letiště">
            <Filter>(([aeroway]='aerodrome') or ([aeroway]='apron'))</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(233,209,255)</CssParameter>
                <CssParameter name="fill-opacity">0.2</CssParameter>
            </PolygonSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(85,85,85)</CssParameter>
                <CssParameter name="stroke-width">0.2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="pláž">
            <Filter>([natural]='beach')</Filter>
            &maxscale_zoom13;
            <PolygonPatternSymbolizer file="&symbols-path;beach.png" type="png" width="10" height="10"></PolygonPatternSymbolizer>
    </Rule>
    <Rule title="strniště">
            <Filter>(([natural]='scrub') or ([natural]='heath'))</Filter>
            &maxscale_zoom11;
            <PolygonPatternSymbolizer file="&symbols-path;scrub.png" type="png" width="30" height="30"></PolygonPatternSymbolizer>
    </Rule>
</Style>
<Style name="piers">
    <Rule title="molo">
            &minscale_zoom12;
            &maxscale_zoom11;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(242,239,233)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="molo">
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(242,239,233)</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="molo">
            &minscale_zoom18;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(242,239,233)</CssParameter>
                <CssParameter name="stroke-width">7</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="piers-area">
    <Rule title="molo">
            &maxscale_zoom12;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(242,239,233)</CssParameter>
            </PolygonSymbolizer>
    </Rule>
</Style>
<Style name="power">
    <Rule title="elektrické vedení">
            &maxscale_zoom14;
            <LinePatternSymbolizer file="&symbols-path;power_line_cz.png" type="png" width="19" height="3">
            </LinePatternSymbolizer>
    </Rule>
</Style>
<Style name="power_towers">
    <Rule title="sloup elektrického vedení">
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;power_tower_cz.png" type="png" width="5" height="5"></PointSymbolizer>
    </Rule>
</Style>

<Style name="sports_grounds">
    <Rule title="sportoviště">
            &maxscale_zoom10;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(51,204,153)</CssParameter>
            </PolygonSymbolizer>
    </Rule>
</Style>

