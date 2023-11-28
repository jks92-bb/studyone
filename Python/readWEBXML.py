import xml.etree.ElementTree as elemTree
import requests

myurl = 'https://api.odcloud.kr/api/3047940/v1/uddi:633f7dab-ffb5-4843-bc65-bd7f3b99dfa2?page=1&perPage=1000&returnType=XML&serviceKey=5yc3PHYWjB8vIqrwOK%2FTSWcKHhDYNacfLGjFQE%2BSPWmXTBg0vuZV%2FWkCQ%2FwJGV4rA6ch7QFRJe8nLu5UZEhHDQ%3D%3D'
response = requests.get(myurl)
xmldatas = elemTree.fromstring(response.text)
myresult = xmldatas.find('data').findall('item')

for item in myresult:
    print('식당명:{},주메뉴:{},전화번호:{}'.format(item.find('./col[@name="상호명"]').text,
                                         item.find('./col[@name="주메뉴"]').text,
                                         item.find('./col[@name="전화번호"]').text))

