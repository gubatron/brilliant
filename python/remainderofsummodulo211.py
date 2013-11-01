'''https://brilliant.org/mathematics-problem/remainder-of-a-sum-modulo-211/?group=xgTxOcOJPlBg'''
def f(x):
  return ((x**3) + x + 2)**71

bigSum = 0
i=0
while i < 211:
  bigSum = bigSum + f(i)
  i=i+1

print "bigSum MOD 211",(bigSum % 211)
