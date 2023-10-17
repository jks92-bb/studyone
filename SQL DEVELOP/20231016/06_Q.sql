--1. 부서 테이블 생성
--- 코드 CHAR(3)
--- 부서명 VARCHAR2(100)
create table buseo (code char(3) primary key, name varchar2(100));

--2. 직급 테이블 생성
--- 코드 INT
--- 직급명 VARCHAR2(100)
create table jikgeup(code int primary key, name varchar2(100));

--3. 인사 테이블을 만든다.
--- 사번 CHAR(5)
--- 부서코드
--- 직급코드
--- 이름 VARCHAR2(100)
--- 나이 INT
--- 성별 CHAR(1)
--- HP VARCHAR2(15) UNIQUE
create table insa(
sabeon char(5),
buseo_code char(3) references buseo(code),
jikgeup_code int references jikgeup(code),
name varchar2(100),
age int,   
gender char(1),
hp varchar2(15) unique);

insert into buseo values('A01', '교무1팀');
insert into buseo values('B01', '교무2팀');
insert into buseo values('CCC', '경영지원');

CREATE SEQUENCE jikseq START WITH 1 INCREMENT BY 1;

insert into jikgeup values(jikseq.nextval, '사원');
insert into jikgeup values(jikseq.nextval, '대리');
insert into jikgeup values(jikseq.nextval, '과장');


insert into insa values('00001', 'A01', 1, '이동준', 35, 'M', '010-2940-1613');
insert into insa values('00002', 'B01', 2, '이유나', 25, 'F',NULL);
insert into insa values('00003', 'CCC', 3, '김형준', 45, 'M', '010-2940-1111');
insert into insa values('00004', 'CCC', 2, '박준현', 40, 'M', '010-2940-2222');
insert into insa values('00005', 'B01', 2, '정제원', 29, 'M', '010-2940-3333');
insert into insa values('00006', 'B01', 2, '곽봉구', 55, 'M', '010-2940-4444');
insert into insa values('00007', 'CCC', 3, '방채문', 60, 'M', '010-5555-1613');
insert into insa values('00008', 'A01', 3, '최광욱', 38, 'M', '010-1234-1613');
insert into insa values('00009', 'A01', 3, '표주광', 37, 'M', '010-7777-1613');
insert into insa values('0000A', 'A01', 1, '정효미', 27, 'F', '010-8888-1613');

select *from buseo;
select *from jikgeup;
select *from insa;

--6. 성이 이씨인 사람을 찾는 쿼리를 작성(like 혹은 구글링이나 gpt 쓰기)
-- %의 의미 : 최소 0글자 이상.
-- '이%' = 이 , 이동준, 이이 등등
SELECT * FROM insa WHERE NAME LIKE '이%';

-- 맨 뒷 글자가 준.
SELECT * FROM insa WHERE NAME LIKE '%준';

-- 준이 포함되면 다 ok
select *from insa where name like '%준%';

-- 가장 많은 나이는 몇 살인지 출력
SELECT MAX(AGE) 최고령 FROM insa;

--7.가장 나이가 어린 사람은 누구인지 출력(중첩질의문을 쓰면 되는 데 무슨 말인지 모르면 구글링이나 gpt)
-- 이런 식의 작성을 중첩 질의라고 한다.
SELECT NAME 최연소 FROM insa WHERE AGE = (SELECT MIN(AGE) FROM insa);

--8. 가장 나이가 많은 부서 찾기(평균 나이 기준)

-- 부서별 평균 나이 구해야 한다.
select buseo_code, avg(age) from insa group by buseo_code;
select buseo_code, round(avg(age),1) from insa group by buseo_code;

-- 뷰로 만들 때 중요한 것 round, avg 등을 이용해서 view 를 만들 때는
-- 이 부분에 대한 임시 이름을 붙여 줘야 함.
create view avg_buseo as select buseo_code, round(avg(age),1) RVA 
from insa group by buseo_code;
--뷰의 결과
select *from avg_buseo;
-- 뷰는 insert,update,delete가 안된다.
-- 없는 컬럼에 대해서는 추가 수정 삭제 안됌.

-- 그 중에서 max인 값을 구해야 한다.
select *from avg_buseo where rva=(select max(rva) from avg_buseo);

-- 부서별 평균 나이가 max랑 일치하는 부서를 찾아야 한다.
select name, buseo_code, rva from avg_buseo
join buseo on avg_buseo.buseo_code= buseo.code
where rva=(select max(rva) from avg_buseo);

--SELECT 부서명, AVG(AGE) FROM rva GROUP BY 부서명 ORDER BY AVG(AGE) DESC FETCH FIRST 1 ROW ONLY;

-- 9. 성별 별 평균 나이 출력하기
SELECT gender ,AVG(AGE) FROM insa GROUP BY GENDER;

-- 10. 인사 테이블을 출력하되, 부서코드와 직급코드들도 부서명과 직급명으로 출력하기 즉, 3개의 테이블을 서로 조인해야 함
--ALTER TABLE insa ADD CONSTRAINT buseo_code FOREIGN KEY (buseo_code) REFERENCES buseo(CODE);
--ALTER TABLE insa ADD CONSTRAINT jikgeup_code FOREIGN KEY (jikgeup_code) REFERENCES jikgeup(CODE);
--CREATE VIEW ABC AS SELECT NUM, buseo.name 부서명, jikgeup.name 직급명, NAME, AGE, GENDER, HP FROM buseo,jikgeup HR WHERE code = buseo.code AND code=jikgeup.code;
--SELECT * FROM ABC;

-- 1. join을 이용하는 법.
-- if문의 and를 생각. 조건을 좁혀가는것.
SELECT sabeon,insa.name,buseo.name,jikgeup.name from insa join buseo on
insa.buseo_code = buseo.code join jikgeup on insa.jikgeup_code = jikgeup.code;

--2. where을 이용하는 방법
-- 나이순 정렬
SELECT sabeon 사번 ,insa.name 이름 ,buseo.name 부서 ,jikgeup.name 직급 , age 나이 from insa , buseo,jikgeup
where insa.buseo_code= buseo.code and insa.jikgeup_code = jikgeup.code
order by 나이 desc;

-- 부서랑 나이별로 묶은 뒤 40 세 이상만 표시
 SELECT BUSEO_CODE, ROUND(AVG(AGE),1) RVA FROM INSA 
GROUP BY BUSEO_CODE HAVING ROUND(AVG(AGE),1) >=40;






