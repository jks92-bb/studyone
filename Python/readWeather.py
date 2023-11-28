import xml.etree.ElementTree as elemTree
import requests
import matplotlib.pyplot as plt
from matplotlib import font_manager, rc
import pymysql

font_path = "C:/Windows/Fonts/D2CodingBold-Ver1.3.2-20180524-ligature.ttf"
#폰트설정
font_name = font_manager.FontProperties(fname=font_path).get_name()
rc('font', family=font_name)


url = 'http://apis.data.go.kr/1360000/AsosDalyInfoService/getWthrDataList'
params ={'serviceKey' : '5yc3PHYWjB8vIqrwOK/TSWcKHhDYNacfLGjFQE+SPWmXTBg0vuZV/WkCQ/wJGV4rA6ch7QFRJe8nLu5UZEhHDQ==',
         'pageNo' : '1', 'numOfRows' : '10', 'dataType' : 'XML', 'dataCd' : 'ASOS', 'dateCd' : 'DAY', 'startDt' : '20221201',
         'endDt' : '20221231', 'stnIds' : '143' }

response = requests.get(url, params=params)
xmldatas = elemTree.fromstring(response.text)
# 찾고자 하는 엘리먼트의 경로를 정확하게 지정해봅시다.
myresult = xmldatas.findall('.//item')

dates = []
avg_temps = []
max_temps = []
min_temps = []
cities = []


for item in myresult:
    print('도시:{},시간:{},평균기온:{}, 최고기온:{}, 최저기온:{}'.format(item.find('./stnNm').text,
                                                item.find('./tm').text,
                                                item.find('./avgTa').text,
                                                item.find('./maxTa').text,
                                                item.find('./minTa').text))
for item in myresult:
    cities.append(item.find('./stnNm').text)
    dates.append(item.find('./tm').text)
    avg_temps.append(float(item.find('./avgTa').text))
    max_temps.append(float(item.find('./maxTa').text))
    min_temps.append(float(item.find('./minTa').text))

#mysql 연결
conn = pymysql.connect(
    host='localhost',
    user='root',
    password='1234',
    db='apidb',
    charset='utf8')

# 데이터 삽입
sql = 'insert into weather_api(stnNm, tm, avgTa, maxTa, minTa) '
sql = sql + " values(%r, %s, %s, %s, %s)"  # %r로 변경

with conn.cursor() as cursor:
    for item in myresult:
        stnNm = item.find('./stnNm').text
        tm = item.find('./tm').text
        avgTa = float(item.find('./avgTa').text)
        maxTa = float(item.find('./maxTa').text)
        minTa = float(item.find('./minTa').text)
        # 해당 tm의 데이터가 이미 존재하는지 확인
        cursor.execute('SELECT COUNT(*) FROM weather_api WHERE tm = %s', (tm,))
        if cursor.fetchone()[0] == 0:
            cursor.execute(sql, (stnNm, tm, avgTa, maxTa, minTa))
#변경사항 저장.
conn.commit()
conn.close()

# sql = 'select *from weather_api'
# with conn.cursor() as cursor:
#     cursor.execute(sql)
#     result = cursor.fetchall()


# 데이터 처리
# dates = [row[1] for row in result]  # tm 컬럼
# avg_temps = [row[2] for row in result]  # avgTa 컬럼
# max_temps = [row[3] for row in result]  # maxTa 컬럼
# min_temps = [row[4] for row in result]  # minTa 컬럼






#차트 생성
plt.figure(figsize=(10, 6))
plt.plot(dates, avg_temps, label='평균 기온', marker='o')
plt.plot(dates, max_temps, label='최고 기온', marker='o')
plt.plot(dates, min_temps, label='최저 기온', marker='o')

#차트 설정
plt.title('기온추이')
plt.xlabel('날짜')
plt.ylabel('온도℃')
plt.xticks(rotation=45)
plt.legend()

# UTF-8 설정
plt.rcParams['axes.unicode_minus'] = False  # minus 기호 깨짐 방지

# 차트 표시
plt.tight_layout()
plt.show()


