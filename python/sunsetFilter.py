from PIL import Image
im = Image.open('original.jpg')
def map_bg(pixel):
    return (pixel[0], int(pixel[1]*.3), int(pixel[2]*.3))

new_list= map(map_bg, im.getdata())
im.putdata(list(new_list))
im.save('newly.jpg')
