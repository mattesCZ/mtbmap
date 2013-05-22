#!/usr/bin/python
# -*- coding: utf-8 -*-

# Django imports
from django.forms import ModelForm, Textarea, HiddenInput

# Local imports
from map.models import RoutingEvaluation

# Global imports
from captcha.fields import ReCaptchaField


class RoutingEvaluationForm(ModelForm):
    class Meta:
        model = RoutingEvaluation
        exclude = ('timestamp',)
        widgets = {
            'comment': Textarea(attrs={'rows':4}),
            'params': HiddenInput(),
            'linestring': HiddenInput()
        }
    captcha = ReCaptchaField(attrs={'theme': 'clean'}, label='Opište text')