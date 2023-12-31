
--1. "학생명단" 테이블
CREATE TABLE STUDENT_LIST(
    HAK_BUN VARCHAR2(20),
    NAME VARCHAR2(20) NOT NULL,
    GRADE INT,
    MAJOR VARCHAR2(20)
    
);


--2. "교수명단" 테이블
CREATE TABLE PROFESSOR_LIST(
    NUMBE VARCHAR2(20),
    NAME VARCHAR2(20) NOT NULL,
    PHONE VARCHAR2(20) NOT NULL,
    MAJOR VARCHAR2(20) NOT NULL,
    AGE INT
    
);

--3. "학생명단" 테이블에 대해서, 아래처럼 데이터를 추가하라.
INSERT INTO STUDENT_LIST VALUES('123','김길동','1','컴퓨터공학'); 
INSERT INTO STUDENT_LIST VALUES('124','권길동','2','통계');
INSERT INTO STUDENT_LIST VALUES('125','박길동','3','국어국문');
INSERT INTO STUDENT_LIST VALUES('126','정길동','4','무역');
INSERT INTO STUDENT_LIST VALUES('127','이길동','5','국어국문');

--4. "교수명단" 테이블에 대해서, 아래처럼 데이터를 추가하라.
INSERT INTO PROFESSOR_LIST VALUES('1','김철수','010-0000-0000','국어국문','25');
INSERT INTO PROFESSOR_LIST VALUES('2','이영희','010-1111-1111','통계','45');
INSERT INTO PROFESSOR_LIST VALUES('3','박훈','010-2222-2222','컴퓨터공학','35');

--5. 3,4번 문제에 제시된 사진처럼, "학생명단"과 "교수명단" 테이블의 모든 데이터를 출력하라.
SELECT *FROM STUDENT_LIST;
SELECT *FROM PROFESSOR_LIST;

--6. "학생명단" 테이블에 대해서, 이름과 전공 칼럼에 대한 정보만 검색하여 출력하라.
SELECT NAME,MAJOR FROM STUDENT_LIST;

--7. "학생명단" 테이블에 대해서, 3학년 이상인 데이터만 검색하여 
--학번, 이름, 학년 칼럼 정보만 출력하라.

SELECT HAK_BUN,NAME,GRADE FROM STUDENT_LIST WHERE GRADE ='3';

--8. "교수명단" 테이블에 대해서, 번호가 1인 데이터만 검색하여
--이름, 전화번호, 소속전공 칼럼 정보만 출력하라.
SELECT NAME,PHONE,MAJOR FROM PROFESSOR_LIST WHERE NUMBE = '1';

--9. "교수명단" 테이블에 대해서, 나이가 35세 이상인 데이터만 
--검색하여 이름, 나이 칼럼 정보만 출력하라.
SELECT NAME,AGE FROM PROFESSOR_LIST WHERE AGE >= '35';

10. "학생명단"과 "교수명단" 테이블을 삭제하여라.
DROP TABLE STUDENT_LIST;
DROP TABLE PROFESSOR_LIST;




