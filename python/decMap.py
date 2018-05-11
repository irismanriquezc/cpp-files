from PIL import Image
im = Image.open('meadow-flowers-a.jpg')
def map_red(pixel):
    return (int(pixel[0]*.5), pixel[1], pixel[2])
new_list = map(map_red, im.getdata())
im.putdata(list(new_list))
im.save('new.jpg')
