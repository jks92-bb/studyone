from flask import Flask, request, jsonify
from maple import get_character_basic, get_character_data, get_character_stat
from datetime import datetime, timedelta
import level

today = datetime.now()
yesterday = today - timedelta(days=1)
day_before_yesterday = today - timedelta(days=2)
yesterday_str = yesterday.strftime("%Y-%m-%d")

print(yesterday_str)

import requests
from datetime import datetime, timedelta

def get_yesterday_date():
    yesterday_date = (datetime.now() - timedelta(days=1)).strftime("%Y-%m-%d")
    return yesterday_date

application = Flask(__name__)

@application.route("/hellomaple", methods=["POST"])
def hello_maple():
    req = request.get_json()
    my_req = req["userRequest"]["utterance"]
    print(req)

    response = None

    if my_req:  # 만약 발화값이 비어있지 않다면
        # main 함수에서 반환된 결과를 사용
        result = main(my_req)  # 발화값을 main 함수에 전달

        if result:
            # 여기에서 result를 이용하여 원하는 응답 생성
            response = {
                "version": "2.0",
                "template": {
                    "outputs": [
                        {
                            "basicCard": {
                                "thumbnail": {
                                    "imageUrl": result['이미지']
                                },
                                "title": result['캐릭터명'],
                                "description": f"레벨: {result['레벨']}\n직업: {result['직업']}\n"
                                    f"경험치: {result['경험치']}% (어제 경험치 {result['경험치_변동']})\n"
                                    + "\n".join([f"{stat.split(':')[0]}: {stat.split(':')[1]}" for stat in result['능력치']])
                            }
                        }
                    ]
                }
            }
        else:
            response = {"error": "캐릭터 정보를 찾을 수 없습니다."}
    else:
        # 폴백 응답 사용
        response = {"fallback": True}

    return jsonify(response)

def main(characterName):
    # 여기에서 매개변수로 받은 characterName을 사용
    character_data = get_character_data(characterName)

    if isinstance(character_data, dict):
        ocid = character_data.get('ocid', '')
        yesterday_date = get_yesterday_date()
        character_basic = get_character_basic(ocid, yesterday_date)
        character_stat = get_character_stat(ocid, yesterday_date)

        result = {}  # 결과 담을 딕셔너리

        result['캐릭터명'] = character_basic.get('character_name', '')
        result['월드'] = character_basic.get('world_name', '')
        result['레벨'] = character_basic.get('character_level', '')
        result['직업'] = character_basic.get('character_class', '')
        result['경험치'] = float(character_basic.get('character_exp_rate', '0'))  # 문자열을 숫자로 변환
        result['이미지'] = character_basic.get('character_image', '')
        result['능력치'] = []

        selected_stats = ['최소 스탯공격력', '최대 스탯공격력', '전투력', '보스 몬스터 데미지', '최종 데미지', '데미지', '방어율 무시', '크리티컬 데미지', '스타포스', '아케인포스', '어센틱포스']

        for stat in character_stat.get('final_stat', []):
            stat_name = stat.get('stat_name', '')
            stat_value = stat.get('stat_value', '')
            if stat_name in selected_stats:
                result['능력치'].append(f'{stat_name}: {stat_value}')

        # 어제와 엊그제 경험치 비교
        day_before_yesterday_exp = float(get_character_basic(ocid, day_before_yesterday.strftime("%Y-%m-%d")).get('character_exp_rate', '0'))
        yesterday_exp = float(get_character_basic(ocid, yesterday_date).get('character_exp_rate', '0'))
        result['경험치_변동'] = compare_exp(yesterday_exp, day_before_yesterday_exp)

        print('Data based on NEXON Open API')
        print(result)
        return result
    else:
        print(character_data)

def compare_exp(today_exp, day_before_exp):
    diff = today_exp - day_before_exp
    if diff > 0:
        return f"+{diff}%"
    elif diff < 0:
        return f"{diff}%"
    else:
        return "변동 없음"

if __name__ == "__main__":
    application.run(host='0.0.0.0', port=5000)
