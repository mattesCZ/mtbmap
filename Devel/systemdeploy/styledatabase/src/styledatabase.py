#!/usr/bin/python
# -*- coding: utf-8 -*-

__author__ = "xtesar7"

import libxml2
import mapnik
from psycopg2 import *

zooms = [250000000000, 500000000, 200000000, 100000000, 50000000, 25000000, 12500000,
6500000, 3000000, 1500000, 750000, 400000, 200000, 100000, 50000, 25000, 12500, 5000, 2500, 1000]

def main():
    connection = connect("dbname='mapnikStyles' user='xtesar7' password='' port=5432");
    stylePath = 'MTB-print.xml'
#    stylePath = '/home/xtesar7/Devel/mtbmap-czechrep/Devel/mapnik/my_styles/MTB-main.xml'

    style = Style(stylePath, connection)

#    style.importClean()
    style.exportXMLStyle("/home/xtesar7/Devel/mtbmap-czechrep/Devel/mapnik/my_styles/print.xml")
#    style.exportXMLStyle("/home/xtesar7/Devel/mtbmap-czechrep/Devel/mapnik/my_styles/output.xml")
#    style.correctFilenames()
    
    print len(style.symbolizers)

    style.close()
    connection.commit()

class Symbolizer:
    def __init__(self, type, attributes):
        self.type = type
        self.attributes = attributes

    def __eq__(self, other):
        if (self.type == other.type) and (len(self.attributes) == len(other.attributes)):
            for attr in self.attributes:
                if (not attr in other.attributes):
                    return False
                elif (self.attributes[attr] != other.attributes[attr]):
                    return False
            return True
        else:
            return False

    def __ne__(self, other):
        return not self.__eq__(other)

class Style:
    def __init__(self, path, databaseConnection):
        self.path = path
#        self._doc = libxml2.readFile(self.path, 'utf-8', 2)
#        self.ctxt = self._doc.xpathNewContext()
        self.symbolizers = {}
        self._cursor = databaseConnection.cursor()
        self._outputDoc = None

    def close(self):
#        self.ctxt.xpathFreeContext()
#        self._doc.freeDoc()
        self._cursor.close()

    def importClean(self):
        tables = ['maplayer','buildingsymbolizer','linesymbolizer','linepatternsymbolizer',
        'markerssymbolizer','pointsymbolizer','polygonsymbolizer','polygonpatternsymbolizer',
        'rastersymbolizer','shieldsymbolizer','textsymbolizer','stylelayer','symbolizerrule',
        'rulestyle','map','layer','style','rule']
#        self._cursor.execute("""
#            select table_name from information_schema.tables where table_type='BASE TABLE' and table_schema='public'
#        """)
#        rows = self._cursor.fetchmany(100)
        for table in tables:
            self._cursor.execute("DELETE FROM " + table)

        self._saveMap()
        self._saveStyles()
        self._saveLayers()

    def _saveMap(self):
        srs = self._xpathQuery(self.ctxt, '/Map/@srs')
        bgcolor = self._xpathQuery(self.ctxt, '/Map/@bgcolor')
        queryMap = "INSERT INTO map (m_name, m_bgcolor, m_srs) VALUES ('" + self.path + "', " + bgcolor + ", " + srs + ");"
        if self._pkeyInTable('map', ['m_name'], [self.path]):
            self._cursor.execute("DELETE FROM maplayer WHERE ml_name='" + self.path + "'")
            self._cursor.execute("DELETE FROM map WHERE m_name='" + self.path + "'")
            print 'Deleting old map row...'
        self._cursor.execute(queryMap)

    def _saveLayers(self):
        layerNodes = self.ctxt.xpathEval('//Layer')

        order = 0
        for layer in layerNodes:
            order += 1
            self.ctxt.setContextNode(layer)
            values = ''
            columns = 'l_name, l_srs'
            name = self.ctxt.xpathEval('./@name')[0].getContent()
            values += "'" + name + "', '" + self.ctxt.xpathEval('./@srs')[0].getContent() + "'"
            type = self.ctxt.xpathEval("./Datasource/Parameter[@name='type']")[0].getContent()

            label_cache = self.ctxt.xpathEval("./@clear_label_cache")
            if label_cache:
                columns += ', l_clear_label_cache'
                if label_cache[0].getContent() == 'yes' or label_cache[0].getContent() == '1':
                    values += ", 1"
                else:
                    values += ", 0"
            if type == 'gdal':
                file = self.ctxt.xpathEval("./Datasource/Parameter[@name='file']")[0].getContent()
                format = self.ctxt.xpathEval("./Datasource/Parameter[@name='format']")[0].getContent()
                columns += ", l_datatype, l_datafile, l_dataformat"
                values += ", '" + type + "', '" + file + "', '" + format + "'"
            elif type == 'postgis':
                extent = self.ctxt.xpathEval("./Datasource/Parameter[@name='extent']")[0].getContent()
                table = self.ctxt.xpathEval("./Datasource/Parameter[@name='table']")[0].getContent()
                columns += ", l_datatype, l_datatable, l_dataextent"
                values += ", '" + type + "', '" + table.replace("'", "''") + "', '" + extent + "'"
            queryLayer = 'INSERT INTO layer (' + columns + ') VALUES (' + values + ');'
            queryMapLayer = "INSERT INTO maplayer VALUES ('" + self.path + "', " + str(order) + ", '" + name + "');"

            if self._pkeyInTable('layer', ['l_name'], [name]):
                self._cursor.execute("DELETE FROM maplayer WHERE ml_layername='" + name + "'")
                self._cursor.execute("DELETE FROM stylelayer WHERE sl_layername='" + name + "'")
                self._cursor.execute("DELETE FROM layer WHERE l_name='" + name + "'")
            self._cursor.execute(queryLayer)
            self._cursor.execute(queryMapLayer)

            stylesInLayer = self.ctxt.xpathEval('./StyleName/text()')
            for style in stylesInLayer:
                queryStyleLayer = "INSERT INTO stylelayer VALUES ('" + style.getContent() + "', '" + name + "');"
                self._cursor.execute(queryStyleLayer)



    def _saveStyles(self):
        styleNodes = self.ctxt.xpathEval('//Style')
        ruleID = 1
        for style in styleNodes:
            self.ctxt.setContextNode(style)
            name = self.ctxt.xpathEval("./@name")[0].getContent()
            queryStyle = "INSERT INTO style VALUES ('" + name + "', NULL);"
            if self._pkeyInTable('style', ['s_name'], [name]):
                self._cursor.execute("DELETE FROM stylelayer WHERE sl_stylename='" + name + "'")
                self._cursor.execute("DELETE FROM rulestyle WHERE rs_stylename='" + name + "'")
                self._cursor.execute("DELETE FROM style WHERE s_name='" + name + "'")
            self._cursor.execute(queryStyle)
            rules = self.ctxt.xpathEval('./Rule')
            ruleOrder = 1
            for rule in rules:
                self._saveRule(rule, ruleID)
                self.ctxt.setContextNode(rule)
                queryRuleStyle = "INSERT INTO rulestyle VALUES (" + str(ruleOrder) + ", '" + str(ruleID) + "', '" + name + "');"
                self._cursor.execute(queryRuleStyle)
                ruleOrder += 1
                ruleID += 1



    def _saveRule(self, rule, ruleID):
        name = self._xpathQuery(rule, './@name')
        title = self._xpathQuery(rule, './@title')
        abstract = 'NULL'
        filter = self._xpathQuery(rule, './Filter')
        if filter == 'NULL':
            filter = self._xpathQuery(rule, './ElseFilter')
            if filter != 'NULL':
                filter = 'ELSEFILTER'
        minScale = self._xpathQuery(rule, './MinScaleDenominator')
        maxScale = self._xpathQuery(rule, './MaxScaleDenominator')

        queryRule = "INSERT INTO rule VALUES (" + str(ruleID) + ", " + name + ", " + title + ", " + abstract + ", " + filter + ", " + minScale + ", " + maxScale + ");"
        if self._pkeyInTable('rule', ['r_id'], [str(ruleID)]):
            self._cursor.execute("DELETE FROM rulestyle WHERE rs_ruleid=" + ruleID)
            self._cursor.execute("DELETE FROM symbolizerrule WHERE sr_ruleid=" + ruleID)
            self._cursor.execute("DELETE FROM rule WHERE r_id=" + ruleID)
        self._cursor.execute(queryRule)

        self._saveSymbolizers(rule, ruleID)

    def _saveSymbolizers(self, rule, ruleID):
        elements = rule.xpathEval('./*')
        order = 1
        for element in elements:
            if element.name.endswith('Symbolizer'):
                pairs = {}
                attrs = element.xpathEval('./@*')
                for attr in attrs:
                    pairs[attr.name] = attr.getContent()
                params = element.xpathEval('./CssParameter')
                for param in params:
                    pairs[param.xpathEval('./@name')[0].getContent()] = param.getContent()
                symbolizer = Symbolizer(element.name, pairs)
                if not symbolizer in self.symbolizers.values():
                    key = len(self.symbolizers)
                    self.symbolizers[key] = symbolizer
                    columns = 'symbid, "' + '", "'.join(pairs) + '"'
                    values = "'" + str(key) + "', '" + "', '".join(pairs.values()) + "'"
                    querySymbolizer = 'INSERT INTO ' + element.name + ' (' + columns + ') VALUES (' + values + ')'
                    self._cursor.execute(querySymbolizer)
                    querySymbolizerRule = 'INSERT INTO symbolizerrule VALUES (' + str(order) + ", " + str(key) + ", '" + element.name + "', " + str(ruleID) + ')'
                    self._cursor.execute(querySymbolizerRule)
                else:
                    key = [k for k, value in self.symbolizers.iteritems() if value == symbolizer][0]
                    querySymbolizerRule = 'INSERT INTO symbolizerrule VALUES (' + str(order) + ", " + str(key) + ", '" + element.name + "', " + str(ruleID) + ')'
                    self._cursor.execute(querySymbolizerRule)
                order += 1

    def exportXMLStyle(self, outputfile):
        f = open(outputfile, 'w')
        self._outputDoc = libxml2.parseDoc('<Map/>')
        root = self._outputDoc.getRootElement()
        self._cursor.execute("SELECT m_srs, m_bgcolor FROM map WHERE m_name='" + self.path + "'")
        row = self._cursor.fetchone()
        root.setProp('srs', row[0])
        root.setProp('bgcolor', row[1])

        self._exportFonts()
        self.exportStyles()
        self.exportLayers()

#        doctype = libxml2.newNode('!DOCTYPE Map [<!ENTITY % entities SYSTEM "../inc/entities.xml.inc">]')
#        root.addPrevSibling(doctype)
        str = self._outputDoc.serialize('utf-8', 1)
        lines = str.split('\n')
        lines.insert(1, '<!DOCTYPE Map [ <!ENTITY % ent SYSTEM "../inc/ent.xml.inc"> %ent; ]>')

        for line in lines:
            f.write(line + '\n')
#        self._outputDoc.saveTo(f, 'utf-8', 1)
        f.close()

    def _exportFonts(self):
        root = self._outputDoc.getRootElement()
        self._addFont(root, 'book-fonts', 'DejaVu Sans Book')
        self._addFont(root, 'bold-fonts', 'DejaVu Sans Bold')
        self._addFont(root, 'oblique-fonts', 'DejaVu Sans Oblique')
        self._addFont(root, 'cond-book-fonts', 'DejaVu Sans Condensed')
        self._addFont(root, 'cond-bold-fonts', 'DejaVu Sans Condensed Bold')
        self._addFont(root, 'cond-oblique-fonts', 'DejaVu Sans Condensed Oblique')
        self._addFont(root, 'serif-book-fonts', 'DejaVu Serif Book')
        self._addFont(root, 'serif-bold-fonts', 'DejaVu Serif Bold')
        self._addFont(root, 'serif-oblique-fonts', 'DejaVu Serif Italic')
        self._addFont(root, 'cond-serif-book-fonts', 'DejaVu Serif Condensed')
        self._addFont(root, 'cond-serif-bold-fonts', 'DejaVu Serif Condensed Bold')
        self._addFont(root, 'extralight-fonts', 'DejaVu Sans ExtraLight')

    def exportLayers(self):
        self._cursor.execute("SELECT l_abstract, l_clear_label_cache, l_name, l_srs, l_datatype, l_datatable, l_datafile, l_dataformat, l_dataextent FROM layer, maplayer WHERE ml_name='" + self.path + "' AND ml_layername=l_name ORDER BY ml_layerorder")
        layers = self._cursor.fetchall()
        root = self._outputDoc.getRootElement()
        for row in layers:
            layer = libxml2.newNode('Layer')
            layer.setProp('name', row[2])
            if row[3]:
                layer.setProp('srs', row[3])
            if row[1]==1:
                layer.setProp('clear_label_cache', '1')
            self._cursor.execute("SELECT sl_stylename FROM stylelayer WHERE sl_layername='" + row[2] + "'")
            for stylename in self._cursor:
                style = libxml2.newNode('StyleName')
                style.setContent(stylename[0])
                layer.addChild(style)
            datasource = libxml2.newNode('Datasource')
            self._addParameter(datasource, 'type', row[4])
            if row[4]=='gdal':
                self._addParameter(datasource, 'file', row[6])
                self._addParameter(datasource, 'format', row[7])
            elif row[4]=='postgis':
                self._addParameter(datasource, 'table', row[5].strip())
                self._addParameter(datasource, 'password', '&passwd;')
                self._addParameter(datasource, 'host', 'localhost')
                self._addParameter(datasource, 'port', '5432')
                self._addParameter(datasource, 'user', 'xtesar7')
                self._addParameter(datasource, 'dbname', 'gisczech')
                self._addParameter(datasource, 'estimate_extent', 'false')
                self._addParameter(datasource, 'extent', row[8])

            layer.addChild(datasource)

            root.addChild(layer)

    def exportStyles(self):
        root = self._outputDoc.getRootElement()
        self._cursor.execute("SELECT sl_stylename FROM stylelayer, layer, maplayer WHERE l_name=sl_layername AND l_name=ml_layername AND ml_name='" + self.path + "'")
        rows = self._cursor.fetchall()
        stylenames = []
        for row in rows:
            stylenames.append(row[0])
        stylenames.sort()
        for stylename in stylenames:
            style = libxml2.newNode('Style')
            style.setProp('name', stylename)
            self._cursor.execute("SELECT rs_ruleid FROM rulestyle WHERE rs_stylename='" + stylename + "' ORDER BY rs_order")
            rules = self._cursor.fetchall()
            ruleIDs = []
            for r in rules:
                ruleIDs.append(r[0])
            for id in ruleIDs:
                style.addChild(self.exportRule(id))
            root.addChild(style)

    def correctDasharray(self, table):
        self._cursor.execute('SELECT symbid, "stroke-dasharray" FROM ' + table + ' WHERE symbid>10000 AND "stroke-dasharray" IS NOT NULL')
        lines = self._cursor.fetchall()
        for line in lines:
            parts = line[1].split(',')
            for i in range(len(parts)):
                parts[i]=str(2*int(parts[i]))
            self._cursor.execute('UPDATE linesymbolizer  SET "stroke-dasharray"=' + "'" + ','.join(parts) + "' " + " WHERE symbid=" + str(line[0]))
#            print 'UPDATE linesymbolizer  SET "stroke-dasharray"=' + "'" + ','.join(parts)) + "' " + " WHERE symbid=" + str(line[0])

#    def correctFilenames(self):
#        self._cursor.execute("SELECT symbid, file FROM shieldsymbolizer WHERE symbid>10000 AND file LIKE '%white-%'")
#        lines = self._cursor.fetchall()
#        for line in lines:
#            parts = line[1].split('/')
#            parts[-1] = 'osmc/' + parts[-1]
##            for i in range(len(parts)):
##                parts[i]=str(2*int(parts[i]))
#            print '/'.join(parts)
#            self._cursor.execute('UPDATE shieldsymbolizer  SET "file"=' + "'" + '/'.join(parts) + "' " + " WHERE symbid=" + str(line[0]))
##            print 'UPDATE linesymbolizer  SET "stroke-dasharray"=' + "'" + ','.join(parts)) + "' " + " WHERE symbid=" + str(line[0])

    def exportRule(self, ruleid):
        rule = libxml2.newNode('Rule')
        self._cursor.execute("SELECT r_title, r_filter, r_minscale, r_maxscale FROM rule WHERE r_id=" + str(ruleid))
        params = self._cursor.fetchone()
        rule.setProp('title', params[0])
        if params[1]:
            if params[1]=='ELSEFILTER':
                rule.addChild(libxml2.newNode('ElseFilter'))
            else:
                filter = libxml2.newNode('Filter')
                filter.setContent(params[1])
                rule.addChild(filter)
        if params[2]:
            minscale = libxml2.newNode('MinScaleDenominator')
            minscale.setContent(params[2])
            rule.addChild(minscale)
        if params[3]:
            maxscale = libxml2.newNode('MaxScaleDenominator')
            maxscale.setContent(params[3])
            rule.addChild(maxscale)

        self._cursor.execute("SELECT sr_symbid, sr_type FROM symbolizerrule WHERE sr_ruleid=" + str(ruleid) + " ORDER BY sr_order")
        symbolizers = self._cursor.fetchall()
        for symb in symbolizers:
            mapnik07css = ['BuildingSymbolizer', 'LineSymbolizer', 'PolygonSymbolizer', 'RasterSymbolizer']
            symbolizer = libxml2.newNode(symb[1])
            pairs = {}
            self._cursor.execute("SELECT column_name FROM information_schema.columns WHERE table_name='" + symb[1].lower() + "' ORDER BY ordinal_position")
            keys = self._cursor.fetchall()
            self._cursor.execute("SELECT * FROM " + symb[1].lower() + " WHERE symbid=" + str(symb[0]))
            values = self._cursor.fetchone()
            for i in range(len(keys)):
                pairs[keys[i][0]] = values[i]
            for pair in pairs:
                if pairs[pair] and pair!='symbid':
                    if symb[1] in mapnik07css:
                        cssparam = libxml2.newNode('CssParameter')
                        cssparam.setProp('name', pair)
                        cssparam.setContent(str(pairs[pair]))
                        symbolizer.addChild(cssparam)
                    else:
                        if pairs[pair]==True:
                            symbolizer.setProp(pair, '1')
                        elif pairs[pair]==False:
                            symbolizer.setProp(pair, '0')
                        else:
                            symbolizer.setProp(pair, str(pairs[pair]))
            rule.addChild(symbolizer)
        return rule

    def _addFont(self, parent, name, faceName):
        fontset = libxml2.newNode('FontSet')
        fontset.setProp('name', name)
        font = libxml2.newNode('Font')
        font.setProp('face_name', faceName)
        fontset.addChild(font)
        parent.addChild(fontset)

    def _addParameter(self, parent, name, content):
        param = libxml2.newNode('Parameter')
        param.setProp('name', name)
        param.setContent(content)
        parent.addChild(param)

    def _xpathQuery(self, ctxt, query):
        node = ctxt.xpathEval(query)
        if node:
            return "'" + node[0].getContent().replace("'", "''") + "'"
        else:
            return 'NULL'

    def _pkeyInTable(self, table, pkeys, values):
        whereClauses = []
        for i in range(len(pkeys)):
            whereClauses.append('"' + pkeys[i] + '"=' + "'" + values[i] + "'")
        self._cursor.execute('SELECT "' + '", "'.join(pkeys) + '" FROM ' + table + ' WHERE ' + ' AND '.join(whereClauses))
        return self._cursor.fetchone()

if __name__ == "__main__":
    main()

