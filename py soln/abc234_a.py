# -*- coding: utf-8 -*-
"""
Created on Sat Mar  4 08:11:41 2023

@author: Mars_Coder
"""

def f(x):
    return pow(x, 2) + 2 * x + 3
t = int(input())
print(f(f(f(t) + t) + f(f(t))))
