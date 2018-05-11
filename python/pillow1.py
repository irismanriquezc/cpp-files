from PIL import Image
im= Image.open('chualar_sign.jpg')

print(im)
print(im.size)

width, height = im.size
