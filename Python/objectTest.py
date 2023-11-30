myreq = {
    'name' : '장광수',
    'lang' : {
        '언어' : ['한국어','영어'],
        '코딩' : 'C#'
    }
}

print(myreq)
print(myreq['name'])
print(myreq['lang'])
print(myreq['lang']['언어'])
print(myreq['lang']['코딩'])
myreq['lang']['언어'].append('일본어')
print(myreq)
myreq['gender'] = '남성'
myreq['name'] = '장!광수!'
print(myreq)
