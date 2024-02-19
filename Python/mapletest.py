import requests
from datetime import datetime, timedelta
import json

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
        "x-nxopen-api-key": "test_e6f5684cbfb6237d5d3ff8740d5ee712aeb8ddd9ba8877df5e1d291949e7e6a280553df27fa82c9e2a239d36cabd158b"
    }

    url_string = f"https://open.api.nexon.com/maplestory/v1/id?character_name={character_name}"
    response = requests.get(url_string, headers=headers)

    try:
        response.raise_for_status()
        return response.json()

    except requests.exceptions.RequestException as err:
        return "캐릭터 정보를 불러오질 못하고 있습니다." + f"Error: {err}"
        #return f"Error: {err}"

def get_character_basic(ocid, date):
    if not ocid:
        return {"캐릭터 정보가 불확실합니다. 불러오질 못하고 있습니다."}
    headers = {
        "x-nxopen-api-key": "2"
    }

    url_string = f"https://open.api.nexon.com/maplestory/v1/character/basic?ocid={ocid}&date={date}"
    response = requests.get(url_string, headers=headers)

    try:
        response.raise_for_status()
        return response.json()

    except requests.exceptions.RequestException as err:
        return f"Error: {err}"

def get_character_stat(ocid, date):
    if not ocid:
        return {"캐릭터 정보가 불확실합니다. 불러오질 못하고 있습니다."}
    headers = {
        "x-nxopen-api-key": "2"
    }

    url_string = f"https://open.api.nexon.com/maplestory/v1/character/stat?ocid={ocid}&date={date}"
    response = requests.get(url_string, headers=headers)

    try:
        response.raise_for_status()
        return response.json()

    except requests.exceptions.RequestException as err:
        return f"Error: {err}"

# # 캐릭터 기본 정보 json데이터
# character_basic_info_json ='''
# {}
# '''
# #json 데이터 파싱
# character_basic_info = json.loads(character_basic_info_json)

# #필요정보 가져오기
# character_name = character_basic_info.get('character_name', '')
# world_name = character_basic_info.get('world_name', '')
# character_level = character_basic_info.get('character_level', '')
# character_class = character_basic_info.get('character_class', '')


def main():
    characterName = input("캐릭터명: ")
    character_data = get_character_data(characterName)

    if isinstance(character_data, dict):
        ocid = character_data.get('ocid', '')
        yesterday_date = get_yesterday_date()
        character_basic = get_character_basic(ocid, yesterday_date)
        character_stat = get_character_stat(ocid, yesterday_date)

        result = {} #결과 담을 딕셔너리

        result['캐릭터명'] = character_basic.get('character_name', '')
        result['월드'] = character_basic.get('world_name', '')
        result['레벨'] = character_basic.get('character_level', '')
        result['직업'] = character_basic.get('character_class', '')
        result['이미지'] = character_basic.get('character_image', '')

        print('식별자:', character_data)
        #print('캐릭터 기본 정보:', character_basic)
        #print('캐릭터 능력치 정보', character_stat)
        print('캐릭터명:', character_basic.get('character_name', ''))
        print('월드:', character_basic.get('world_name', ''))
        print('레벨:', character_basic.get('character_level', ''))
        print('직업:', character_basic.get('character_class', ''))
        print(character_basic.get('character_image', ''))

        # character_stat이 리스트 형태로 제공되므로 반복문을 통해 각각의 능력치를 출력
        selected_stats = ['최소 스탯공격력','최대 스탯공격력','전투력','보스 몬스터 데미지','최종 데미지','데미지','방어율 무시','크리티컬 데미지','STR', 'DEX', 'INT', 'LUK','스타포스','아케인포스','어센틱포스']

        result['능력치'] = []
        for stat in character_stat.get('final_stat', []):
            stat_name = stat.get('stat_name', '')
            stat_value = stat.get('stat_value', '')
            if stat_name in selected_stats:
                print(f'{stat_name}: {stat_value}')
                result['능력치'].append(f'{stat_name}: {stat_value}')
                #result['전투력'] = character_stat.get('remain_ap', '')

        #result['데이터소스'] = 'Data based on NEXON Open API'

        #print('전투력:', character_stat.get('remain_ap', ''))

        print('Data based on NEXON Open API')
        print(result)
        return  result
    else:
        print(character_data)

if __name__ == '__main__':
    main()
