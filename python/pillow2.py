from PIL import Image

im= Image.open('chualar_sign.jpg')

width, height = im.size

big_pixel_list =[]

for x in range(width):
    for y in range(height):
        big_pixel_list.append(im.getpixel((x,y)))
print(len(big_pixel_list))
print(big_pixel_list[100])

my_sent= "What a wonderful day!"
split_sen = my_sent.split(' ')

print(split_sen)
print(split_sen[-1])
