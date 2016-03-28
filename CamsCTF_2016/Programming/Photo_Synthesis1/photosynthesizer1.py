from PIL import Image
import math


img = Image.open('photosynthesis1.png')
width, height = img.size
print width, height


def get_factors(n):
	factors = []
	i = 2
	while i < math.sqrt(n):
		if n % i == 0:
			factors.append(i)
			factors.append(n / i)
		i += 1
	return factors
	
possible_dims = get_factors(width)

print possible_dims

orig_pixels = list(img.getdata())

v = 0
for d in range(0, len(possible_dims), 2):
	image_out = Image.new(img.mode, (possible_dims[d], possible_dims[d+1]))
	image_out.putdata(orig_pixels)
	image_out.save('photo_trials_' + str(v) + '.png')
	v += 1
	image_out = Image.new(img.mode, (possible_dims[d+1], possible_dims[d]))
	image_out.putdata(orig_pixels)
	image_out.save('photo_trials/photo' + str(v) + '.png')
	v += 1
print "done"
