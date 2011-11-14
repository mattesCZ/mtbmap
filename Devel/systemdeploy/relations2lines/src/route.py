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
        self.mtbScale = relation.mtbScale
        self.mtbUphill = relation.mtbUphill
        self.firstNode = None
        self.lastNode = None
        self.previousRoutes = []
        self.nextRoutes = []
        self.offset = None

        lineElement = lineelement.LineElement(relation)
        self.osmcSigns = [lineElement]
        self.numOfSigns = 1

    def addSign(self, relation):
        le = lineelement.LineElement(relation)
        if (not le in self.osmcSigns):
            self.osmcSigns.append(le)
            self.numOfSigns += 1
            # first item in osmcSigns has the highest priority
            self.osmcSigns.sort(reverse=True)

    def getValuesRow(self):
            values = str(self.id) + ", '" + self.geometry + "'"
            if self.highway is not None:
                values += ", '" + self.highway + "'"
            else:
                values += ", NULL"
            if self.tracktype is not None:
                values += ", '" + self.tracktype + "'"
            else:
                values += ", NULL"
            if self.mtbScale is not None:
                values += ", '" + self.mtbScale + "'"
            else:
                values += ", NULL"
            if self.mtbUphill is not None:
                values += ", '" + self.mtbUphill + "'"
            else:
                values += ", NULL"
            values += ", " + str(self.offset)
            for i in range(len(self.osmcSigns)):
                values += ', '
                if self.osmcSigns[i].network is not None:
                    values += "'" + self.osmcSigns[i].osmcSymbol + "', '" + self.osmcSigns[i].network + "'"
                else:
                    values += "'" + self.osmcSigns[i].osmcSymbol + "', NULL"
            return values


    def __lt__(self, other):
        return self.id < other.id

    def __gt__(self, other):
        return self.id > other.id
