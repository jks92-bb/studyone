import requests



headers = {
  "x-nxopen-api-key": "test_e6f5684cb158b"
}

characterName = input("캐릭터명: ")


urlString = "https://open.api.nexon.com/maplestroy/v1/id?character_name=" + characterName
response = requests.get(urlString, headers = headers)
print(response.json())



print('Data based on NEXON Open API')

