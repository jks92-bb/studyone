import csv #csv 파일 읽는 라이브러리 호출


#open 함수를 통해 읽어들인 파일에 대한 내용을 처리
file = open('mydata.csv','r')

rdr = csv.reader(file) #파일 데이터 읽음

mydates = [] #리스트 선언

isStart = True

for line in rdr: #rdr에 있는 걸 한줄씩 읽음
    if isStart: #처음 True ,두번째로 돌때는 False라서 그 다음줄 출력시작
        isStart =False #False로 변환
        pass
    else:
        mydates.append(line)

file.close()
for data in mydates:
        print(data)

for item in mydates:
    print(('상호명:%s, 전화번호:%s, 대표메뉴:%s') % (item[1],item[3],item[4]))


