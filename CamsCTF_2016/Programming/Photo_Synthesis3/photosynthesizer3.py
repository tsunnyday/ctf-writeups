from PIL import Image
import math


pixel_file = open("photosynthesis3.txt")

lines = pixel_file.readlines()
lines = lines[1:]
for x in range(0, len(lines)):
	lines[x] = tuple(map(int, lines[x].split()))






def get_factors(n):
	factors = []
	i = 2
	while i < math.sqrt(n):
		if n % i == 0:
			factors.append(i)
			factors.append(n / i)
		i += 1
	return factors
	
possible_dims = get_factors(len(lines))

print possible_dims

v = 0
for d in range(0, len(possible_dims), 2):
	image_out = Image.new("RGB", (possible_dims[d], possible_dims[d+1]))
	image_out.putdata(lines)
	image_out.save('photo_trials3/photo' + str(v) + '.png')
	v += 1
	image_out = Image.new("RGB", (possible_dims[d+1], possible_dims[d]))
	image_out.putdata(lines)
	image_out.save('photo_trials3/photo' + str(v) + '.png')
	v += 1
print "done"


