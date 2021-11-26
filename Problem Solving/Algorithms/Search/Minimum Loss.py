#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'minimumLoss' function below.
#
# The function is expected to return an INTEGER.
# The function accepts LONG_INTEGER_ARRAY price as parameter.
#

def minimumLoss(price):
    # Write your code here
    arr = sorted(price)
    a = price
    ml = 9999999
    for i in range(len(arr)-1):
        dif = arr[i+1]-arr[i]
        if dif < ml and (a.index(arr[i+1]) < a.index(arr[i])):
            ml = dif
    return ml     
    
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    price = list(map(int, input().rstrip().split()))

    result = minimumLoss(price)

    fptr.write(str(result) + '\n')

    fptr.close()
