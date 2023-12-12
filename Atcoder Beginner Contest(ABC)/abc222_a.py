# -*- coding: utf-8 -*-
"""
Created on Thu Mar  2 12:05:28 2023

@author: Mars_Coder
"""

s = input()
if len(s) == 4:
    print(s)
elif len(s) == 3:
    print('0' + s)
elif len(s) == 2:
    print("00" + s)
else:
    print("000" + s)
    