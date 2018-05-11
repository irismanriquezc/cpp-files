from PIL import Image
im = Image.open('meadow-flowers-a.jpg')
def decrease_red(picture):
    new_list = []
    for p in picture.getdata():
        temp = (int(p[0]*.5), p[1], p[2])
        new_list.append(temp)
    picture.putdata(new_list)
    picture.save('new_pic.jpg')
decrease_red(im)
