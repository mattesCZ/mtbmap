<Style name="water_areas">
    <Rule>
            <Filter>([natural]='glacier')</Filter>
            &minscale_zoom7;
            &maxscale_zoom6;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(153,204,255)</CssParameter>
                <CssParameter name="stroke-width">1.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <PolygonPatternSymbolizer file="&symbols-path;glacier.png" type="png" width="40" height="32"></PolygonPatternSymbolizer>
    </Rule>
    <Rule>
            <Filter>([natural]='glacier')</Filter>
            &maxscale_zoom8;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(153,204,255)</CssParameter>
                <CssParameter name="stroke-width">1.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <PolygonPatternSymbolizer file="&symbols-path;glacier2.png" type="png" width="70" height="56"></PolygonPatternSymbolizer>
    </Rule>
    <Rule>
            <Filter>(((((([waterway]='dock') or ([landuse]='reservoir')) or ([landuse]='water')) or ([waterway]='mill_pond')) or ([waterway]='riverbank')) or ([waterway]='canal'))</Filter>
            &maxscale_zoom9;
            &minscale_zoom10;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(114,155,249)</CssParameter>
            </PolygonSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">0.4</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>(((((([waterway]='dock') or ([landuse]='reservoir')) or ([landuse]='water')) or ([waterway]='mill_pond')) or ([waterway]='riverbank')) or ([waterway]='canal'))</Filter>
            &maxscale_zoom11;
            &minscale_zoom13;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(114,155,249)</CssParameter>
            </PolygonSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">0.8</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>(((((([waterway]='dock') or ([landuse]='reservoir')) or ([landuse]='water')) or ([waterway]='mill_pond')) or ([waterway]='riverbank')) or ([waterway]='canal'))</Filter>
            &maxscale_zoom14;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(114,155,249)</CssParameter>
            </PolygonSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">1.2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>([landuse]='basin')</Filter>
            &maxscale_zoom7;
            &minscale_zoom10;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(114,155,249)</CssParameter>
            </PolygonSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">0.4</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>([landuse]='basin')</Filter>
            &maxscale_zoom11;
            &minscale_zoom13;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(114,155,249)</CssParameter>
            </PolygonSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">0.8</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>([landuse]='basin')</Filter>
            &maxscale_zoom14;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(114,155,249)</CssParameter>
            </PolygonSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">1.2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([natural]='lake') or ([natural]='water'))</Filter>
            &maxscale_zoom6;
            &minscale_zoom10;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(114,155,249)</CssParameter>
            </PolygonSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">0.4</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([natural]='lake') or ([natural]='water'))</Filter>
            &maxscale_zoom11;
            &minscale_zoom13;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(114,155,249)</CssParameter>
            </PolygonSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">0.8</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([natural]='lake') or ([natural]='water'))</Filter>
            &maxscale_zoom14;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(114,155,249)</CssParameter>
            </PolygonSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">1.2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([natural]='marsh') or ([natural]='wetland'))</Filter>
            &maxscale_zoom13;
            <PolygonPatternSymbolizer file="&symbols-path;marsh.png" type="png" width="30" height="30"></PolygonPatternSymbolizer>
    </Rule>
    <Rule>
            <Filter>([natural]='scrub')</Filter>
            &maxscale_zoom13;
            <PolygonPatternSymbolizer file="&symbols-path;scrub.png" type="png" width="30" height="30"></PolygonPatternSymbolizer>
    </Rule>
    <Rule>
            <Filter>([natural]='land')</Filter>
            &maxscale_zoom10;
            <PolygonSymbolizer>
                <CssParameter name="fill">rgb(242,239,233)</CssParameter>
            </PolygonSymbolizer>
    </Rule>
</Style>
<Style name="water_lines_fill">
    <Rule>
            <Filter>([waterway]='weir')</Filter>
            &minscale_zoom18;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(170,170,170)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom8;
            &maxscale_zoom8;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(114,155,249)</CssParameter>
                <CssParameter name="stroke-width">0.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom10;
            &maxscale_zoom9;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(114,155,249)</CssParameter>
                <CssParameter name="stroke-width">0.8</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom12;
            &maxscale_zoom11;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(114,155,249)</CssParameter>
                <CssParameter name="stroke-width">1.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(114,155,249)</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(114,155,249)</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(114,155,249)</CssParameter>
                <CssParameter name="stroke-width">5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom17;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(114,155,249)</CssParameter>
                <CssParameter name="stroke-width">9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom18;
            &maxscale_zoom18;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(114,155,249)</CssParameter>
                <CssParameter name="stroke-width">11</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([waterway]='canal') and not (([disused]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom11;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(114,155,249)</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([waterway]='canal') and not (([disused]='yes')))</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(114,155,249)</CssParameter>
                <CssParameter name="stroke-width">3.2</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <TextSymbolizer name="name" fontset_name="book-fonts" size="8" fill="rgb(102,153,204)" placement="line" halo_radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <ElseFilter/>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(114,155,249)</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([waterway]='river') and ([tunnel]='yes'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(114,155,249)</CssParameter>
                <CssParameter name="stroke-width">5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255,255,255)</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
            </LineSymbolizer>
            <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="rgb(102,153,204)" placement="line" halo_radius="1" min_distance="200"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([waterway]='river') and ([tunnel]='yes'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(114,155,249)</CssParameter>
                <CssParameter name="stroke-width">6</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255,255,255)</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
            </LineSymbolizer>
            <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="rgb(102,153,204)" placement="line" halo_radius="1" min_distance="200"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([waterway]='river') and ([tunnel]='yes'))</Filter>
            &minscale_zoom17;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(114,155,249)</CssParameter>
                <CssParameter name="stroke-width">10</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255,255,255)</CssParameter>
                <CssParameter name="stroke-width">7</CssParameter>
            </LineSymbolizer>
            <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="rgb(102,153,204)" placement="line" halo_radius="1" min_distance="200"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([waterway]='river') and ([tunnel]='yes'))</Filter>
            &maxscale_zoom18;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(114,155,249)</CssParameter>
                <CssParameter name="stroke-width">12</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255,255,255)</CssParameter>
                <CssParameter name="stroke-width">9</CssParameter>
            </LineSymbolizer>
            <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="rgb(102,153,204)" placement="line" halo_radius="1" min_distance="200"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([waterway]='canal') and ([tunnel]='yes'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(114,155,249)</CssParameter>
                <CssParameter name="stroke-width">6</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255,255,255)</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
            </LineSymbolizer>
            <TextSymbolizer name="name" fontset_name="book-fonts" size="9" fill="rgb(102,153,204)" placement="line" halo_radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([waterway]='canal') and not ((([tunnel]='yes') or ([disused]='yes'))))</Filter>
            &minscale_zoom16;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(114,155,249)</CssParameter>
                <CssParameter name="stroke-width">6</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <TextSymbolizer name="name" fontset_name="book-fonts" size="9" fill="rgb(102,153,204)" placement="line" halo_radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([waterway]='canal') and ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(114,155,249)</CssParameter>
                <CssParameter name="stroke-width">10</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255,255,255)</CssParameter>
                <CssParameter name="stroke-width">7</CssParameter>
            </LineSymbolizer>
            <TextSymbolizer name="name" fontset_name="book-fonts" size="9" fill="rgb(102,153,204)" placement="line" halo_radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([waterway]='canal') and not ((([tunnel]='yes') or ([disused]='yes'))))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(114,155,249)</CssParameter>
                <CssParameter name="stroke-width">10</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <TextSymbolizer name="name" fontset_name="book-fonts" size="9" fill="rgb(102,153,204)" placement="line" halo_radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([waterway]='derelict_canal') or (([waterway]='canal') and ([disused]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom11;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(181,228,208)</CssParameter>
                <CssParameter name="stroke-width">1.0</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
                <CssParameter name="stroke-dasharray">4, 4</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([waterway]='derelict_canal') or (([waterway]='canal') and ([disused]='yes')))</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(181,228,208)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
                <CssParameter name="stroke-dasharray">4, 6</CssParameter>
            </LineSymbolizer>
            <TextSymbolizer name="name" fontset_name="book-fonts" size="9" fill="rgb(128,209,174)" placement="line" halo_radius="1" spacing="600"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([waterway]='derelict_canal') or (([waterway]='canal') and ([disused]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(181,228,208)</CssParameter>
                <CssParameter name="stroke-width">3.8</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
                <CssParameter name="stroke-dasharray">4, 8</CssParameter>
            </LineSymbolizer>
            <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="rgb(128,209,174)" placement="line" halo_radius="1" spacing="600"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>((([waterway]='stream') or ([waterway]='drain')) and ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(114,155,249)</CssParameter>
                <CssParameter name="stroke-width">2.0</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(243,247,247)</CssParameter>
                <CssParameter name="stroke-width">1.2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>((([waterway]='stream') or ([waterway]='drain')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(114,155,249)</CssParameter>
                <CssParameter name="stroke-width">1</CssParameter>
            </LineSymbolizer>
            <TextSymbolizer name="name" fontset_name="book-fonts" size="8" fill="rgb(102,153,204)" placement="line" halo_radius="1" spacing="600"></TextSymbolizer>
    </Rule>
    <Rule>
            <ElseFilter/>
            &minscale_zoom18;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(114,155,249)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="water_lines_casing">
    <Rule>
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom8;
            &maxscale_zoom8;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">0.8</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom10;
            &maxscale_zoom9;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">1.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom12;
            &maxscale_zoom11;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">5.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">6.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom17;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">11</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom18;
            &maxscale_zoom18;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">13</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([waterway]='canal') and not (([disused]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom11;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([waterway]='canal') and not (([disused]='yes')))</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <ElseFilter/>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([waterway]='river') and ([tunnel]='yes'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">6.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([waterway]='river') and ([tunnel]='yes'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">7.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([waterway]='river') and ([tunnel]='yes'))</Filter>
            &minscale_zoom17;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">12</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([waterway]='river') and ([tunnel]='yes'))</Filter>
            &maxscale_zoom18;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">14</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([waterway]='canal') and ([tunnel]='yes'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">7.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([waterway]='canal') and not ((([tunnel]='yes') or ([disused]='yes'))))</Filter>
            &minscale_zoom16;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">7.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([waterway]='canal') and ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">12</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([waterway]='canal') and not ((([tunnel]='yes') or ([disused]='yes'))))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">12</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>((([waterway]='stream') or ([waterway]='drain')) and ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">2.9</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>((([waterway]='stream') or ([waterway]='drain')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(80,109,177)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="waterway-bridges">
    <Rule>
            &minscale_zoom16;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke-width">7</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(114,155,249)</CssParameter>
                <CssParameter name="stroke-width">6</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <TextSymbolizer name="name" fontset_name="book-fonts" size="9" fill="rgb(102,153,204)" placement="line" halo_radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke-width">11</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(114,155,249)</CssParameter>
                <CssParameter name="stroke-width">10</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <TextSymbolizer name="name" fontset_name="book-fonts" size="9" fill="rgb(102,153,204)" placement="line" halo_radius="1"></TextSymbolizer>
    </Rule>
</Style>
