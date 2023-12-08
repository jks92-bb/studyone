# utils.py

def create_weather_response(weather_info):
    return {
        'version': "2.0",
        'template': {
            'outputs': [
                {
                    'basicCard': {
                        'title': f"{weather_info['city']} 날씨 정보",
                        'description': f"온도: {weather_info['temperature']}\n날씨 상태: {weather_info['weather_status']}",
                        'thumbnail': {
                            'imageUrl': 'https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcThSD3FUt9Pxo-VbjIre4nSEuprpIuv2rPO8Q&usqp=CAU',
                        },
                        'buttons':[
                            {'action': "message",
                            'label': '남자 추천 코디 보기',
                            "messageText": f"남자 {weather_info['season']} 코디"
                            },
                            {'action': "message",
                             'label': '여자 추천 코디 보기',
                             "messageText": f"여자 {weather_info['season']} 코디"
                             },
                            {'action' : "webLink",
                             'label' : '남자 추천 코디 영상',
                             'webLinkUrl' : f'https://www.youtube.com/results?search_query=남자+{weather_info['season2']}'

                            }
                        ]
                    }
                }
            ]
        }
    }

def create_codi_response(recommended_codi, image_url, item_link,weather_info):
    return {
        "version": "2.0",
        "template": {
            "outputs": [
                {
                    "basicCard": {
                        'title': f"{recommended_codi} 코디 추천",
                        "description": f"오늘 같은 날엔 이런 코디 어때요?\n",
                        "thumbnail": {
                            "imageUrl": image_url
                        },
                        'buttons': [
                            {
                                "action": "webLink",
                                "label": "구매링크",
                                "webLinkUrl": item_link
                            },
                            {'action': "webLink",
                             'label': '남자 추천 코디 영상',
                             'webLinkUrl': recommend_link

                             }
                        ]
                    }
                }
            ]
        }
    }

def create_HowToUse_response(image_url):
    return {
        "version": "2.0",
        "template": {
            "outputs": [
                {
                    "basicCard": {
                        'title': f"패션 예보 사용법",
                        "description": f"날씨에 따른 패션을 추천해드립니다. \n채팅방 메뉴에 '날씨&코디'를 눌러서 \n사용 할 수 있습니다. \n자세한 사용법은 사용법으 확인해주세요!",
                        "thumbnail": {
                            "imageUrl": 'https://images.pexels.com/photos/5428836/pexels-photo-5428836.jpeg?auto=compress&cs=tinysrgb&w=1600'
                        }
                    }
                }
            ]
        }
    }

def create_UserInput_response(image_url):
    return {
        "version": "2.0",
        "template": {
            "outputs": [
                {
                    "basicCard": {
                        'title': f"현재 계신 곳을 말씀해주세요!",
                        "description": f"예시)서울 날씨 \n이런 식으로 말씀해주시면 좋아요!",
                        "thumbnail": {
                            "imageUrl": 'https://www.urbanbrush.net/web/wp-content/uploads/edd/2022/03/urbanbrush-20220317100328278430.jpg'
                        }
                    }
                }
            ]
        }
    }

def create_fallback_response():
    return {
        "version": "2.0",
        "template": {
            "outputs": [
                {
                    "basicCard": {
                        'title': f"너무 죄송해요...",
                        "description": f"제가 아직 모자른가봐요 ㅠㅠ \n원하시는 것을 좀 더 정확하게 \n말씀해주시면 더 좋을 것 같아요!",
                        "thumbnail": {
                            "imageUrl": 'https://media.istockphoto.com/id/1431297006/ko/%EB%B2%A1%ED%84%B0/%EC%96%91%EB%B3%B5%EC%9D%84-%EC%9E%85%EA%B3%A0-%EC%A0%88%ED%95%98%EA%B3%A0-%EC%82%AC%EA%B3%BC%ED%95%98%EB%8A%94-%EC%97%AC%EC%84%B1%EC%9D%98-%EA%B7%B8%EB%A6%BC.jpg?s=612x612&w=0&k=20&c=KhYUITknvHgv-hGGL7vEknC8_ylM-uKeeNBk5bnmU50='
                        }
                    }
                }
            ]
        }
    }
# 다른 유형의 응답을 생성하는 함수 추가 가능
