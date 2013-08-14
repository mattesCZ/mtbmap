#!/usr/bin/python
# -*- coding: utf-8 -*-

# Global imports
#from captcha.fields import ReCaptchaField

# Django imports
from django.forms import ModelForm, Textarea, HiddenInput

# Local imports
from map.models import RoutingEvaluation

class RoutingEvaluationForm(ModelForm):
    class Meta:
        model = RoutingEvaluation
        exclude = ('timestamp',)
        widgets = {
            'comment': Textarea(attrs={'rows':4}),
            'params': HiddenInput(),
            'linestring': HiddenInput()
        }
#    captcha = ReCaptchaField(attrs={'theme': 'clean'}, label='Opište text')