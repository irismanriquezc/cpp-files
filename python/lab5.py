from PIL import Image

with open('mona.txt', 'r') as my_file:
    allData= my_file.readlines()
mona_image= Image.new('L', (18,29))

pixel_list= []
counter1=0
index= 522

for line in allData:
    clear= line[0:-2]
    splitting=clear.split(' ')
    pixel_list.append(splitting)

print(len(pixel_list))


for x in range(mona_image.size[1]):
    for y in range(mona_image.size[0]):
        pixel_list[x][y] = int(pixel_list[x][y])
        mona_image.putpixel((y,x), pixel_list[x][y])



mona_image.save("MonaLisa.jpg")

# This lab was actually very difficult for me due to the imbedded for loops
# that I worked with. It was similar to a 2D array in c++ which are hard
# for me to picture in my head. I learned about the line for loops, which are super
# useful. Also the splitting function was something that I was not familiar
# with and one of the TAs presented me to. It was nice seeing the picture
# finally appearing after so much work.
