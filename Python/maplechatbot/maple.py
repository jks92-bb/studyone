import requests
import requests, json
from flask import Flask, request, jsonify, abort
import sys
import urllib.request
import requests
from urllib.parse import urlparse
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
        "x-nxopen-api-key": "키값"
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
        "x-nxopen-api-key": "키값"
    }

    url_string = f"https://open.api.nexon.com/maplestory/v1/character/basic?ocid={ocid}&date={date}"
    response = requests.get(url_string, headers=headers)

    try:
        response.raise_for_status()
        return response.json()

    except requests.exceptions.RequestException as err:
        return f"Error: {err}"

def get_character_stat(ocid, date):
    headers = {
        "x-nxopen-api-key": "키값"
    }

    url_string = f"https://open.api.nexon.com/maplestory/v1/character/stat?ocid={ocid}&date={date}"
    response = requests.get(url_string, headers=headers)

    try:
        response.raise_for_status()
        return response.json()

    except requests.exceptions.RequestException as err:
        return f"Error: {err}"
