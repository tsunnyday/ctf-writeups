def compute(b):
	a = 1
	c = 2
	d = 3

	n = 0
	

	if(d % 3 == 2):
		for i in xrange(0, d/3):
			n += i/2

	n += b-a
	a = b

	while (c > 1):
		n += c
		c -= 20
		
	n += 1

	while (c < 5):
		i = 0
		while d < b:
			i += 1
			n += b
			e = 0
			while a == b:
				i += 1
				n -= 1
				b -= 1
			b -= 1
			a -= 1
		c += 1
		
		
	if(n >= 2689):
		n -= 2689

	if(a + b + c + d) > 50:
		n = 0

	return n
		
test = 0
goal = 13333337
while compute(test) != goal:
	test += 1
print test
