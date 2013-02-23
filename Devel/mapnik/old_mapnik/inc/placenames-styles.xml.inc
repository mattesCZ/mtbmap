<!-- styles for placenames - countries, cities, villages etc. -->

<!-- large -->
<Style name="country">
    <Rule>
            <Filter>([place]='country')</Filter>
            &minscale_zoom3;
            &maxscale_zoom2;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="14" fill="&color_countries_text;" halo_radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([place]='country')</Filter>
            &minscale_zoom7;
            &maxscale_zoom4;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="18" fill="&color_countries_text;" halo_radius="1"></TextSymbolizer>
    </Rule>
</Style>
<Style name="state">
    <Rule>
            <Filter>([place]='state')</Filter>
            &minscale_zoom4;
            &maxscale_zoom4;
            <TextSymbolizer name="ref" fontset_name="oblique-fonts" size="15" fill="&color_countries_text;" halo_radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([place]='state')</Filter>
            &minscale_zoom6;
            &maxscale_zoom5;
            <TextSymbolizer name="name" fontset_name="oblique-fonts" size="15" fill="&color_countries_text;" halo_radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([place]='state')</Filter>
            &minscale_zoom8;
            &maxscale_zoom7;
            <TextSymbolizer name="name" fontset_name="oblique-fonts" size="18" fill="&color_countries_text;" halo_radius="1"></TextSymbolizer>
    </Rule>
</Style>
<Style name="capital">
    <Rule title="hlavní město">
            <Filter>(([place]='city') or ([place]='metropolis') or ([place]='town'))</Filter>
            &minscale_zoom6;
            &maxscale_zoom6;
            <PointSymbolizer file="&symbols-path;capital12.png" type="png" width="12" height="12"></PointSymbolizer>
            <TextSymbolizer name="upper" fontset_name="book-fonts" size="14" fill="&color_placenames_text;" halo_radius="1" dy="-8" horizontal_alignment="right"></TextSymbolizer>
    </Rule>
    <Rule title="hlavní město">
            <Filter>(([place]='city') or ([place]='metropolis') or ([place]='town'))</Filter>
            &minscale_zoom8;
            &maxscale_zoom7;
            <PointSymbolizer file="&symbols-path;capital16.png" type="png" width="16" height="16"></PointSymbolizer>
            <TextSymbolizer name="upper" fontset_name="book-fonts" size="18" fill="&color_placenames_text;" halo_radius="1" dy="-9" horizontal_alignment="right" allow_overlap="true"></TextSymbolizer>
    </Rule>
    <Rule title="hlavní město">
            <Filter>(([place]='city') or ([place]='metropolis') or ([place]='town'))</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <PointSymbolizer file="&symbols-path;capital24.png" type="png" width="24" height="24"></PointSymbolizer>
            <TextSymbolizer name="upper" fontset_name="book-fonts" size="18" fill="&color_placenames_text;" halo_radius="1" dy="-14" horizontal_alignment="right" allow_overlap="true"></TextSymbolizer>
    </Rule>
    <Rule title="hlavní město">
            <Filter>(([place]='city') or ([place]='metropolis') or ([place]='town'))</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <PointSymbolizer file="&symbols-path;capital30.png" type="png" width="30" height="30"></PointSymbolizer>
            <TextSymbolizer name="upper" fontset_name="book-fonts" size="20" fill="&color_placenames_text;" halo_radius="1" dy="-16" horizontal_alignment="right" allow_overlap="true"></TextSymbolizer>
    </Rule>
    <Rule title="!hlavní město">
            <Filter>(([place]='city') or ([place]='metropolis') or ([place]='town'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom11;
            <TextSymbolizer name="upper" fontset_name="book-fonts" size="24" fill="&color_placenames_text;" halo_radius="1" allow_overlap="true"></TextSymbolizer>
    </Rule>
</Style>

<!-- medium -->
<Style name="town">
    <Rule title="město s více než 100 000 obyv.">
            <Filter>([numericpop]&gt;100000)</Filter>
            &minscale_zoom7;
            &maxscale_zoom7;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="&color_placenames_text;" halo_radius="1" dx="10" horizontal_alignment="right"></TextSymbolizer>
    </Rule>
    <Rule title="město s více než 100 000 obyv.">
            <Filter>([numericpop]&gt;100000)</Filter>
            &minscale_zoom8;
            &maxscale_zoom8;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="13" fill="&color_placenames_text;" halo_radius="1" dx="10" horizontal_alignment="right" allow_overlap="true" ></TextSymbolizer>
    </Rule>
    <Rule title="město 50 001-100 000 obyv.">
            <Filter>(([numericpop]&gt;50000) and not ([numericpop]&gt;100000))</Filter>
            &minscale_zoom8;
            &maxscale_zoom8;
            <PointSymbolizer file="&symbols-path;city12.png" type="png" width="12" height="12"></PointSymbolizer>
            <TextSymbolizer name="name" fontset_name="book-fonts" size="11" fill="&color_placenames_text;" halo_radius="1" dx="10" horizontal_alignment="right" allow_overlap="true"></TextSymbolizer>
    </Rule>
    <Rule title="město s více než 100 000 obyv.">
            <Filter>([numericpop]&gt;100000)</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="15" fill="&color_placenames_text;" halo_radius="1" dx="12" horizontal_alignment="right" allow_overlap="true"></TextSymbolizer>
    </Rule>
    <Rule title="město 50 001-100 000 obyv.">
            <Filter>(([numericpop]&gt;50000) and not ([numericpop]&gt;100000))</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="13" fill="&color_placenames_text;" halo_radius="1" dx="10" horizontal_alignment="right" allow_overlap="true"></TextSymbolizer>
    </Rule>
    <Rule title="město 10 001-50 000 obyv.">
            <Filter>(([numericpop]&gt;10000) and not ([numericpop]&gt;50000))</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="&color_placenames_text;" halo_radius="1" wrap_width="30" dx="10" horizontal_alignment="right" allow_overlap="true"></TextSymbolizer>
    </Rule>
    <Rule title="město s více než 100 000 obyv.">
            <Filter>([numericpop]&gt;100000)</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <TextSymbolizer name="upper" fontset_name="book-fonts" size="15" fill="&color_placenames_text;" halo_radius="1" dx="12" horizontal_alignment="right" allow_overlap="true"></TextSymbolizer>
    </Rule>
    <Rule title="město 50 001-100 000 obyv.">
            <Filter>(([numericpop]&gt;50000) and not ([numericpop]&gt;100000))</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="13" fill="&color_placenames_text;" halo_radius="1" dx="10" horizontal_alignment="right" allow_overlap="true"></TextSymbolizer>
    </Rule>
    <Rule title="město 10 001-50 000 obyv.">
            <Filter>(([numericpop]&gt;10000) and not ([numericpop]&gt;50000))</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="11" fill="&color_placenames_text;" halo_radius="1" wrap_width="30" dx="10" horizontal_alignment="right" allow_overlap="true"></TextSymbolizer>
    </Rule>
    <Rule title="město s méně než 10 000">
            <Filter>((([place]='town') or ([place]='large_town') or ([place]='small_town')) and not ([numericpop]&gt;10000))</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="9" fill="&color_placenames_text;" halo_radius="1" wrap_width="30" dx="7" horizontal_alignment="right"></TextSymbolizer>
    </Rule>
    <Rule title="město s více než 100 000 obyv.">
            <Filter>([numericpop]&gt;100000)</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <TextSymbolizer name="upper" fontset_name="book-fonts" size="18" fill="&color_placenames_text;" halo_radius="1" wrap_width="30"></TextSymbolizer>
    </Rule>
    <Rule title="město 50 001-100 000 obyv.">
            <Filter>(([numericpop]&gt;50000) and not ([numericpop]&gt;100000))</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="16" fill="&color_placenames_text;" halo_radius="1" wrap_width="30"></TextSymbolizer>
    </Rule>
    <Rule title="město 10 001-50 000 obyv.">
            <Filter>(([numericpop]&gt;10000) and not ([numericpop]&gt;50000))</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="14" fill="&color_placenames_text;" halo_radius="1" wrap_width="30"></TextSymbolizer>
    </Rule>
    <Rule title="město s méně než 10 000">
            <Filter>((([place]='town') or ([place]='large_town') or ([place]='small_town')) and not ([numericpop]&gt;10000))</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="&color_placenames_text;" halo_radius="1" wrap_width="30"></TextSymbolizer>
    </Rule>
    <Rule title="město s více než 100 000 obyv.">
            <Filter>([numericpop]&gt;100000)</Filter>
            &minscale_zoom13;
            &maxscale_zoom12;
            <TextSymbolizer name="upper" fontset_name="book-fonts" size="20" fill="&color_placenames_text;" halo_radius="1" wrap_width="30"></TextSymbolizer>
    </Rule>
    <Rule title="město 50 001-100 000 obyv.">
            <Filter>(([numericpop]&gt;50000) and not ([numericpop]&gt;100000))</Filter>
            &minscale_zoom13;
            &maxscale_zoom12;
            <TextSymbolizer name="upper" fontset_name="book-fonts" size="15" fill="&color_placenames_text;" halo_radius="1" wrap_width="30"></TextSymbolizer>
    </Rule>
    <Rule title="město 10 001-50 000 obyv.">
            <Filter>(([numericpop]&gt;10000) and not ([numericpop]&gt;50000))</Filter>
            &minscale_zoom13;
            &maxscale_zoom12;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="14" fill="&color_placenames_text;" halo_radius="1" wrap_width="30"></TextSymbolizer>
    </Rule>
    <Rule title="město s méně než 10 000">
            <Filter>((([place]='town') or ([place]='large_town') or ([place]='small_town')) and not ([numericpop]&gt;10000))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="&color_placenames_text;" halo_radius="1" wrap_width="30"></TextSymbolizer>
    </Rule>
    <Rule title="město s méně než 10 000">
            <Filter>((([place]='town') or ([place]='large_town') or ([place]='small_town')) and not ([numericpop]&gt;10000))</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="14" fill="&color_placenames_text;" halo_radius="1" wrap_width="30"></TextSymbolizer>
    </Rule>
    <Rule title="město s více než 50 000 obyv.">
            <Filter>([numericpop]&gt;50000)</Filter>
            &maxscale_zoom14;
            &minscale_zoom15;
            <TextSymbolizer name="upper" fontset_name="book-fonts" size="22" fill="&color_placenames_text;" halo_radius="1" wrap_width="30"></TextSymbolizer>
    </Rule>
    <Rule title="město s méně než 50 000 obyv.">
            <ElseFilter />
            &maxscale_zoom14;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="22" fill="&color_placenames_text;" halo_radius="1" wrap_width="30"></TextSymbolizer>
    </Rule>
</Style>

<Style name="town-symbols">
    <Rule title="město s více než 100 000 obyv.">
            <Filter>([numericpop]&gt;100000)</Filter>
            &minscale_zoom7;
            &maxscale_zoom7;
            <PointSymbolizer file="&symbols-path;city09.png" type="png" width="9" height="9"></PointSymbolizer>
    </Rule>
    <Rule title="město s více než 100 000 obyv.">
            <Filter>([numericpop]&gt;100000)</Filter>
            &minscale_zoom8;
            &maxscale_zoom8;
            <PointSymbolizer file="&symbols-path;city15.png" type="png" width="15" height="15"></PointSymbolizer>
    </Rule>
    <Rule title="město 50 001-100 000 obyv.">
            <Filter>(([numericpop]&gt;50000) and not ([numericpop]&gt;100000))</Filter>
            &minscale_zoom8;
            &maxscale_zoom8;
            <PointSymbolizer file="&symbols-path;city12.png" type="png" width="12" height="12"></PointSymbolizer>
    </Rule>
    <Rule title="město s více než 100 000 obyv.">
            <Filter>([numericpop]&gt;100000)</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <PointSymbolizer file="&symbols-path;city20.png" type="png" width="20" height="20"></PointSymbolizer>
    </Rule>
    <Rule title="město 50 001-100 000 obyv.">
            <Filter>(([numericpop]&gt;50000) and not ([numericpop]&gt;100000))</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <PointSymbolizer file="&symbols-path;city15.png" type="png" width="15" height="15"></PointSymbolizer>
    </Rule>
    <Rule title="město 10 001-50 000 obyv.">
            <Filter>(([numericpop]&gt;10000) and not ([numericpop]&gt;50000))</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <PointSymbolizer file="&symbols-path;town12.png" type="png" width="12" height="12" allow_overlap="true" ></PointSymbolizer>
    </Rule>
    <Rule title="město s více než 100 000 obyv.">
            <Filter>([numericpop]&gt;100000)</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <PointSymbolizer file="&symbols-path;city20.png" type="png" width="20" height="20"></PointSymbolizer>
    </Rule>
    <Rule title="město 50 001-100 000 obyv.">
            <Filter>(([numericpop]&gt;50000) and not ([numericpop]&gt;100000))</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <PointSymbolizer file="&symbols-path;city15.png" type="png" width="15" height="15" ></PointSymbolizer>
    </Rule>
    <Rule title="město 10 001-50 000 obyv.">
            <Filter>(([numericpop]&gt;10000) and not ([numericpop]&gt;50000))</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <PointSymbolizer file="&symbols-path;town12.png" type="png" width="12" height="12" allow_overlap="true" ></PointSymbolizer>
    </Rule>
    <Rule title="město s méně než 10 000">
            <Filter>((([place]='town') or ([place]='large_town') or ([place]='small_town')) and not ([numericpop]&gt;10000))</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <PointSymbolizer file="&symbols-path;town08.png" type="png" width="8" height="8"></PointSymbolizer>
    </Rule>
</Style>

<!-- small -->
<Style name="suburb">
    <Rule>
            <Filter>([place]='suburb')</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="14" fill="&color_placenames_text;" halo_radius="1" wrap_width="30"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([place]='suburb')</Filter>
            &maxscale_zoom15;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="17" fill="&color_placenames_text;" halo_radius="1" wrap_width="30"></TextSymbolizer>
    </Rule>
</Style>
<Style name="village">
    <Rule>
            <Filter>(([place]='village') or ([place]='large_village'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="10" fill="&color_placenames_text;" halo_radius="1" dy="15" wrap_width="30"></TextSymbolizer>
    </Rule>
    <Rule>

            <Filter>(([place]='village') or ([place]='large_village'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="14" fill="&color_placenames_text;" halo_radius="1" dy="15" wrap_width="30"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([place]='village') or ([place]='large_village'))</Filter>
            &maxscale_zoom15;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="17" fill="&color_placenames_text;" halo_radius="1" wrap_width="30"></TextSymbolizer>
    </Rule>
</Style>
<Style name="hamlet">
    <Rule>
            <Filter>(([place]='hamlet') or ([place]='locality'))</Filter>
            &minscale_zoom15;
            &maxscale_zoom14;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="12" fill="&color_placenames_text;" halo_radius="1" wrap_width="30"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([place]='hamlet') or ([place]='locality'))</Filter>
            &maxscale_zoom16;
            <TextSymbolizer name="name" fontset_name="book-fonts" size="14" fill="&color_placenames_text;" halo_radius="1" wrap_width="30"></TextSymbolizer>
    </Rule>
</Style>

