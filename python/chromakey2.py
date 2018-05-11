import math
from PIL import Image


from colormath.color_objects import sRGBColor, LabColor
from colormath.color_conversions import convert_color
from colormath.color_diff import delta_e_cie2000
def distance(color1, color2):
    color1_rgb = sRGBColor(color1[0], color1[1], color1[2], True)
    color2_rgb = sRGBColor(color2[0], color2[1], color2[2], True)
    color1_lab = convert_color(color1_rgb, LabColor)
    color2_lab = convert_color(color2_rgb, LabColor)
    delta_e = delta_e_cie2000(color1_lab, color2_lab)
    return delta_e


def chromakey(source, bg):
    for x in range(852):
        for y in range(480):

            cur_pixel = source.getpixel((x,y))
            green = (0, 190, 60)

            if distance(cur_pixel, green) < 25:
                source.putpixel((x,y), bg.getpixel((x,y)))

    source.save("chromakeyed1.jpg")

plane= Image.open("airplane.jpg")
aliens = Image.open("newly.jpg")

chromakey(plane, aliens
