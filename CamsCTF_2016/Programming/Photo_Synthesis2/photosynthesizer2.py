from PIL import Image
from zipfile import ZipFile
import math

def get_factors(n):
	factors = []
	i = 2
	while i < math.sqrt(n):
		if n % i == 0:
			factors.append(i)
			factors.append(n / i)
		i += 1
	return factors
	




with ZipFile("photosynthesis2.zip") as archive:
	print len(archive.infolist())
	pixels = [None] * len(archive.infolist())
		
	for entry in archive.infolist():
		with archive.open(entry) as file:
			name = entry.filename
			
			img = Image.open(file)
			pixels[int(name.strip(".png").strip("a/"))] = list(img.getdata())[0]
			if(img.size != (1,1)):
				print "oops"
print pixels[0:10]
num_of_pixels = len(pixels)
print num_of_pixels
possible_dims = get_factors(num_of_pixels)
print possible_dims
print "done"

pixels = pixels[::-1]

v = 0
for d in range(0, len(possible_dims), 2):
	image_out = Image.new("RGB", (possible_dims[d], possible_dims[d+1]))
	image_out.putdata(pixels)
	image_out.save('photo_trials2/photo' + str(v) + '.png')
	v += 1
	image_out = Image.new("RGB", (possible_dims[d+1], possible_dims[d]))
	image_out.putdata(pixels)
	image_out.save('photo_trials2/photo' + str(v) + '.png')
	v += 1
print "done"
