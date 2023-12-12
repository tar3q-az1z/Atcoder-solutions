# -*- coding: utf-8 -*-
"""
Created on Sat Mar  4 08:17:27 2023

@author: Mars_Coder
"""

a, b = map(int, input().split())
sum1 = 0
sum2 = 0
while a > 0:
    sum1 = sum1 + (a % 10)
    a = int(a / 10)
while b > 0:
    sum2 = sum2 + (b % 10)
    b = int(b / 10)
print(max(sum1, sum2))
