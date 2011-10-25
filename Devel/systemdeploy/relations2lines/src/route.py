#!/usr/bin/python
# -*- coding: utf-8 -*-

import lineelement

__author__="xtesar7"

class Route:
    def __init__(self, id, relation):
        self.id = id
        self.geometry = None
        self.highway = None
        self.tracktype = None
        lineElement = lineelement.LineElement(self.id, relation)
        self.osmcSigns = [lineElement]
        self.numOfSigns = 1

    def addSign(self, relation):
        le = lineelement.LineElement(self.id, relation)
        if (not le in self.osmcSigns):
            self.osmcSigns.append(le)
            self.numOfSigns += 1
            # first item in osmcSigns has the highest priority
            self.osmcSigns.sort(reverse=True)

    def __lt__(self, other):
        return self.id < other.id

    def __gt__(self, other):
        return self.id > other.id
