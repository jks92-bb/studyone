import requests
from datetime import datetime, timedelta

#현재 날짜
today=datetime.now()
#1을 뺀것이 yesterday
yesterday= today-timedelta(days=1)
# 날짜를 "yyyy-mm-dd" 형식으로 변환
yesterday_str= yesterday.strftime("%Y-%m-%d")

print(yesterday_str)

import requests
from datetime import datetime, timedelta

def get_yesterday_date():
    # 어제의 날짜를 "yyyy-mm-dd" 형식으로 계산
    yesterday_date = (datetime.now() - timedelta(days=1)).strftime("%Y-%m-%d")
    return yesterday_date

def get_character_data(character_name):
    headers = {
        "x-nxopen-api-key": "ㅏ"
    }

    url_string = f"https://open.api.nexon.com/maplestory/v1/id?character_name={character_name}"
    response = requests.get(url_string, headers=headers)

    try:
        response.raise_for_status()
        return response.json()

    except requests.exceptions.RequestException as err:
        return f"Error: {err}"

def get_character_basic(ocid, date):
    headers = {
        "x-nxopen-api-key": "ㅏ"
    }

    url_string = f"https://open.api.nexon.com/maplestory/v1/character/basic?ocid={ocid}&date={date}"
    response = requests.get(url_string, headers=headers)

    try:
        response.raise_for_status()
        return response.json()

    except requests.exceptions.RequestException as err:
        return f"Error: {err}"

def main():
    characterName = input("캐릭터명: ")
    character_data = get_character_data(characterName)

    if isinstance(character_data, dict):
        ocid = character_data.get('ocid', '')
        yesterday_date = get_yesterday_date()
        character_basic = get_character_basic(ocid, yesterday_date)

        print('식별자:', character_data)
        print('캐릭터 기본 정보:', character_basic)
        print('Data based on NEXON Open API')
    else:
        print(character_data)

if __name__ == '__main__':
    main()
