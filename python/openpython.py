from urllib.request import Request, urlopen
from bs4 import BeautifulSoup
from pprint import pprint
import numpy as np
import cv2



r = urlopen("https://www.thetech.org/")
image1 = np.asarray(bytearray(r.read()), dtype="uint8")
image = cv2.imdecode(image1, cv2.IMREAD_COLOR)

print(image1)


# cv2.imshow("The image", image)
# cv2.waitKey()
