import json
from urllib.request import urlopen
import requests

# URL 문자열
domain = "https://apihub.kma.go.kr/api/typ01/url/kma_sfcdd.php?"
tm = "tm=20150715&"
stn = "stn=0&"
help_param = "help=1&"
authKey = "authKey=kgT8SNOvQ06E_EjTr_NONw"

#kgT8SNOvQ06E_EjTr_NONw
url = domain + tm + stn + help_param + authKey

with urlopen(url) as f:
    html = f.read()
    print(html)

# # requests 라이브러리를 사용하여 GET 요청을 보내고 응답을 받습니다.
# response = requests.get(url)
#
# # 응답을 JSON 형태로 파싱합니다.
# json_response = response.json()
#
# # JSON 데이터 출력
# print(json_response)



#get 요청
# response = urllib.request.urlopen(url)
# response = response.read().decode('utf8')
#
# # 응답 json 형태 변환
# data = json.loads(response)
# json_response = response.json()
#
# print(json_response)