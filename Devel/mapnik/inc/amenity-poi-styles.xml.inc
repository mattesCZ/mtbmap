<!-- -->
<Style name="barriers">
    <Rule title="živý plot">
            <Filter>(([natural]='hedge') or ([barrier]='hedge'))</Filter>
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(174,209,160)</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="plot, zeď">
            <Filter>(([barrier]&lt;&gt;'') and not (([barrier]='hedge')))</Filter>
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke-width">0.4</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="buildings">
    <Rule title="!železniční stanice">
            <Filter>(([railway]='station') or ([building]='station'))</Filter>
            &maxscale_zoom10;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(212,170,170)</CssParameter>
            </PolygonSymbolizer>
    </Rule>
    <Rule title="!supermarket">
            <Filter>([building]='supermarket')</Filter>
            &maxscale_zoom10;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(255,192,203)</CssParameter>
                <CssParameter name="fill-opacity">0.5</CssParameter>
            </PolygonSymbolizer>
    </Rule>
    <Rule title="!náboženský chrám">
            <Filter>([amenity]='place_of_worship')</Filter>
            &minscale_zoom14;
            &maxscale_zoom10;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(119,119,119)</CssParameter>
                <CssParameter name="fill-opacity">0.5</CssParameter>
            </PolygonSymbolizer>
    </Rule>
    <Rule title="!náboženský chrám">
            <Filter>([amenity]='place_of_worship')</Filter>
            &maxscale_zoom15;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(119,119,119)</CssParameter>
                <CssParameter name="fill-opacity">0.5</CssParameter>
            </PolygonSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(17,17,17)</CssParameter>
                <CssParameter name="stroke-width">0.3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!sportoviště, dráha">
            <Filter>([leisure]='track')</Filter>
            &maxscale_zoom10;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(116,220,186)</CssParameter>
            </PolygonSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(136,136,136)</CssParameter>
                <CssParameter name="stroke-width">0.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="budova">
            <Filter>(((([building]&lt;&gt;'station') and ([building]&lt;&gt;'supermarket')) and ([building]&lt;&gt;'')) and (not (([amenity]&lt;&gt;'')) or ([amenity]&lt;&gt;'place_of_worship')))</Filter>
            &maxscale_zoom10;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(188,169,169)</CssParameter>
            </PolygonSymbolizer>
    </Rule>
    <Rule title="!terminál letiště">
            <Filter>([aeroway]='terminal')</Filter>
            &maxscale_zoom12;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(204,153,255)</CssParameter>
            </PolygonSymbolizer>
    </Rule>
    <Rule title="!terminál letiště">
            <Filter>([aeroway]='terminal')</Filter>
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(51,0,102)</CssParameter>
                <CssParameter name="stroke-width">0.2</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<!--<Style name="citywalls">
    <Rule title="">
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(128,128,128)</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
                <CssParameter name="stroke-opacity">0.8</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="">
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(128,128,128)</CssParameter>
                <CssParameter name="stroke-width">6</CssParameter>
                <CssParameter name="stroke-opacity">0.8</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="">
            &minscale_zoom18;
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(128,128,128)</CssParameter>
                <CssParameter name="stroke-width">9</CssParameter>
                <CssParameter name="stroke-opacity">0.8</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>-->
<Style name="dam">
    <Rule title="hráz">
            &minscale_zoom18;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(68,68,68)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="hráz">
            &maxscale_zoom15;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="8" fill="rgb(34,34,34)" halo_radius="1"></TextSymbolizer>
    </Rule>
</Style>
<Style name="points">
    <Rule title="horská chata">
            <Filter>([tourism]='alpine_hut')</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;alpinehut.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="přístřešek">
            <Filter>([amenity]='shelter')</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;shelter2.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="bankomat">
            <Filter>([amenity]='atm')</Filter>
            &maxscale_zoom17;
            <PointSymbolizer file="&symbols-path;atm2.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="banka">
            <Filter>([amenity]='bank')</Filter>
            &maxscale_zoom17;
            <PointSymbolizer file="&symbols-path;bank2.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="bar">
            <Filter>([amenity]='bar')</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;bar.p.20.png" type="png" width="20" height="20"></PointSymbolizer>
    </Rule>
    <Rule title="půjčovna jízdních kol">
            <Filter>([amenity]='bicycle_rental')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;rental_bicycle.p.20.png" type="png" width="20" height="20"></PointSymbolizer>
    </Rule>
    <Rule title="zastávka autobusů">
            <Filter>(([amenity]='bus_stop') or ([highway]='bus_stop'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;bus_stop_small.png" type="png" width="3" height="3"></PointSymbolizer>
    </Rule>
    <Rule title="zastávka autobusů">
            <Filter>(([amenity]='bus_stop') or ([highway]='bus_stop'))</Filter>
            &maxscale_zoom17;
            <PointSymbolizer file="&symbols-path;bus_stop.p.12.png" type="png" width="12" height="12"></PointSymbolizer>
    </Rule>
    <Rule title="autobusové nádraží">
            <Filter>([amenity]='bus_station')</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;bus_station.n.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="semafor">
            <Filter>([highway]='traffic_signals')</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;traffic_light.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="kavárna">
            <Filter>([amenity]='cafe')</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;cafe.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="kemp">
            <Filter>([tourism]='camp_site')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;camping.n.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="kemp pro karavany">
            <Filter>([tourism]='caravan_site')</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;caravan_park.p.24.png" type="png" width="24" height="24"></PointSymbolizer>
    </Rule>
    <Rule title="půjčovna aut">
            <Filter>([amenity]='car_sharing')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;car_share.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="kino">
            <Filter>([amenity]='cinema')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;cinema.p.24.png" type="png" width="24" height="24"></PointSymbolizer>
    </Rule>
    <Rule title="požární zbrojnice">
            <Filter>([amenity]='fire_station')</Filter>
            &maxscale_zoom17;
            <PointSymbolizer file="&symbols-path;firestation.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="čerpací stanice">
            <Filter>([amenity]='fuel')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;fuel.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="penzion">
            <Filter>([tourism]='guest_house')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;guest_house.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="nemocnice">
            <Filter>([amenity]='hospital')</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;hospital.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="hostel">
            <Filter>([tourism]='hostel')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;hostel.p.20.png" type="png" width="20" height="20"></PointSymbolizer>
    </Rule>
    <Rule title="hotel">
            <Filter>([tourism]='hotel')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;hotel2.p.20.png" type="png" width="20" height="20"></PointSymbolizer>
    </Rule>
    <Rule title="ambasáda">
            <Filter>([amenity]='embassy')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;embassy.png" type="png" width="12" height="12"></PointSymbolizer>
    </Rule>
    <Rule title="knihovna">
            <Filter>([amenity]='library')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;library.p.20.png" type="png" width="20" height="20"></PointSymbolizer>
    </Rule>
    <Rule title="muzeum">
            <Filter>([tourism]='museum')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;museum.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="parkoviště">
            <Filter>(([amenity]='parking') and (([access]='public') or not (([access]&lt;&gt;''))))</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;parking.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="lékárna">
            <Filter>([amenity]='pharmacy')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;pharmacy.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="kostel">
            <Filter>(([amenity]='place_of_worship') and ([religion]='christian'))</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;christian3.p.14.png" type="png" width="14" height="14"></PointSymbolizer>
    </Rule>
    <Rule title="mešita">
            <Filter>(([amenity]='place_of_worship') and ([religion]='muslim'))</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;islamic3.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="chrám sikhů">
            <Filter>(([amenity]='place_of_worship') and ([religion]='sikh'))</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;sikh3.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="synagoga">
            <Filter>(([amenity]='place_of_worship') and ([religion]='jewish'))</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;jewish3.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="náboženský chrám">
            <Filter>([amenity]='place_of_worship')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;place_of_worship3.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="policejní stanice">
            <Filter>([amenity]='police')</Filter>
            &maxscale_zoom17;
            <PointSymbolizer file="&symbols-path;police.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="poštovní schránka">
            <Filter>([amenity]='post_box')</Filter>
            &maxscale_zoom17;
            <PointSymbolizer file="&symbols-path;post_box.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="pošta">
            <Filter>([amenity]='post_office')</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;post_office.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="hospoda">
            <Filter>([amenity]='pub')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;pub.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="recyklace">
            <Filter>([amenity]='recycling')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;recycling.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="restaurace">
            <Filter>([amenity]='restaurant')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;restaurant.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="rychlé občerstvení">
            <Filter>([amenity]='fast_food')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;fast_food.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="telefonní budka">
            <Filter>([amenity]='telephone')</Filter>
            &maxscale_zoom17;
            <PointSymbolizer file="&symbols-path;telephone.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="divadlo">
            <Filter>([amenity]='theatre')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;theatre.p.20.png" type="png" width="20" height="20"></PointSymbolizer>
    </Rule>
    <Rule title="veřejné toalety">
            <Filter>([amenity]='toilets')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;toilets.p.20.png" type="png" width="20" height="20"></PointSymbolizer>
    </Rule>
    <Rule title="pitná voda">
            <Filter>([amenity]='drinking_water')</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;food_drinkingtap.p.20.png" type="png" width="20" height="20"></PointSymbolizer>
    </Rule>
    <Rule title="věznice">
            <Filter>([amenity]='prison')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;amenity_prison.p.20.png" type="png" width="20" height="20"></PointSymbolizer>
    </Rule>
    <Rule title="místo rozhledu">
            <Filter>([tourism]='viewpoint' and not [man_made]='tower')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;view_point.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
    </Rule>
    <Rule title="vodojem">
            <Filter>([man_made]='water_tower')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;tower_water.p.20.png" type="png" width="20" height="20"></PointSymbolizer>
    </Rule>
</Style>
<Style name="stations">
    <Rule title="nádraží">
            <Filter>(([railway]='station') and not (([disused]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <PointSymbolizer file="&symbols-path;halt.png" type="png" width="4" height="4"></PointSymbolizer>
    </Rule>
    <Rule title="nádraží">
            <Filter>(([railway]='station') and not (([disused]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;station_small.png" type="png" width="6" height="6"></PointSymbolizer>
    </Rule>
    <Rule title="nádraží">
            <Filter>(([railway]='station') and not (([disused]='yes')))</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;station.png" type="png" width="9" height="9"></PointSymbolizer>
    </Rule>
    <Rule title="železniční a tramvajová zastávka">
            <Filter>((([railway]='halt') or ([railway]='tram_stop')) or ([aerialway]='station'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;halt.png" type="png" width="4" height="4"></PointSymbolizer>
    </Rule>
    <Rule title="železniční a tramvajová zastávka">
            <Filter>((([railway]='halt') or ([railway]='tram_stop')) or ([aerialway]='station'))</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;station_small.png" type="png" width="6" height="6"></PointSymbolizer>
    </Rule>
    <Rule title="!popis železniční zastávky">
            <Filter>(([railway]='halt') or ([aerialway]='station'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="8" fill="rgb(3,3,3)" dy="-8" vertical_alignment="top" halo_radius="1"></TextSymbolizer>
    </Rule>
    <Rule title="!popis železniční zastávky">
            <Filter>(([railway]='halt') or ([aerialway]='station'))</Filter>
            &maxscale_zoom15;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="rgb(3,3,3)" dy="-10" vertical_alignment="top" halo_radius="1"></TextSymbolizer>
    </Rule>
    <Rule title="!popis zastávky tramvají">
            <Filter>([railway]='tram_stop')</Filter>
            &maxscale_zoom16;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="rgb(3,3,3)" dy="-10" vertical_alignment="top" halo_radius="1"></TextSymbolizer>
    </Rule>
    <Rule title="!popis nádraží">
            <Filter>(([railway]='station') and not (([disused]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <TextSymbolizer name="name" fontset_name="bold-fonts" size="9" fill="rgb(3,3,3)" dy="-8" vertical_alignment="top" halo_radius="1"></TextSymbolizer>
    </Rule>
    <Rule title="!popis nádraží">
            <Filter>(([railway]='station') and not (([disused]='yes')))</Filter>
            &maxscale_zoom15;
            <TextSymbolizer name="name" fontset_name="bold-fonts" size="11" fill="rgb(3,3,3)" dy="-14" vertical_alignment="top" halo_radius="1"></TextSymbolizer>
    </Rule>
</Style>
<Style name="symbols">
    <Rule title="!popis letiště">
            <Filter>([aeroway]='airport')</Filter>
            &minscale_zoom18;
            &maxscale_zoom13;
            <TextSymbolizer name="name" fontset_name="bold-fonts" size="9" fill="rgb(0,0,0)" halo_radius="1"></TextSymbolizer>
    </Rule>
    <Rule title="letiště">
            <Filter>([aeroway]='aerodrome')</Filter>
            &maxscale_zoom11;
            <PointSymbolizer file="&symbols-path;airport.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
            <TextSymbolizer name="name" fontset_name="oblique-fonts" size="8" fill="rgb(0,0,0)" dy="-12" vertical_alignment="top" halo_radius="1"></TextSymbolizer>
    </Rule>
    <Rule title="železniční přejezd">
            <Filter>([railway]='level_crossing')</Filter>
            &minscale_zoom15;
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;level_crossing.png" type="png" width="7" height="7"></PointSymbolizer>
    </Rule>
    <Rule title="železniční přejezd">
            <Filter>([railway]='level_crossing')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;level_crossing2.png" type="png" width="11" height="11"></PointSymbolizer>
    </Rule>
    <Rule title="maják">
            <Filter>([man_made]='lighthouse')</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;lighthouse.p.20.png" type="png" width="20" height="20"></PointSymbolizer>
    </Rule>
    <Rule title="vrchol">
            <Filter>([natural]='peak')</Filter>
            &maxscale_zoom11;
            <PointSymbolizer file="&symbols-path;peak.png" type="png" width="8" height="8"></PointSymbolizer>
    </Rule>
    <Rule title="rozcestí tras KČT">
      &maxscale_zoom14;
      <Filter>[amenity]='signpost' or [information]='guidepost'</Filter>
      <PointSymbolizer file= "&symbols-path;signpost2.png" type="png" width="12" height="24"/>
    </Rule>
    <Rule title="pramen">
            <Filter>([natural]='spring')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;spring09.png" type="png" width="9" height="9"></PointSymbolizer>
    </Rule>
    <Rule title="památný strom">
            <Filter>([natural]='tree')</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;tree.png" type="png" width="3" height="3"></PointSymbolizer>
    </Rule>
    <Rule title="památný strom">
            <Filter>([natural]='tree')</Filter>
            &maxscale_zoom17;
            <PointSymbolizer file="&symbols-path;tree2.png" type="png" width="5" height="5"></PointSymbolizer>
    </Rule>
    <Rule title="jeskyně">
            <Filter>([natural]='cave_entrance')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;cave20.png" type="png" width="20" height="15"></PointSymbolizer>
    </Rule>
    <Rule title="větrná elektrárna">
            <Filter>(([man_made]='power_wind') or (([power]='generator') and ([power_source]='wind')))</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;power_wind.png" type="png" width="16" height="26"></PointSymbolizer>
    </Rule>
    <Rule title="větrný mlýn">
            <Filter>([man_made]='windmill')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;windmill.png" type="png" width="10" height="15"></PointSymbolizer>
    </Rule>
    <Rule title="vysílač">
            <Filter>(([man_made]='tower') and (([tower:type]='communication') or ([tower:type]='bts')))</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;communications.p.18.png" type="png" width="17" height="36"></PointSymbolizer>
    </Rule>
    <Rule title="rozhledna">
            <Filter>(([man_made]='tower') and ([tower:type]='observation'))</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;observation.p.18.png" type="png" width="11" height="36"></PointSymbolizer>
    </Rule>
    <Rule title="kruhový objezd">
            <Filter>([highway]='mini_roundabout')</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;mini_round.png" type="png" width="9" height="9"></PointSymbolizer>
    </Rule>
    <Rule title="brána, závora">
            <Filter>(([highway]='gate') or ([barrier]='gate'))</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;gate2.png" type="png" width="7" height="5"></PointSymbolizer>
    </Rule>
    <Rule title="sloupek proti vjezdu">
            <Filter>([barrier]='bollard')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;bollard.png" type="png" width="3" height="3"></PointSymbolizer>
    </Rule>
    <Rule title="cyklistická prodejna">
            <Filter>([shop]='bicycle')</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;shop_bicycle.png" type="png" width="20" height="12"></PointSymbolizer>
    </Rule>
    <Rule title="zřícenina">
            <Filter>(([historic]='ruins') or ([historic]='castle' and [ruins]='yes'))</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;ruins12.png" type="png" width="12" height="12"></PointSymbolizer>
    </Rule>
    <Rule title="hrad, zámek">
            <Filter>(([historic]='castle') and ([castle_type]='stately' or [castle_type]='schloss'))</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;castle14.png" type="png" width="15" height="14"></PointSymbolizer>
    </Rule>
    <Rule title="hrad, zámek">
            <Filter>([historic]='castle' and ([castle_type]='burg' or [castle_type]='defensive'))</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;burg18.png" type="png" width="17" height="18"></PointSymbolizer>
    </Rule>
    <Rule title="hrad, zámek">
            <Filter>([historic]='castle')</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;castle14.png" type="png" width="15" height="14"></PointSymbolizer>
    </Rule>
    <Rule title="informační tabule">
            <Filter>([information]='board')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;infoBoard12.png" type="png" width="12" height="12"></PointSymbolizer>
    </Rule>
    <Rule title="tabule s mapou">
            <Filter>([information]='map')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;infoMap14.png" type="png" width="14" height="14"></PointSymbolizer>
    </Rule>
    <Rule title="infocentrum">
            <Filter>([information]='office')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;infoOffice14.png" type="png" width="14" height="14"></PointSymbolizer>
    </Rule>
</Style>
<Style name="symbols-poly">
    <Rule title="!letiště">
            <Filter>([aeroway]='airport')</Filter>
            &maxscale_zoom11;
            <PointSymbolizer file="&symbols-path;airport.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
            <TextSymbolizer name="name" fontset_name="bold-fonts" size="8" fill="rgb(0,0,0)" dy="-12" vertical_alignment="top" halo_radius="1"></TextSymbolizer>
    </Rule>
    <Rule title="!letiště">
            <Filter>([aeroway]='aerodrome')</Filter>
            &maxscale_zoom11;
            <PointSymbolizer file="&symbols-path;airport.p.16.png" type="png" width="16" height="16"></PointSymbolizer>
            <TextSymbolizer name="name" fontset_name="oblique-fonts" size="8" fill="rgb(0,0,0)" dy="-12" vertical_alignment="top" halo_radius="1"></TextSymbolizer>
    </Rule>
    <Rule title="!železniční přejezd">
            <Filter>([railway]='level_crossing')</Filter>
            &minscale_zoom15;
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;level_crossing.png" type="png" width="7" height="7"></PointSymbolizer>
    </Rule>
    <Rule title="!železniční přejezd">
            <Filter>([railway]='level_crossing')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;level_crossing2.png" type="png" width="11" height="11"></PointSymbolizer>
    </Rule>
    <Rule title="!maják">
            <Filter>([man_made]='lighthouse')</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;lighthouse.p.20.png" type="png" width="20" height="20"></PointSymbolizer>
    </Rule>
    <Rule title="!vrchol">
            <Filter>([natural]='peak')</Filter>
            &maxscale_zoom11;
            <PointSymbolizer file="&symbols-path;peak.png" type="png" width="8" height="8"></PointSymbolizer>
    </Rule>
    <Rule title="!rozcestí tras KČT">
      &maxscale_zoom14;
      <Filter>[amenity]='signpost'</Filter>
      <PointSymbolizer file= "&symbols-path;signpost2.png" type="png" width="12" height="12"/>
    </Rule>
    <Rule title="!pramen">
            <Filter>([natural]='spring')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;spring09.png" type="png" width="9" height="9"></PointSymbolizer>
    </Rule>
    <Rule title="!památný strom">
            <Filter>([natural]='tree')</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;tree.png" type="png" width="3" height="3"></PointSymbolizer>
    </Rule>
    <Rule title="!památný strom">
            <Filter>([natural]='tree')</Filter>
            &maxscale_zoom17;
            <PointSymbolizer file="&symbols-path;tree2.png" type="png" width="5" height="5"></PointSymbolizer>
    </Rule>
<!--    <Rule title="">
            <Filter>(([man_made]='power_wind') or (([power]='generator') and ([power_source]='wind')))</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;power_wind.png" type="png" width="16" height="26"></PointSymbolizer>
    </Rule>-->
    <Rule title="!větrný mlýn">
            <Filter>([man_made]='windmill')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;windmill.png" type="png" width="10" height="15"></PointSymbolizer>
    </Rule>
    <Rule title="!vysílač">
            <Filter>(([man_made]='tower') and (([tower:type]='communication') or ([tower:type]='bts')))</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;communications.p.18.png" type="png" width="17" height="36"></PointSymbolizer>
    </Rule>
    <Rule title="!rozhledna">
            <Filter>(([man_made]='tower') and ([tower:type]='observation'))</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;observation.p.18.png" type="png" width="11" height="36"></PointSymbolizer>
    </Rule>
    <Rule title="!kruhový objezd">
            <Filter>([highway]='mini_roundabout')</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;mini_round.png" type="png" width="9" height="9"></PointSymbolizer>
    </Rule>
    <Rule title="!brána, závora">
            <Filter>(([highway]='gate') or ([barrier]='gate'))</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;gate2.png" type="png" width="7" height="5"></PointSymbolizer>
    </Rule>
    <Rule title="!sloupek proti vjezdu">
            <Filter>([barrier]='bollard')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;bollard.png" type="png" width="3" height="3"></PointSymbolizer>
    </Rule>
    <Rule title="!cyklistická prodejna">
            <Filter>([shop]='bicycle')</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;shop_bicycle.png" type="png" width="20" height="12"></PointSymbolizer>
    </Rule>
    <Rule title="zřícenina">
            <Filter>(([historic]='ruins') or ([historic]='castle' and [ruins]='yes'))</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;ruins12.png" type="png" width="12" height="12"></PointSymbolizer>
    </Rule>
    <Rule title="hrad, zámek">
            <Filter>(([historic]='castle') and ([castle_type]='stately' or [castle_type]='schloss'))</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;castle14.png" type="png" width="15" height="14"></PointSymbolizer>
    </Rule>
    <Rule title="hrad, zámek">
            <Filter>([historic]='castle' and ([castle_type]='burg' or [castle_type]='defensive'))</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;burg18.png" type="png" width="17" height="18"></PointSymbolizer>
    </Rule>
    <Rule title="hrad, zámek">
            <Filter>([historic]='castle')</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;castle14.png" type="png" width="15" height="14"></PointSymbolizer>
    </Rule>
    <Rule title="informační tabule">
            <Filter>([information]='board')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;infoBoard12.png" type="png" width="12" height="12"></PointSymbolizer>
    </Rule>
    <Rule title="tabule s mapou">
            <Filter>([information]='map')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;infoMap14.png" type="png" width="14" height="14"></PointSymbolizer>
    </Rule>
    <Rule title="infocentrum">
            <Filter>([information]='office')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;infoOffice14.png" type="png" width="14" height="14"></PointSymbolizer>
    </Rule>
</Style>

