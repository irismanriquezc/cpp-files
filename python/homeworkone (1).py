import pickle
import hist_machine as hp

with open('image_matrix', 'rb') as my_file:
    pixel_r = pickle.load(my_file)

red_colors= []
green_colors=[]
blue_colors= []

firstbin = 0
secondbin=0
thirdbin=0
fourthbin=0

red = []
green= []
blue =[]

width=800;
height=600;



for i in range(width):
    for m in range(height):
        red_colors.append(pixel_r[m][i][0])
        green_colors.append(pixel_r[m][i][1])
        blue_colors.append(pixel_r[m][i][2])

for i in red_colors:
    if i <64:
        firstbin+=1
    elif i <128:
        secondbin+=1
    elif i<192:
        thirdbin+=1
    else:
        fourthbin+=1
    red = [firstbin, secondbin, thirdbin, fourthbin]

firstbin = 0
secondbin=0
thirdbin=0
fourthbin=0

for i in green_colors:
    if i <64:
        firstbin+=1
    elif i <128:
        secondbin+=1
    elif i<192:
        thirdbin+=1
    else:
        fourthbin+=1
    green = [firstbin, secondbin, thirdbin, fourthbin]


firstbin = 0
secondbin=0
thirdbin=0
fourthbin=0

for i in blue_colors:
    if i <64:
        firstbin+=1
    elif i <128:
        secondbin+=1
    elif i<192:
        thirdbin+=1
    else:
        fourthbin+=1
    blue = [firstbin, secondbin, thirdbin, fourthbin]

blue_colors.sort()
green_colors.sort()
red_colors.sort()



with open('homework.txt', 'w') as homework_file:
    homework_file.write( f'Red: {red}\n Green:{green}\n Blue: {blue}\n')

hp.hist_plotter(red_colors, green_colors, blue_colors)
