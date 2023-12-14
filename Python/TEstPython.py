import numpy as np

# 단일 값의 형 변환
float_value = float(1)
# float_value = np.float(1) 현재 numpy버전1.2이상이므로 사용중단
print(float_value)

# 배열의 데이터 타입을 'float'으로 지정
float_array = np.array([1, 2], dtype='float')
print(float_array)

#일반 리스트 컴프리헨션 사용
x= [1, 3, 4]
x1 = [a**2 for a in x]
print(x1)
x2 = x*2
print(x2)

#numpy 사용간단구현
xn = np.array([1,3,4])
xn1 = xn**2
print(xn1)

r = list(range(2,9,3)) # 2부터 (9-1)까지 3씩 증가시킨다.
print(r)

rn = np.arange(2, 4, 0.5) # 2부터 4미만까지 0.5씩 증가시킨다
print(rn)

day1 = np.datetime64('2023-12-14')
print(day1)

day2 = np.datetime64('2023-12','D') #12월 첫째날
day3 = day2 + np.timedelta64(23, 'D') #12월 첫째날 +24일
print(day3)

A = np.array([[1,0,3,4], [5,6,0,8], [9,10,11,12]])
print(A)

