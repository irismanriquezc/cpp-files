from PIL import Image
import secrets

my_image = Image.new('RGB', (400,500))

for x in range(my_image.size[0]):
  for y in range(my_image.size[1]):
    rgb_val= (
      secrets.choice(range(20,30)),
      secrets.choice(range(50,250)),
      secrets.choice(range(50,60))
      )
    my_image.putpixel((x,y), rgb_val)

my_image.save("random.jpg")
