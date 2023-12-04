import requests
from bs4 import BeautifulSoup
import urllib
import ssl

#날씨 정보 입력받기
city = input("지역을 치시오. :")

# 입력받은 지역에 대한 날씨 정보 검색
search_url = f'https://search.naver.com/search.naver?sm=top_hty&fbm=0&ie=utf8&query={urllib.parse.quote(city + "날씨")}'
context = ssl._create_unverified_context()
webpage = urllib.request.urlopen(search_url, context=context)
soup = BeautifulSoup(webpage, 'html.parser')

#날씨 정보 추출
temps = soup.find('div','temperature_text')
summary = soup.find('p','summary')

#결과 출력

print(f'{city} 날씨 정보:')
if temps:
    print(f'온도: {temps.text.strip()}')
else:
    print('온도 정보를 찾을 수 없습니다.')

if summary:
    print(f'날씨 상태: {summary.text.strip()}')
else:
    print('날씨 상태 정보를 찾을 수 없습니다.')

# print(temps)
# print(city +temps.text.strip())
# # print(summary)
# print(summary.text.strip())



'''
def get_weather_info(city):
    # 네이버 날씨 페이지 URL
    url = f'https://search.naver.com/search.naver?query={city}+날씨'

    # 적절한 User-Agent 헤더 추가
    headers = {'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/58.0.3029.110 Safari/537.3'}

    # 요청을 보내고 HTML 응답을 받음
    response = requests.get(url, headers=headers)

    # 응답이 성공적인지 확인
    if response.status_code == 200:
        # BeautifulSoup을 사용하여 HTML 파싱
        soup = BeautifulSoup(response.text, 'html.parser')

        # 지역 날씨 정보 추출
        temperature_element = soup.select_one('.todaytemp')

        # 엘리먼트가 찾아졌는지 확인한 후에 text 속성에 접근
        if temperature_element:
            temperature = temperature_element.text
            weather_condition = soup.select_one('.cast_txt').text

            # 결과 출력
            print(f'{city} 날씨 정보:')
            print(f'온도: {temperature}℃')
            print(f'날씨 상태: {weather_condition}')
        else:
            print(f'온도 정보를 찾을 수 없습니다.')
    else:
        print(f'오류 발생: {response.status_code}')

# 사용자가 원하는 지역으로 변경
city_to_search = '서울'

# 날씨 정보 가져오기
get_weather_info(city_to_search)
'''