#!/bin/python

import math
import os
import random
import re
import sys


n=int(input())
if (n%2!=0):
    print('Weird')
elif(n%2==0 and n>1 and n<6):
    print('Not Weird')
elif (n%2==0 and n>5 and n<21):
    print('Weird')   
elif(n%2==0 and n>20):   
    print('Not Weird')    
else:
    print('Weird')
