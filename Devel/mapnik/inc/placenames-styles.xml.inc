<!-- styles for placenames - countries, cities, villages etc. -->

<!-- large -->
<Style name="country">
    <Rule>
            <Filter>([place]='country')</Filter>
            &minscale_zoom3;
            &maxscale_zoom2;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="14" fill="rgb(157,108,157)" halo_radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([place]='country')</Filter>
            &minscale_zoom7;
            &maxscale_zoom4;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="18" fill="rgb(157,108,157)" halo_radius="1"></TextSymbolizer>
    </Rule>
</Style>
<Style name="state">
    <Rule>
            <Filter>([place]='state')</Filter>
            &minscale_zoom4;
            &maxscale_zoom4;
            <TextSymbolizer name="ref" fontset_name="oblique-fonts" size="15" fill="rgb(157,108,157)" halo_radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([place]='state')</Filter>
            &minscale_zoom6;
            &maxscale_zoom5;
            <TextSymbolizer name="name" fontset_name="oblique-fonts" size="15" fill="rgb(157,108,157)" halo_radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([place]='state')</Filter>
            &minscale_zoom8;
            &maxscale_zoom7;
            <TextSymbolizer name="name" fontset_name="oblique-fonts" size="18" fill="rgb(157,108,157)" halo_radius="1"></TextSymbolizer>
    </Rule>
</Style>
<Style name="capital">
    <Rule>
            <Filter>(([place]='city') or ([place]='metropolis'))</Filter>
            &minscale_zoom6;
            &maxscale_zoom6;
            <PointSymbolizer file="&symbols-path;capital12.png" type="png" width="12" height="12"></PointSymbolizer>
            <TextSymbolizer name="upper" fontset_name="book-fonts" size="14" fill="rgb(0,0,0)" halo_radius="1" dy="-8" horizontal_alignment="right"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([place]='city') or ([place]='metropolis'))</Filter>
            &minscale_zoom8;
            &maxscale_zoom7;
            <PointSymbolizer file="&symbols-path;capital16.png" type="png" width="16" height="16"></PointSymbolizer>
            <TextSymbolizer name="upper" fontset_name="book-fonts" size="18" fill="rgb(0,0,0)" halo_radius="1" dy="-9" horizontal_alignment="right"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([place]='city') or ([place]='metropolis'))</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <PointSymbolizer file="&symbols-path;capital20.png" type="png" width="20" height="20"></PointSymbolizer>
            <TextSymbolizer name="upper" fontset_name="book-fonts" size="18" fill="rgb(0,0,0)" halo_radius="1" dy="-12" horizontal_alignment="right"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([place]='city') or ([place]='metropolis'))</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <PointSymbolizer file="&symbols-path;capital30.png" type="png" width="30" height="30"></PointSymbolizer>
            <TextSymbolizer name="upper" fontset_name="book-fonts" size="20" fill="rgb(0,0,0)" halo_radius="1" dy="-16" horizontal_alignment="right"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([place]='city') or ([place]='metropolis'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom11;
            <TextSymbolizer name="upper" fontset_name="book-fonts" size="24" fill="rgb(0,0,0)" halo_radius="1"></TextSymbolizer>
    </Rule>
</Style>

<!-- medium -->
<Style name="city">
    <Rule>
            <Filter>(([place]='city') or ([place]='metropolis'))</Filter>
            &minscale_zoom7;
            &maxscale_zoom7;
            <PointSymbolizer file="&symbols-path;city09.png" type="png" width="9" height="9"></PointSymbolizer>
            <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="rgb(0,0,0)" halo_radius="1" dy="-8" horizontal_alignment="right"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([place]='city') or ([place]='metropolis'))</Filter>
            &minscale_zoom8;
            &maxscale_zoom8;
            <PointSymbolizer file="&symbols-path;city12.png" type="png" width="12" height="12"></PointSymbolizer>
            <TextSymbolizer name="name" fontset_name="book-fonts" size="12" fill="rgb(0,0,0)" halo_radius="1" dy="-9" horizontal_alignment="right"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([place]='city') or ([place]='metropolis') or (([place]='town') and ([population]&gt;50000)))</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <PointSymbolizer file="&symbols-path;city15.png" type="png" width="15" height="15"></PointSymbolizer>
            <TextSymbolizer name="name" fontset_name="book-fonts" size="13" fill="rgb(0,0,0)" halo_radius="1" dy="-11" horizontal_alignment="right"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([place]='city') or ([place]='metropolis') or (([place]='town') and ([population]&gt;50000)))</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <PointSymbolizer file="&symbols-path;city20.png" type="png" width="20" height="20"></PointSymbolizer>
            <TextSymbolizer name="name" fontset_name="book-fonts" size="13" fill="rgb(0,0,0)" halo_radius="1" dy="-14" horizontal_alignment="right"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([place]='city') or ([place]='metropolis'))</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <TextSymbolizer name="upper" fontset_name="book-fonts" size="16" fill="rgb(0,0,0)" halo_radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([place]='city') or ([place]='metropolis'))</Filter>
            &minscale_zoom13;
            &maxscale_zoom12;
            <TextSymbolizer name="upper" fontset_name="book-fonts" size="20" fill="rgb(0,0,0)" halo_radius="1"></TextSymbolizer>
    </Rule>

</Style>
<Style name="town">
    <Rule>
            <Filter>((([place]='town') or ([place]='large_town') or ([place]='small_town')) and not ([population]&gt;50000))</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <PointSymbolizer file="&symbols-path;town10.png" type="png" width="10" height="10"></PointSymbolizer>
            <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="rgb(0,0,0)" halo_radius="1" wrap_width="20" dx="10" horizontal_alignment="right"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([place]='town') or ([place]='large_town') or ([place]='small_town'))</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="14" fill="rgb(0,0,0)" halo_radius="1" wrap_width="20"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>((([place]='town') or ([place]='large_town')) or ([place]='small_town'))</Filter>
            &minscale_zoom13;
            &maxscale_zoom12;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="18" fill="rgb(0,0,0)" halo_radius="1" wrap_width="20"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>((([place]='town') or ([place]='large_town')) or ([place]='small_town'))</Filter>
            &maxscale_zoom14;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="22" fill="rgb(0,0,0)" halo_radius="1" wrap_width="20"></TextSymbolizer>
    </Rule>
</Style>

<!-- small -->
<Style name="suburb">
    <Rule>
            <Filter>([place]='suburb')</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="12" fill="rgb(0,0,0)" halo_radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([place]='suburb')</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="16" fill="rgb(0,0,0)" halo_radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([place]='suburb')</Filter>
            &maxscale_zoom15;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="18" fill="rgb(0,0,0)" halo_radius="1"></TextSymbolizer>
    </Rule>
</Style>
<Style name="village">
    <Rule>
            <Filter>(([place]='village') or ([place]='large_village'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="rgb(0,0,0)" halo_radius="1" dy="15"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([place]='village') or ([place]='large_village'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="14" fill="rgb(0,0,0)" halo_radius="1" dy="15"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([place]='village') or ([place]='large_village'))</Filter>
            &maxscale_zoom15;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="18" fill="rgb(0,0,0)" halo_radius="1"></TextSymbolizer>
    </Rule>
</Style>
<Style name="hamlet">
    <Rule>
            <Filter>(([place]='hamlet') or ([place]='locality'))</Filter>
            &minscale_zoom15;
            &maxscale_zoom14;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="12" fill="rgb(0,0,0)" halo_radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([place]='hamlet') or ([place]='locality'))</Filter>
            &maxscale_zoom16;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="16" fill="rgb(0,0,0)" halo_radius="1"></TextSymbolizer>
    </Rule>
</Style>

