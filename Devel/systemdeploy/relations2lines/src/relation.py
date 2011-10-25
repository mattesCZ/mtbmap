import symbol
#!/usr/bin/python
# -*- coding: utf-8 -*-

from osmcsymbol import OsmcSymbol

__author__="xtesar7"

keys = ['network', 'osmc:symbol', 'mtb:scale', 'mtb:scale:uphill']

kctOsmcPairs = {'major' : 'bar', 'yes' : 'bar', 'horse' : 'dot', 'spring' : 'bowl',
    'learning' : 'backslash', 'ruin' : 'L', 'interesting_object' : 'turned_T',
    'peak' : 'triangle', 'local' : 'corner'
}

class Relation:
    def __init__(self, row):
        self.id = row[0]
        self.lines = self.parseMembers(row[1])
        self.rawTags = row[2]
        self.network = None
        self.osmcSymbol = None
        self.parseTags()

    def parseTags(self):
        if 'network' in self.rawTags:
            self.network = self.rawTags[self.rawTags.index('network')+1]
            self.network = self.network[:3]

        if 'osmc:symbol' in self.rawTags:
            osmcString = self.rawTags[self.rawTags.index('osmc:symbol')+1].replace('\\', 'backslash')
            symbol = OsmcSymbol(osmcString)
            if symbol.isAccepted():
                self.osmcSymbol = symbol.getStringValue(3)
            else:
                self.osmcSymbol = None
        elif self.parseKct():
            pass
        elif self.parseMtb():
            pass
        else:
            self.osmcSymbol = None

#    def parseOsmc(self, rawOsmcSymbol):
#        #use just first 3 parameters
#        params = rawOsmcSymbol.split(':')
#        if len(params) > 3:
#            return params[0] + ':' + params[1] + ':' + params[2]
#        else:
#            return rawOsmcSymbol

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
        type = self.rawTags[self.rawTags.index('kct_' + color)+1]
        if (not kctOsmcPairs.has_key(type)):
            type = 'yes'
        newOsmcValue = color + ':white:' + color + '_' + kctOsmcPairs[type]
        print newOsmcValue
        self.osmcSymbol = newOsmcValue
        return True

    def parseMtb(self):
        if 'mtb:scale' in self.rawTags:
            type = self.rawTags[self.rawTags.index('mtb:scale')+1]
            self.osmcSymbol = 'mtb:mtb:scale_' + type
            return True
        else:
            return False

    def parseMembers(self, members):
        parts = []
        for member in members:
            if member.startswith('w'):
                try:
                    id = int(member.lstrip('w'))
                except ValueError:
                    print 'Member ' + member + ' starts with "w", but it is not a way!'
                parts.append(id)
        return parts