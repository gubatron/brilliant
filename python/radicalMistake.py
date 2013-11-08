#Radical Mistake
#https://brilliant.org/mathematics-problem/radical-mistake/?group=YcAFgOWOexD3

import math

def left(a,b):
  return math.sqrt((a*a) + (b*b))

def right(a,b):
  return math.sqrt(a*a) + math.sqrt(b*b)

results=0

for a in range(-10,11):
	for b in range(-10,11):
		if left(a,b) == right(a,b):
			results = results+1
			print a,b,results,"found"