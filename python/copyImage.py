from PIL import Image



def copy_jeanne():
    # source image
    jeanne = Image.open("jeanne.png")
    # destination image
    canvas = Image.new("RGB", (640,480), "salmon")

    target_x = 150
    for source_x in range(0,jeanne.width,2):
        target_y = 100

        for source_y in range(0,jeanne.height,2):
            color = jeanne.getpixel((source_x, source_y)) # get pixels from the source
            canvas.putpixel((target_x, target_y), color) # put pixels onto target
            target_y += 1
        target_x +=1

    canvas.save("copy_jeanne.png")

copy_jeanne()
