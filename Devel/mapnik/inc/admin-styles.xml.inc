<!-- staty - level 2; kraje - level 4 -->
<Style name="admin-01234">
    <Rule>
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
    <Rule>
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
    <Rule>
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
    <Rule>
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

