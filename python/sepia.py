from PIL import Image

im= Image.open('original.jpg')

def posterize(p):
    r=64 if p[0]<128 else 233
    g=64 if p[0]<128 else 233
    b=64 if p[0]<128 else 233

    return r,g,b

def sepia(p):
# tint shadows
if p[0] < 63:
    r,g,b = int(p[0] * 1.1), p[1], int(p[2] * 0.9)
# tint midtones
elif p[0] > 62 and p[0] < 192:
    r,g,b = int(p[0] * 1.15), p[1], int(p[2] * 0.85)
# tint highlights
else:
    r = int(p[0] * 1.08)
    if r > 255:
        r = 255
    g,b = p[1], int(p[2] * 0.5)
return r, g, b
