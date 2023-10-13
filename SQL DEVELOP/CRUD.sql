-- DDL : 데이터 구조(DB, 테이블,  ...)정의
--      => CREATE(생성), ALTER(수정), DROP, TRUNCATE(삭제)

-- DML(Mainpulation) : 데이터 조작
--      => INSERT(삽입) , UPDATE(수정), DELETE(삭제), (+SELECT)

-- 휴대폰 테이블 생성
CREATE TABLE PHONE(
    NAME VARCHAR2(20),    -- 기종
    OS VARCHAR2(20),      -- 운영체제
    DAY INT,     -- 출시년도
    WAT INT,     -- 배터리 최대 와트
    COLOR VARCHAR2(10),    -- 색상
    PRICE INT    -- 가격
);
--확인--
SELECT *FROM PHONE;

-- ALTER : 데이터 구조에 대해 수정하는 명령어
-- => ADD(칼럼 추가)
-- => DROP COLUMN (칼럼 제거)
-- => MODIFY (칼럼의 타입 수정)
-- => RENAME (테이블명 변경)
-- => RENAME COLUMN (칼럼명 변경)

-- ADD :l 칼럼추가
-- ALTER TABLE 테이블명 ADD 칼럼명 칼럼타입;
-- PHONE 테이블에 FLOAT형 INCH 칼럼 추가
ALTER TABLE PHONE
ADD INCH FLOAT;

--확인--
SELECT *FROM PHONE;

-- DROP COLUMN :칼럼제거
-- ALTER TABLE 테이블명 DROP COLUMN 칼럼명;
-- PHONE 테이블에 WAT 칼럼 제거
ALTER TABLE PHONE
DROP COLUMN WAT;

-- RENAME : 테이블명 변경
-- ALTER TABLE 테이블명 RENAME TO 새로운 테이블명;
-- RENAME COLUMN : 칼럼명 변경
-- ALTER TABLE 테이블명 RENAME COLUNM 기존 컬럼명 TO 새로운 컬럼명

-- PHONE 테이블을 SMARTPHONE_LIST로 이름변경
ALTER TABLE PHONE RENAME TO SMARTPHONE_LIST;
-- SMARTPHONE_LIST 테이블을 PHONE 으로 이름변경
ALTER TABLE SMARTPHONE_LIST RENAME TO PHONE;

-- PHONE 테이블의 DAY 칼럼명을 YEAR 로 이름 변경
ALTER TABLE PHONE RENAME COLUMN DAY TO YEAR;

--MODIFY : 데이터 칼럼의 타입 변경
-- ALTER TABLE 테이블명 MODIFY 칼럼명 변경할 칼럼타입
-- PHONE 테이블에서 ,INCH 칼럼의 타입을 변경 INT로 변경
-- 데이터 비운 상태로 MODIFY 실행.
ALTER TABLE PHONE 
MODIFY INCH INT;


--확인--
SELECT *FROM PHONE;
SELECT *FROM SMARTPHONE_LIST;

--INSERT로 데이터 추가
INSERT INTO PHONE VALUES('갤럭시S20','11',2021,'PINK',1000000,6);
INSERT INTO PHONE VALUES('갤럭시S22','10',2021,'BLUE',1100000,4);
INSERT INTO PHONE VALUES('갤럭시S23','12',2022,'RED',1150000,7);


--확인--
SELECT *FROM PHONE;

--UPDATE : 특정 데이터를 수정하는 명령어
--UPDATE 테이블명 SET칼럼 1 = 변경값1, .... WHERE 조건절;
-- 출시년도가 2022인 데이터의 OS값을 13으로 변경
UPDATE PHONE SET OS = '13' WHERE DAY ='2022';
UPDATE PHONE SET OS = '13', COLOR ='BLACK' WHERE NAME = '갤럭시S23';

--확인--
SELECT *FROM PHONE;

--삭제--
DROP TABLE PHONE;

COMMIT;







