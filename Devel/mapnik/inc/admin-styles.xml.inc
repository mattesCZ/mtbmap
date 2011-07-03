<!-- staty - level 2; kraje - level 4 -->
<Style name="admin-01234">
    <Rule title="státní hranice">
            <Filter>(([admin_level]='2') or ([admin_level]='3'))</Filter>
            &minscale_zoom6;
            &maxscale_zoom2;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(64,64,64)</CssParameter>
                <CssParameter name="stroke-width">1.5</CssParameter>
                <CssParameter name="stroke-opacity">0.6</CssParameter>
                <CssParameter name="stroke-dasharray">12, 6, 4, 6</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="státní hranice">
            <Filter>(([admin_level]='2') or ([admin_level]='3'))</Filter>
            &minscale_zoom9;
            &maxscale_zoom7;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(64,64,64)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.6</CssParameter>
                <CssParameter name="stroke-dasharray">12, 6, 4, 6</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="státní hranice">
            <Filter>(([admin_level]='2') or ([admin_level]='3'))</Filter>
            &maxscale_zoom10;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(64,64,64)</CssParameter>
                <CssParameter name="stroke-width">5</CssParameter>
                <CssParameter name="stroke-opacity">0.6</CssParameter>
                <CssParameter name="stroke-dasharray">12, 6, 4, 6</CssParameter>
            </LineSymbolizer>
    </Rule>
<!--    <Rule>
            <Filter>([admin_level]='4')</Filter>
            &minscale_zoom6;
            &maxscale_zoom4;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(64,64,64)</CssParameter>
                <CssParameter name="stroke-width">1</CssParameter>
                <CssParameter name="stroke-opacity">0.3</CssParameter>
                <CssParameter name="stroke-dasharray">12, 6</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>([admin_level]='4')</Filter>
            &minscale_zoom10;
            &maxscale_zoom7;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(64,64,64)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.3</CssParameter>
                <CssParameter name="stroke-dasharray">12, 6</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>([admin_level]='4')</Filter>
            &maxscale_zoom11;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(64,64,64)</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
                <CssParameter name="stroke-opacity">0.3</CssParameter>
                <CssParameter name="stroke-dasharray">12, 6</CssParameter>
            </LineSymbolizer>
    </Rule>
-->
</Style>
<!-- okresy -->
<Style name="admin-5678">
    <Rule title="okresní hranice">
            <Filter>(([admin_level]='6') or ([admin_level]='7'))</Filter>
            &maxscale_zoom11;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(64,64,64)</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-opacity">0.3</CssParameter>
                <CssParameter name="stroke-dasharray">6,3</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="boundary">
    <Rule title="chráněné území">
            &minscale_zoom12;
            &maxscale_zoom10;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(0,128,0)</CssParameter>
                <CssParameter name="fill-opacity">0.1</CssParameter>
            </PolygonSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(0,128,0)</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-opacity">0.4</CssParameter>
                <CssParameter name="stroke-dasharray">6, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="chráněné území">
            &minscale_zoom18;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(0,128,0)</CssParameter>
                <CssParameter name="stroke-width">5</CssParameter>
                <CssParameter name="stroke-opacity">0.4</CssParameter>
                <CssParameter name="stroke-dasharray">6, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="!popis chráněného území">
            &minscale_zoom11;
            &maxscale_zoom10;
            <TextSymbolizer name="name" fontset_name="bold-fonts" size="11" fill="rgb(153,204,153)" halo_radius="1" wrap_width="14"></TextSymbolizer>
    </Rule>
</Style>

