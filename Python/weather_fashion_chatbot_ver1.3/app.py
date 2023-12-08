# app.py

from flask import Flask, request, jsonify
import urllib.parse
from modules.weather import get_weather_info
from modules.utils import create_weather_response, create_codi_response, create_HowToUse_response, create_UserInput_response, create_fallback_response
from modules.codi import get_codi_by_season

application = Flask(__name__)

@application.route("/hellokakao", methods=["POST"])
def hello_kakao():
    req = request.get_json()
    my_req = req["userRequest"]["utterance"]
    print(req)

    response = None

    if "날씨" in my_req:
        city_keywords = ["서울", "부산", "인천", "대구", "대전", "광주", "수원", "울산", "용인", "고양", "창원", 
                         "성남", "화성", "청주", "부천", "남양주", "천안", "전주", "안산", "안양", "김해", "평택", 
                         "포항", "제주", "시흥", "파주", "의정부", "김포", "구미", "광주", "양산", "원주", "진주", 
                         "세종", "광명", "아산", "익산", "춘천", "경산", "군포", "군산", "하남", "여수", "순천", 
                         "경주", "거제", "목포", "오산", "이천", "강릉", "양주", "충주", "안성", 
                         "구리", "서산", "서귀포", "당진", "안동", "포천", "의왕", "광양", "김천", 
                         "제천", "통영", "금산", "서천", "고양", "여주", "영월", "강진", "무안", 
                         "남원", "진천", "예산", "가평", "영암", "금산", "고창", "과천", "서천", 
                         "고성", "부안", "의성", "옥천", "영동", "울진", "완도", "예천", "철원", 
                         "태백", "연천", "담양", "합천", "하동", "횡성", "남해", "삼척", "화천", 
                         "청송", "구례", "임실", "울릉"]
        city = next((s.strip() for s in city_keywords if s in my_req), None)
        weather_info = get_weather_info(city)
        response = create_weather_response(weather_info)
    elif "코디" in my_req and ("남자" in my_req or "여자" in my_req):
        # Extract season keyword from the user's utterance
        gender_keywords = ["남자","여자"]
        season_keywords = ["따뜻한", "가벼운", "시원한", "따스한"]
        gender = next((g.strip() for g in gender_keywords if g in my_req), None)
        season = next((s.strip() for s in season_keywords if s in my_req), None)

        if gender and season:
            recommended_codi, image_url, item_link = get_codi_by_season(gender, season)
            response = create_codi_response(recommended_codi, image_url, item_link)
        else:
            response = {"error": "계절 키워드를 찾을 수 없습니다."}
    elif "패션 예보 사용법" in my_req:
        response = create_HowToUse_response(my_req)
    elif "일기예보 알려줘" in my_req:
        response = create_UserInput_response(my_req)
    else:
        # 폴백 응답 사용
        response = create_fallback_response()
    return jsonify(response)

if __name__ == "__main__":
    application.run(host='0.0.0.0', port=5000)
