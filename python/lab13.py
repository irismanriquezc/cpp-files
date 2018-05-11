from urllib.request import Request, urlopen
from bs4 import BeautifulSoup
from pprint import pprint

my_site = 'https://www.thetech.org/'

req = Request(
    my_site,
    headers={'User-Agent': 'Mozilla/5.0'}
)

resp = urlopen(req)
bs_obj = BeautifulSoup(resp.read(), 'lxml')

title = bs_obj.body.h1
print(title.get_text())

# img_links = bs_obj.findAll("a", {"class":"image"})
#
# for img in bs_obj.select('a.image > img'):
#     print(img['src'])
img_links=[]

for link in bs_obj.findAll('img'):
    img_links.append(link.get('src'))


for x in img_links:
    print(x)
