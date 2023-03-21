# -*- coding: utf-8 -*-
"""
Created on Thu Mar  2 11:48:05 2023

@author: Mars_Coder
"""

s = input()
if s[0] == s[1] and s[1] == s[2]:
    print(1)
elif s[0] == s[1] or s[0] == s[2] or s[1] == s[2]:
    print(3)
else:
    print(6)
