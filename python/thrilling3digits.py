#https://brilliant.org/mathematics-problem/thrilling-three-digit-numbers/?group=BHdz9sV2JA3R
n=100
sum=0
while n <= 999:
  a = n % 10
  b = (n / 10) % 10
  c = (n / 100) % 10
  abc_square_sum = (a**2) + (b**2) + (c**2)
  if n - abc_square_sum == 543:
     sum = sum + n
  n=n+1
print "Answer is",sum % 1000
