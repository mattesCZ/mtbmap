<!-- styles for basic unpaved tracks: highway='track' -->
<Style name="tracks-bridges">
    <Rule title="zpevněná cesta">
            <Filter>([tracktype]='grade1')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255,255,255)</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(72,72,72)</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
                <CssParameter name="stroke-opacity">0.7</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="štěrková nebo kamenitá cesta">
            <Filter>([tracktype]='grade2')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">4.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255,255,255)</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(72,72,72)</CssParameter>
                <CssParameter name="stroke-width">1.8</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">12, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="částečně nezpevněná cesta">
            <Filter>([tracktype]='grade3')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">4.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255,255,255)</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(72,72,72)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">7, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="nezpevněná cesta hlinitá">
            <Filter>([tracktype]='grade4')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">4.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255,255,255)</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(72,72,72)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">4, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="nezpevněná cesta travnatá">
            <Filter>([tracktype]='grade5')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">4.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255,255,255)</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(72,72,72)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">2, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní nezpevněná cesta">
            <ElseFilter/>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">4.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255,255,255)</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(72,72,72)</CssParameter>
                <CssParameter name="stroke-width">1.8</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">5, 3, 2, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="tracks-notunnel-nobridge">
    <Rule title="zpevněná cesta">
            <Filter>([tracktype]='grade1')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255,255,255)</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-opacity">0.4</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(72,72,72)</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="štěrková nebo kamenitá cesta">
            <Filter>([tracktype]='grade2')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255,255,255)</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-opacity">0.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(72,72,72)</CssParameter>
                <CssParameter name="stroke-width">1.8</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">12, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="částečně nezpevněná cesta">
            <Filter>([tracktype]='grade3')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255,255,255)</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-opacity">0.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(72,72,72)</CssParameter>
                <CssParameter name="stroke-width">1.8</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">7, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="nezpevněná cesta hlinitá">
            <Filter>([tracktype]='grade4')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255,255,255)</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-opacity">0.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(72,72,72)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">4, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="nezpevněná cesta travnatá">
            <Filter>([tracktype]='grade5')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255,255,255)</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-opacity">0.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(72,72,72)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">2, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní nezpevněná cesta">
            <ElseFilter/>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255,255,255)</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-opacity">0.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(72,72,72)</CssParameter>
                <CssParameter name="stroke-width">1.8</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">5, 3, 2, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="tracks-tunnels">
    <Rule title="zpevněná cesta">
            <Filter>([tracktype]='grade1')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(128,128,128)</CssParameter>
                <CssParameter name="stroke-width">5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255,255,255)</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(72,72,72)</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="štěrková nebo kamenitá cesta">
            <Filter>([tracktype]='grade2')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(128,128,128)</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255,255,255)</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(72,72,72)</CssParameter>
                <CssParameter name="stroke-width">1.8</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">12, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="částečně zpevněná cesta">
            <Filter>([tracktype]='grade3')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(128,128,128)</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255,255,255)</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(72,72,72)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">7, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="nezpevněná cesta hlinitá">
            <Filter>([tracktype]='grade4')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(128,128,128)</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255,255,255)</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(72,72,72)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">4, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="nezpevněná cesta travnatá">
            <Filter>([tracktype]='grade5')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(128,128,128)</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255,255,255)</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(72,72,72)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">2, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní nezpevněná cesta">
            <ElseFilter/>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(128,128,128)</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255,255,255)</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(72,72,72)</CssParameter>
                <CssParameter name="stroke-width">1.8</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">5, 3, 2, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>

