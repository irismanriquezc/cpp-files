from PIL import Image
import pprint
im = Image.open('colorbox.png')
pixel_list = im.getdata()
print(f'The number of pixels is {len(pixel_list)}.')
pprint.pprint(list(pixel_list))
