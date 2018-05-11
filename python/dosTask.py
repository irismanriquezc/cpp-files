from PIL import Image

bCanvas= Image.new("RGB", (2000,2000), "magenta")

def imagen(imm, tx, ty):
    target_x=tx
    for x in range(imm.width):
        target_y=ty
        for y in range(imm.height):
            colors= imm.getpixel((x,y))
            bCanvas.putpixel((target_x, target_y), colors)
            target_y+=1
        target_x+=1

def copy_images():
    im1= Image.open('lol1.jpg')
    im2= Image.open('twonegative.jpg')
    im3= Image.open('lol.jpg')


    imagen(im1, 500, 100)
    imagen(im2, 2, 800)
    imagen(im3, 1100, 1000)

    bCanvas.save('collage.jpg')


copy_images()
