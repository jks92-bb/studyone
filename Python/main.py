"""
여러 줄 주석도 되고
여러 줄 짜리 문자열도 됨.
"""
'''
작은 따옴표로도 여러 줄 주석 가능함
여러 줄 주석이자 문자열임
'''
print("Hello")
print('world')
print(2*3)
print(2**3)
print(3%1)
print(5//3)
print(5/3)
print(5%3)
msg = '안녕'
msg2 = "그래 '그래 '"
print(msg,msg2)
list1 = [1,2,3,4,5]
a = list1.pop()
print(a)

tuple1 = (1,2,3,4,5)
'tuple1[0] = 100'
tuple1 = tuple1 + (100,)
print(tuple1)

teacher ={
    'name' : '이주성',
    0 : '그의 가치는 무한하다'
}
print(teacher[0])
print(teacher['name'])
teacher['birth'] = '19920405'
print(teacher['birth'])
del teacher['name']
print(teacher)
teacher.clear()

info1 = True
info2 = False
info3 = 1==1
info4 = 10>100
print(info1,info4,info3, info2)

myinfo = True
if myinfo:
    print("이 정보는 사실입니다.")
myinfo2 = 10>100
if myinfo2:
    print("이것은 거짓이다.")
js_age = 32
if js_age<30:
    print("20대? 10대?")
else:
    print("좋았어")
    print("나이 :" +str(js_age))



