from PIL import Image
im = Image.open('meadow-flowers-a.jpg')
new_list = map( lambda a : (int((a[0]+a[1]+a[2])/3),) * 3,
im.getdata() )

im.putdata(list(new_list))
im.save('gray2.jpg')
