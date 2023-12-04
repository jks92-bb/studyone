import xml.etree.ElementTree as elemTree
import requests

url = 'http://apis.data.go.kr/1360000/AsosHourlyInfoService/getWthrDataList'
params ={'serviceKey' : '5yc3PHYWjB8vIqrwOK/TSWcKHhDYNacfLGjFQE+SPWmXTBg0vuZV/WkCQ/wJGV4rA6ch7QFRJe8nLu5UZEhHDQ==', 'pageNo' : '1', 'numOfRows' : '10', 'dataType' : 'XML', 'dataCd' : 'ASOS',
         'dateCd' : 'HR', 'startDt' : '20231203', 'startHh' : '01', 'endDt' : '20231204', 'endHh' : '01', 'stnIds' : '143' }

response = requests.get(url, params=params)
#print(response.content)

xmldatas = elemTree.fromstring(response.text)
# 찾고자 하는 엘리먼트의 경로를 정확하게 지정해봅시다.
data_element = xmldatas.find('.//data')
if data_element is not None:
    myresult = data_element.findall('.//item')
    for item in myresult:
        print('도시:{},시간:{},기온:{}, 강수량:{}, 풍속:{}'.format(item.find('./stnNm').text,
                                                item.find('./tm').text,
                                                item.find('./ta').text,
                                                item.find('./m').text,
                                                item.find('./ws').text))
else:
    print('No data found in the XML.')
