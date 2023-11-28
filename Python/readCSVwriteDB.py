import csv #csv 파일 읽는 라이브러리 호출
import pymysql

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

sql = 'insert into apitable(name, hp, menu) '
sql = sql + "values('%s', '%s', '%s')"

for item in mydates:
    conn = pymysql.connect(
        host='localhost',
        user='root',
        password='1234',
        db='apidb',
        charset='utf8'
    )
    #with : db 연결 후에 다 되면 자동으로 연결 끊어줌.
    with conn:
        with conn.cursor() as cur:#DB 안에 실제 명령 수행하는 것.
            cur.execute(sql % (item[1],item[3],item[4]))
            conn.commit()
    #strip() : 양 옆 공백 제거.
    #replace() : 특정 문자를 다른 문자로 대체함.
