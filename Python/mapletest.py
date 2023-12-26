import requests
from datetime import datetime, timedelta

#현재 날짜
today=datetime.now()
#1을 뺀것이 yesterday
yesterday= today-timedelta(days=1)
# 날짜를 "yyyy-mm-dd" 형식으로 변환
yesterday_str= yesterday.strftime("%Y-%m-%d")

print(yesterday_str)

def get_character_data(character_name):
    headers = {
        "x-nxopen-api-key": "test_e6f5684cbfb6237d5d3ff8740d5ee712aeb8ddd9ba8877df5e1d291949e7e6a280553df27fa82c9e2a239d36cabd158b"
    }

    url_string = f"https://open.api.nexon.com/maplestory/v1/id?character_name={character_name}"
    response = requests.get(url_string, headers=headers)

    try:
        response.raise_for_status()
        return response.json()

    except requests.exceptions.RequestException as err:
        return f"Error: {err}"


def get_character_basic(character_basic):
    headers = {
        "x-nxopen-api-key": "test_e6f5684cbfb6237d5d3ff8740d5ee712aeb8ddd9ba8877df5e1d291949e7e6a280553df27fa82c9e2a239d36cabd158b"
    }

    url_string = f"https://open.api.nexon.com/maplestory/v1/id?character_name={character_name}"
    response = requests.get(url_string, headers=headers)

    try:
        response.raise_for_status()
        return response.json()

    except requests.exceptions.RequestException as err:
        return f"Error: {err}"






def main():
    characterName = input("캐릭터명: ")
    character_data = get_character_data(characterName)

    # 'ocid' 키의 값을 추출하여 character_basic 변수에 저장
   # character_basic = get_character_basic('ocid', '')

    if isinstance(character_data, dict):
        print('식별자',character_data)
       # print('캐릭터 기본 정보:', character_basic)
        print('Data based on NEXON Open API')
    else:
        print(character_data)

if __name__ == '__main__':
    main()
