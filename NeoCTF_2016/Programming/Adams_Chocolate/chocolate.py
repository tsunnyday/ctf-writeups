
days_in_months = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

skip = [1, 4, 9, 16, 25, 36, 8, 27, 64]

months = 12
total = 0
year = 2016



def add_digits(n):
	t = 0
	for c in str(n):
		t += int(c)
	return t
i = 0
for m in xrange(months):
	for d in xrange(days_in_months[m]):
		to_add = add_digits(year) + add_digits(m+1) + add_digits(d+1)
		i += 1
		if to_add not in skip:
			total += to_add

total -= add_digits(12) + add_digits(25) + add_digits(2016)
print total

