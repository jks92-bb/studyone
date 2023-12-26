import requests
import json

headers = {
  "x-nxopen-api-key": "test_e6f5684cbfb6237d5d3ff8740d5ee712aeb8ddd9ba8877df5e1d291949e7e6a280553df27fa82c9e2a239d36cabd158b"
}

characterName = input("캐릭터명: ")


urlString = "https://open.api.nexon.com/maplestroy/v1/id?character_name=" + characterName
response = requests.get(urlString, headers = headers)
print(response.json())



print('Data based on NEXON Open API')

