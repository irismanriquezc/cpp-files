import pickle
from PIL import Image



with open('image_matrix', 'rb') as my_file:
    pixel_r = pickle.load(my_file)

matrix_image= Image.new('RGB', (800,600))

width=800;
height=600;



for i in range(height):
    for m in range(width):
        rgb_val=pixel_r[i][m]
        matrix_image.putpixel((m,i), rgb_val)

matrix_image.save("matrix_imag.jpg")
