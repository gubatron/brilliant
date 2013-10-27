'''
The goal is to make of this something similar as to what I have for brilliant.h
So we can do

import brilliant

and use all the functions here in all the problems we decide to solve with python.
'''

'''
The following rules are used to construct Lacsap's triangle:

Lacsap's triangle is a triangular array of numbers. 
There are  entries in the th row. The entries are staggered relative to the previous row, similar to Pascal's triangle. 
The first and last entries in each row are 2. 
Each entry is equal to the product of the numbers above it to the left and to the right. If no entry is written, treat it as 1 (the multiplicative identity).

  	2
  	2 2
  	2 4  2
  	2 8  8    2
  	2 16 64   16   2
  	2 32 1024 1024 32 2
'''
def lacsap(n):
  if n==0:
    return [2]
  if n == 1:
    return [2,2]
  else:
    coeficientsToGenerate = n-1
    above = lacsap(n-1)
    lenAbove = len(above)
    result = [2]
    i=0
    while i < (lenAbove-1):
      result = result + [above[i]*above[i+1]]
      i = i + 1
    result = result + [2]
    return result
