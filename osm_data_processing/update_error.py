# -*- coding: utf-8 -*-


class UpdateError(Exception):
    def __init__(self, msg):
        self.msg = msg
