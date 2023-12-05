import requests
from bs4 import BeautifulSoup
import urllib
import ssl
import random


#날씨 정보 입력받기
city = input("지역을 치시오. :")

# 입력받은 지역에 대한 날씨 정보 검색
search_url = f'https://search.naver.com/search.naver?sm=top_hty&fbm=0&ie=utf8&query={urllib.parse.quote(city + "날씨")}'
context = ssl._create_unverified_context()
webpage = urllib.request.urlopen(search_url, context=context)
soup = BeautifulSoup(webpage, 'html.parser')

#날씨 정보 추출
temps = soup.find('div','temperature_text')
c_temp = soup.find('strong',{'class':''}).text
summary = soup.find('p','summary')
misegroup = soup.find('div',{'class':'report_card_wrap'})
mise2 = misegroup.findAll('li')
#pprint(mise2)
#print(len(mise2))

# 온도 정보에서 숫자와 소수점만 추출하여 temperature 변수에 저장
temperature = ''.join(filter(lambda x: x.isdigit() or x == '.', c_temp))
#print(temperature)

# 추출한 온도 문자열을 실수형으로 변환
temperatures = float(temperature)
#날씨 정보 변수 초기화
weather =''

# 계절 설정
if( 7 < temperatures <20):
    # 랜덤으로 '가을' 또는 '봄' 선택
    weather = random.choice(['가을', '봄'])
    print(weather)
elif (temperatures <= 7):
    weather = '겨울'
    print(weather)
elif (temperatures >= 20):
    weather = '여름'
    print(weather)





#결과 출력
print(f'{city} 날씨 정보')
if temps:
    print(f'온도: {temps.text.strip()}')

else:
    print('온도 정보를 찾을 수 없습니다.')
if summary:
    print(f'날씨 상태: {summary.text.strip()}')
else:
    print('날씨 상태 정보를 찾을 수 없습니다.')
#미세먼지, 초미세먼지, 자외선, 일몰 긁어오기.
print('--------------------------------')
for item in mise2:
    #print("!")
    title = item.find('strong',{'class':'title'}).text
    contents = item.find('span',{'class':'txt'}).text
    print(title+":"+contents)
    #print("!")

print('--------------------------------')
# if misegroup:
#     print(f'{misegroup.text.strip()}')
