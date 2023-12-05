import requests
from bs4 import BeautifulSoup
import urllib
import ssl

gender = input("성별을 입력하시오 :")
season = input("계절을 입력하시오 :")

# 입력받은 성별과 계절을 이용하여 동적인 URL 생성
search_url = f'https://www.musinsa.com/search/musinsa/coordi?q={urllib.parse.quote(gender)}{urllib.parse.quote(season)}코디&list_kind=small&sortCode=term_date&page=1&display_cnt=0'
context = ssl._create_unverified_context()
#search_url = f'https://www.musinsa.com/search/musinsa/coordi?q={gender}{season}코디&list_kind=small&sortCode=term_date&page=1&display_cnt=0'
#search_url = f'https://www.musinsa.com/search/musinsa/coordi?q={urllib.parse.quote(gender)}{urllib.parse.quote(season)}코디&list_kind=small&sortCode=term_date&page=1&display_cnt=0'
webpage = urllib.request.urlopen(search_url, context=context)
soup = BeautifulSoup(webpage, 'html.parser')

# 스타일 리스트에서 각 아이템을 찾기
style_list = soup.find('ul', {'class': 'style-list'})
if style_list:
    items = style_list.find_all('li', {'class': 'li_box'})
    for item in items:
        # 각 아이템에서 썸네일 이미지의 URL 가져오기
        thumbnail = item.find('div', {'class': 'style-list-thumbnail'})
        if thumbnail:
            thumbnail_url = thumbnail.find('img')['src']
            print(f'Thumbnail URL: {thumbnail_url}')

            # 썸네일 이미지 출력
            response = requests.get(thumbnail_url)
            with open(f'thumbnail_{gender}_{season}.jpg', 'wb') as f:
                f.write(response.content)
            print('썸네일 이미지를 저장했습니다.')
        else:
            print('썸네일을 찾을 수 없습니다.')
else:
    print('스타일 리스트를 찾을 수 없습니다.')


