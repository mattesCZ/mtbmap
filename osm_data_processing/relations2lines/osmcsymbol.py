# -*- coding: utf-8 -*-

# order is important
acceptedWayColors = ['red', 'blue', 'green', 'yellow', 'mtb']
acceptedBgColors = ['white']
acceptedFgColors = acceptedWayColors
acceptedSymbols = ['bar', 'dot', 'backslash', 'bowl', 'L', 'turned_T', 'triangle', 'corner', 'mtb']
# other symbols are now rendered as 'bar' for simplicity
otherSymbols = ['diamond', 'cross', 'circle', 'fork', 'rectangle', 'lower', 'yes']


class OsmcSymbol:
    def __init__(self, osmc_string):
        self.parts = osmc_string.replace('\\', 'backslash').split(':')
        self.wayColor = None
        self.bgColor = None
        self.fgColor = None
        self.symbol = None
        self.text = None
        if len(self.parts):
            self._parse_parts()

    def _parse_parts(self):
        if len(self.parts) >= 1:
            self.wayColor = self.parts[0]
        if len(self.parts) >= 2:
            self.bgColor = self.parts[1]
        if len(self.parts) >= 3:
            fg_parts = self.parts[2].split('_', 1)
            if len(fg_parts) == 2:
                if fg_parts[1] in otherSymbols:
                    fg_parts[1] = 'bar'
                    self.parts[2] = '_'.join(fg_parts)
                self.fgColor = fg_parts[0]
                self.symbol = fg_parts[1]
                if self.fgColor != self.wayColor and self.bgColor == self.wayColor:
                    # treat symbols like red:red:white_bar the same way as red:white:red_bar
                    self.bgColor = self.fgColor
                    self.fgColor = self.wayColor
            else:
                if len(fg_parts) == 1:
                    self.symbol = fg_parts[0]

                    # treat symbols like red:white:dot like red:white:red_dot
                    self.fgColor = self.wayColor
        if len(self.parts) >= 4:
            self.text = ':'.join(self.parts[3:])

    def is_accepted(self):
        return ((self.wayColor in acceptedWayColors)
                and (self.bgColor in acceptedBgColors)
                and (self.fgColor == self.wayColor)
                and (self.symbol in acceptedSymbols))

    def get_string_value(self):
        if len(self.parts) < 3:
            return ':'.join(self.parts)

        return ':'.join([self.wayColor, self.bgColor, self.fgColor + '_' + self.symbol])

    def __lt__(self, other):
        if self.is_accepted() and other.is_accepted():
            if self.symbol == other.symbol:
                return acceptedWayColors.index(self.wayColor) > acceptedWayColors.index(other.wayColor)
            else:
                return acceptedSymbols.index(self.symbol) > acceptedSymbols.index(other.symbol)
