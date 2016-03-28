f = open("askey.txt", "rb")
s = ""
while 1:
	b = f.read(1)
	if not b:
		break
	s += chr(ord(b) - 13)
print len(s)
print s
