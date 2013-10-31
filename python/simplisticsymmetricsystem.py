#https://brilliant.org/mathematics-problem/simplistic-symmetric-system/?group=Y80AOs4wQJht

def f(x):
  return 234 - x

results = 0
for x in range(1,236):
  y = f(x)
  if f(y) == x and y > 0:
    results = results + 1

print results
