f = open("endian.txt", "rb")

byte_arr = []

while 1:
	b = f.read(1)
	if not b:
		break
	b = format(ord(b),'b')
	while len(b) < 8:
		b = "0" + b
	b = b[::-1]
	byte_arr.append(int(b, 2))



print byte_arr
print "".join(map(chr, byte_arr))
