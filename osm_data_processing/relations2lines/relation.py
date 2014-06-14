# -*- coding: utf-8 -*-

from osmcsymbol import OsmcSymbol

keys = ['network', 'osmc:symbol', 'mtb:scale', 'mtb:scale:uphill']

kctOsmcPairs = {'major' : 'bar', 'yes' : 'bar', 'horse' : 'dot', 'spring' : 'bowl',
    'learning' : 'backslash', 'ruin' : 'L', 'interesting_object' : 'turned_T',
    'peak' : 'triangle', 'local' : 'corner'
}

class Relation:
    def __init__(self, row):
        if str(row).startswith('LINE'):
            attrs = row.split(';')
            self.id = int(attrs[1])
            self.lines = [int(attrs[1])]
            if (attrs[2] == 'None'):
                self.mtbScale = None
            else:
                self.mtbScale = attrs[2].replace("'", "")
            if (attrs[3] == 'None'):
                self.mtbUphill = None
            else:
                self.mtbUphill = attrs[3].replace("'", "")
            if (attrs[4] == 'None'):
                self.network = None
            else:
                self.network = attrs[4]
            if (attrs[5] == 'None'):
                self.osmcSymbol = 'mtb:white:mtb_mtb'
            else:
                self.osmcSymbol = attrs[5]
        else:
            self.id = -row[0]
            self.lines = self.parseMembers(row[1])
            self.rawTags = row[2]
            self.network = None
            self.osmcSymbol = None
            self.mtbScale = None
            self.mtbUphill = None
            self.parseTags()

    def parseTags(self):
        if 'network' in self.rawTags:
            self.network = self.rawTags[self.rawTags.index('network')+1]
            self.network = self.network[:3]
        if 'mtb:scale' in self.rawTags:
            self.mtbScale = self.rawTags[self.rawTags.index('mtb:scale')+1].replace('\\', 'backslash')
        if 'mtb:scale:uphill' in self.rawTags:
            self.mtbUphill = self.rawTags[self.rawTags.index('mtb:scale:uphill')+1].replace('\\', 'backslash')
        if 'osmc:symbol' in self.rawTags:
            osmcString = self.rawTags[self.rawTags.index('osmc:symbol')+1].replace('\\', 'backslash')
            symbol = OsmcSymbol(osmcString)
            if symbol.isAccepted():
                self.osmcSymbol = symbol.getStringValue(3)
            else:
                self.osmcSymbol = None
        elif self.parseKct():
            pass
        else:
            self.osmcSymbol = None

    def parseKct(self):
        if 'kct_red' in self.rawTags:
            color = 'red'
        elif 'kct_blue' in self.rawTags:
            color = 'blue'
        elif 'kct_green' in self.rawTags:
            color = 'green'
        elif 'kct_yellow' in self.rawTags:
            color = 'yellow'
        else:
            return False
        symbol = self.rawTags[self.rawTags.index('kct_' + color)+1]
        if (not kctOsmcPairs.has_key(symbol)):
            symbol = 'yes'
        newOsmcValue = color + ':white:' + color + '_' + kctOsmcPairs[symbol]
        self.osmcSymbol = newOsmcValue
        return True

    def parseMembers(self, members):
        parts = []
        for member in members:
            if member.startswith('w'):
                try:
                    id = int(member.lstrip('w'))
                    parts.append(id)
                except ValueError:
                    print 'Member ' + member + ' starts with "w", but it is not a way!'
        return parts

#    def copyRoutes(self, routes):
#        for line in self.lines:
#            self.routes.append(routes[line])
#
#    def sortRelParts(self):
#        if len(self.routes)<20:
#            print self.id
#            for r in self.routes:
#                print r.id, ", next: ", self._findNext(r), ", Prev: ", self._findPrev(r)
#
#    def _findNext(self, currentRoute):
#        for ro in self.routes:
#            if (ro.id != currentRoute.id):
#                if (currentRoute.lastNode == ro.lastNode or currentRoute.lastNode == ro.firstNode):
#                    return ro.id
#        return -1
#
#    def _findPrev(self, currentRoute):
#        for ro in self.routes:
#            if (ro.id != currentRoute.id):
#                if (currentRoute.firstNode == ro.lastNode or currentRoute.firstNode == ro.firstNode):
#                    return ro.id
#        return -1
