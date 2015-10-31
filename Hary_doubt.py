t=int(raw_input())
while(t):
	c,k,w=map(int,raw_input().split())
	p=c*w
	if p>k:
		print("no")
	else:
		print("yes")
		
	t=t-1
