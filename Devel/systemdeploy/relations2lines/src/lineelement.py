#!/usr/bin/python
# -*- coding: utf-8 -*-

__author__="xtesar7"

from osmcsymbol import OsmcSymbol

# lower index means higher priority: iwn > nwn
networkOrder = ['iwn', 'nwn', 'rwn', 'lwn']

class LineElement:
    def __init__(self, relation):
        self.osmcSymbol = relation.osmcSymbol
        self.network = relation.network

    def __eq__(self, other):
        return self.osmcSymbol == other.osmcSymbol

    def __lt__(self, other):
        if ((other.network in networkOrder) and (self.network in networkOrder)):
            #both elements has specified networks or both hasn't
            if (self.network == other.network):
                return OsmcSymbol(self.osmcSymbol) < OsmcSymbol(other.osmcSymbol)
            else:
                return networkOrder.index(self.network) > networkOrder.index(other.network)
        elif ((not other.network in networkOrder) and (not self.network in networkOrder)):
            return OsmcSymbol(self.osmcSymbol) < OsmcSymbol(other.osmcSymbol)
        elif (self.network in networkOrder):
            #other has not specified network, but self has: self is not less than other
            return False
        else:
            #self has not specified network, but other has: self is less than other
            return True


    def __repr__(self):
        return repr((self.osmcSymbol, self.network))

