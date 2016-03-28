possible = []
factor = 16384

for x in range(99999):
	s = str(x)
	while len(s) < 5:
		s = "0" + s
	
	possible.append(s[::-1] + s)



total = 0
for i in possible:
	if int(i) % factor == 0:
		
		if(len(str(int(i)))) == 10:
			total += int(i)
			

print total
