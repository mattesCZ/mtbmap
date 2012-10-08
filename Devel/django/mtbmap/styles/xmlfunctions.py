#!/usr/bin/python
# -*- coding: utf-8 -*-
import libxml2

def xpath_query(ctxt, query):
    node = ctxt.xpathEval(query)
    if node:
        return node[0].getContent()
    else:
        return None

def add_xml_fonts(parent_node):
    add_xml_font(parent_node, 'book-fonts', 'DejaVu Sans Book')
    add_xml_font(parent_node, 'bold-fonts', 'DejaVu Sans Bold')
    add_xml_font(parent_node, 'oblique-fonts', 'DejaVu Sans Oblique')
    add_xml_font(parent_node, 'cond-book-fonts', 'DejaVu Sans Condensed')
    add_xml_font(parent_node, 'cond-bold-fonts', 'DejaVu Sans Condensed Bold')
    add_xml_font(parent_node, 'cond-oblique-fonts', 'DejaVu Sans Condensed Oblique')
    add_xml_font(parent_node, 'serif-book-fonts', 'DejaVu Serif Book')
    add_xml_font(parent_node, 'serif-bold-fonts', 'DejaVu Serif Bold')
    add_xml_font(parent_node, 'serif-oblique-fonts', 'DejaVu Serif Italic')
    add_xml_font(parent_node, 'cond-serif-book-fonts', 'DejaVu Serif Condensed')
    add_xml_font(parent_node, 'cond-serif-bold-fonts', 'DejaVu Serif Condensed Bold')
    add_xml_font(parent_node, 'extralight-fonts', 'DejaVu Sans ExtraLight')

def add_xml_font(parent_node, name, faceName):
    fontset = libxml2.newNode('FontSet')
    fontset.setProp('name', name)
    font = libxml2.newNode('Font')
    font.setProp('face_name', faceName)
    fontset.addChild(font)
    parent_node.addChild(fontset)

def add_xml_node(parent_node, name, value):
    if value != None:
        node = libxml2.newNode(name)
        node.setContent(str(value))
        parent_node.addChild(node)

def attr_to_string(value):
    if value == None:
        return None
    elif value == True:
        return '1'
    elif value == False:
        return '0'
    else:
        if type(value).__name__=='unicode':
            if len(value) > 0:
                return str(value.encode('utf-8'))
            else:
                return None
        else:
            return str(value)

def add_xml_css(node, parameter_name, parameter_value):
    if attr_to_string(parameter_value) != None:
        cssnode = libxml2.newNode('CssParameter')
        cssnode.setProp('name', parameter_name.replace('_', '-'))
        cssnode.setContent(attr_to_string(parameter_value))
        node.addChild(cssnode)

def set_xml_param(parent_node, parameter_name, parameter_value):
    if attr_to_string(parameter_value) != None:
        parent_node.setProp(parameter_name, attr_to_string(parameter_value))

def add_xml_node_with_param(parent_node, node_name, node_value, parameter_name, parameter_value):
    if attr_to_string(node_value) != None:
        node = libxml2.newNode(node_name)
        node.setContent(attr_to_string(node_value))
        set_xml_param(node, parameter_name, parameter_value)
        parent_node.addChild(node)

