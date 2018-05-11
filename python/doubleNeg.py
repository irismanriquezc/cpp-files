from PIL import Image

im = Image.open('original.jpg')
def negative_image(pixel):
    return tuple(map(lambda a : 255 - a, pixel))
negative_list = map( negative_image, im.getdata() )


im.putdata(list(negative_list))
im.save('onenegative.jpg')

#double negation
im1 = Image.open('onenegative.jpg')
def negative_image1(pixel1):
    return tuple(map(lambda a : 255 - a, pixel1))
negative_list1 = map( negative_image1, im1.getdata() )


im1.putdata(list(negative_list))
im1.save('twonegative.jpg')
