#!/usr/bin/python
# -*- coding: utf-8 -*-

__author__="xtesar7"

#order is important
acceptedWayColors = ['red', 'blue', 'green', 'yellow']
acceptedBgColors = ['white']
acceptedFgColors = acceptedWayColors
acceptedSymbols = ['bar', 'dot']
# other symbols are now rendered as 'bar' for simplicity
otherSymbols = ['backslash', 'bowl', 'L', 'turned_T', 'triangle', 'corner', 'diamond', 'cross', 'circle', 'fork', 'rectangle', 'lower', 'yes']

class OsmcSymbol:
    def __init__(self, osmcString):
        self.parts = osmcString.replace('\\', 'backslash').split(':')
        self.wayColor = None
        self.bgColor = None
        self.fgColor = None
        self.symbol = None
        self.text = None
        if len(self.parts):
            self._parseParts()

    def _parseParts(self):
        if len(self.parts) >= 1:
            self.wayColor = self.parts[0]
        if len(self.parts) >= 2:
            self.bgColor = self.parts[1]
        if len(self.parts) >= 3:
            fgParts = self.parts[2].split('_', 1)
            if len(fgParts) == 2:
                if fgParts[1] in otherSymbols:
                    fgParts[1] = 'bar'
                    self.parts[2] = '_'.join(fgParts)
                self.fgColor = fgParts[0]
                self.symbol = fgParts[1]
            else:
                if len(fgParts) == 1:
                    self.symbol = fgParts[0]
        if len(self.parts) >= 4:
            self.text = ':'.join(self.parts[3:])

    def isAccepted(self):
        if ((self.wayColor in acceptedWayColors)
                and (self.bgColor in acceptedBgColors)
                and (self.fgColor == self.wayColor)
                and (self.symbol in acceptedSymbols)):
            return True
        else:
            return False

    def getStringValue(self, maxNumberOfParts=3):
        return ':'.join(self.parts[0:maxNumberOfParts])

    def __lt__(self, other):
        if (self.isAccepted() and other.isAccepted()):
            if (self.symbol == other.symbol):
                return acceptedWayColors.index(self.wayColor) > acceptedWayColors.index(other.wayColor)
            else:
                return acceptedSymbols.index(self.symbol) > acceptedSymbols.index(other.symbol)
