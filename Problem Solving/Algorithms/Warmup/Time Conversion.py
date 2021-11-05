#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'timeConversion' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def timeConversion(s):
    # Write your code here
    if 'A' in s:
        b = int(s[0:2])
        if b == 12:
            b = "00"
        elif b<=9:
            b = '0'+str(b)
    else:
        b = int(s[0:2])
        if b is 12:
            b = 12
        else:
            b = b+12
    c = str(b)+s[2:8]
    return c
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    fptr.write(result + '\n')

    fptr.close()
