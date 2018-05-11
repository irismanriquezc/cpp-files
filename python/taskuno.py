from PIL import Image

im= Image.open("Emilie.jpg")

for x in range(im.width):
    for y in range(im.height):
        colors = im.getpixel((x,y))
        if(colors[0]==255):
            xc= x
            yc=y
            

print(f'The pixel with the highest Red channel is located at {xc} , {yc}')
