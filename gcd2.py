from fractions import gcd
for _ in xrange(input()):
	a,b = map(int,raw_input().split())
	print reduce(gcd,(a,b))
