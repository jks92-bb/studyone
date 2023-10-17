--TEACHER 테이블 생성 : 이름 (기본키 ), 소속 , 경력, 담당
--STUDENT 테이블 생성 : 학번(기본키), 이름, 나이, 담당교사
--(STUDENT.담당교사) -> TEACHER.이름 참조하도록 설정)
CREATE TABLE TEACHER(
 NAME VARCHAR2(20) PRIMARY KEY,
 TEAM VARCHAR2(8),
 CAREER INT,
 CHARGE VARCHAR2(10)
 
);

CREATE TABLE STUDENT(
 HAKBUN VARCHAR2(10) PRIMARY KEY,
 NAME VARCHAR2(20),
 AGE INT,
 CHARGE_T VARCHAR2(20),
 CONSTRAINT fk_teacher_name FOREIGN KEY (CHARGE_T) REFERENCES TEACHER(NAME)
 -- CHARTG_T에 대한 외래키 제약 조건 정의와 FR_TEACHE_NAME이라는 제약조건 이름.
 -- REFERENCES 사용해서 TEACHER 테이블의 NAME열 참조 한다고 명시.
 
);

-- TEACHER 테이블의 데이터 추가 수행하는 프로시저 작성.
create or replace procedure ADD_TEACHER
(
    input_nAME in varchar2,
    input_TEAM in varchar2,
    INPUT_CAREER IN INT,
    INPUT_CHARGE IN VARCHAR2
    
)
is begin
    insert into TEACHER values(input_NAME, input_TEAM,INPUT_CAREER,INPUT_CHARGE);
end ADD_TEACHER ;
/

-- STUDENT 테이블의 데이터 추가 수행하는 프로시저 작성.
create or replace procedure ADD_STUDENT
(
    input_HAKBUN in varchar2,
    input_NAME in varchar2,
    INPUT_AGE IN INT,
    INPUT_CHARGE_T IN VARCHAR2 
    
)
is begin
    insert into STUDENT values(input_HAKBUN, input_NAME,INPUT_AGE,INPUT_CHARGE_T);
end ADD_STUDENT ;
/
-- STUDENT 테이블의 데이터 추가 수행하는 프로시저 작성.
---학생중 나이가 20미만인 학생 데이터 제거
create or replace procedure DELETE_STUDENT

AS    

 begin
  DELETE FROM STUDENT
    WHERE AGE < 20;    
    
end DELETE_STUDENT ;
/

CREATE OR REPLACE PROCEDURE DEL_STUDENT
(
 IN_AGE IN INT
)
IS BEGIN
    DELETE FROM STUDENT WHERE AGE<IN_AGE;
END DEL_STUDENT;
/

-- CREATE PROCEDURE 문을 사용하여 경력을 추가하는 프로시저 생성
CREATE OR REPLACE PROCEDURE C_TEACHER
IS
BEGIN
    -- 경력을 1씩 증가
    UPDATE TEACHER
    SET CAREER = CAREER + 1;

    COMMIT; -- 트랜잭션을 확정(Commit)하여 데이터베이스에 변경 내용 저장
END C_TEACHER;
/


--DROP TABLE TEACHER;
--DROP TABLE STUDENT;
-- 선생님 데이터 입력
EXEC ADD_TEACHER('이동준', 'KB', 3,'개발');
EXEC ADD_TEACHER('이유나','KB',1,'개발');
EXEC ADD_TEACHER('박준현','KB',5,'보안');
EXEC ADD_TEACHER('정제원','KB',1,'보안');

--학생 데이터 입력
EXEC ADD_STUDENT('1','정우성',45,'이동준');
EXEC ADD_STUDENT('2','김하나',25,'이동준');
EXEC ADD_STUDENT('3','신세계',15,'이유나');
EXEC ADD_STUDENT('4','신세나',25,'이동준');
EXEC ADD_STUDENT('5','홍길동',35,'정제원');
EXEC ADD_STUDENT('6','이순신',15,'이동준');
EXEC ADD_STUDENT('7','김미남',27,'박준현');
EXEC ADD_STUDENT('8','정정혁',26,'이유나');
EXEC ADD_STUDENT('9','정성우',28,'박준현');
EXEC ADD_STUDENT('10','김지성',26,'박준현');

--STUDENT, TEACHERR 각각의 테이블로 출력
SELECT *FROM teacher;
SELECT *FROM STUDENT;

--STUDENT, TEACHERR 하나의 테이블로 출력

SELECT * 
FROM TEACHER T JOIN STUDENT S
ON T.NAME = S.CHARGE_T;

SELECT HAKBUN "학번", S.NAME "이름", S.AGE "나이", S.CHARGE_T "담당교사",
T.TEAM "교사 소속", T.CAREER "교사 경력", T.CHARGE "분야"
FROM STUDENT S, TEACHER T
WHERE S.CHARGE_T = T.NAME;

--STUDENT, TEACHERR 하나의 테이블로 출력
--STUDENT. 나이 오름차순, TEACHER.경력 내림차순
SELECT *FROM STUDENT,TEACHER ORDER BY STUDENT.AGE ASC, TEACHER.CAREER DESC;
--( 바로 위에껄로 하면 관련 없는 데이터와 연결이 됨과 동시에 4명의 선생님과 10명의 학생들이
-- 섞여 표현하기 위해 임의적으로 선생님 데이터를 늘려버려 출력한다)

SELECT *FROM STUDENT,TEACHER 
WHERE STUDENT.CHARGE_T = TEACHER.NAME 
ORDER BY STUDENT.AGE ASC, TEACHER.CAREER DESC;

SELECT HAKBUN "학번", S.NAME "이름", S.AGE "나이", S.CHARGE_T "담당교사",
T.TEAM "교사 소속", T.CAREER "교사 경력", T.CHARGE "분야"
FROM STUDENT S, TEACHER T
WHERE S.CHARGE_T = T.NAME
ORDER BY S.AGE, T.CAREER DESC;

-- 학생 중 나이가 20미만인 학생 데이터 제거.
EXEC DELETE_STUDENT;
EXEC DEL_STUDENT(20);

--교사 경력 1추가 
EXEC C_TEACHER; 

--학생들 총인원, 나이의 총합 최대값,최소값, 평균값을 모두 하나의 테이블로 출력
SELECT COUNT(*) 총인원, SUM(AGE) 나이총합, MAX(AGE) 최대값, MIN(AGE) 최소값, AVG(AGE) 평균 FROM STUDENT; 

--교사의 소속 및 담당 출력, 이때 중복되는 값은 한번만 출력
SELECT TEAM 소속, CHARGE 담당 FROM TEACHER GROUP BY teacher.team, teacher.CHARGE;
SELECT DISTINCT TEAM 소속, CHARGE 담당 FROM TEACHER;

-- 교사의 소속 및 평균 경력 출력
SELECT TEAM 소속, AVG(CAREER) 경력 
FROM TEACHER GROUP BY TEAM;

SELECT TEAM 소속, AVG(CAREER) 경력 
FROM TEACHER GROUP BY teacher.TEAM;

--TRUNCATE TABLE STUDENT;
--TRUNCATE TABLE TEACHER;


