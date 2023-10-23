SET SERVEROUTPUT ON; -- 스크립트에서 출력문을 활성화 하는 명령어

--THINGS 테이블 생성:
-- 품목명(NAME) , 가격(PRICE), 재고(CNT)
-- (품목명을 기본키로 설정)
CREATE TABLE THINGS(
 NAME VARCHAR2(20) PRIMARY KEY,
 PRICE INT,
 CNT INT
 
);

-- 데이터 7개 생성(INSERT INTO 로 작성)
INSERT INTO THINGS VALUES('꼬북칩',1700,20);
INSERT INTO THINGS VALUES('매운새우깡',1500,40);
INSERT INTO THINGS VALUES('새우깡',1500,20);
INSERT INTO THINGS VALUES('도리토스',2000,20);
INSERT INTO THINGS VALUES('스윙칩',1700,20);
INSERT INTO THINGS VALUES('포카칩',1700,30);
INSERT INTO THINGS VALUES('포스틱',1500,40);

--DROP TABLE THINGS;

-- 스크립트 출력 상에 "모든 데이터가 사라집니다."를 출력하며
-- 테이블 상 모든 데이터 지우는 프로시저 정의 및 호출
CREATE OR REPLACE PROCEDURE DEL_THINGS
IS BEGIN
--프로시저 본문
DELETE FROM THINGS;
COMMIT;
DBMS_OUTPUT.PUT_LINE('모든 데이터가 사라집니다.');

END DEL_THINGS;
/

-- 테이블 데이터 전부 출력
SELECT *FROM THINGS;

-- 프로시저 실행1
BEGIN    
DEL_THINGS;
END;
/

--프로시저 실행2
EXEC DEL_THINGS;


-- 테이블 데이터 전부 출력
SELECT *FROM THINGS;

/
---- 프로시저 : 정의를 해두고, 호출을 별도로 해야했음.
---- 트리거 : "방아쇠 ", 어떤 명령문을 수행했을 때 "자동으로 호출"됨.
----           구현하는 문법은 있지만, 호출하는 문법은 별도로 없음.            
---- 트리거 선언
--
--CREATE OR REPLACE TRIGGER 트리거명
--[BEFORE/AFTER] [트리거 적용할 명령문]  -- BEFORE INSERT 
--ON 테이블명
--(FOR EACH ROW) -- 작성해두면, 트리거 적용한 명령문 실행할 때마다 수행
--               -- 작성을 안하면, 딱 한번 실행하고 그 이후론 실행 안됨.
--
--DECLARE      -- "선언하다" , 변수 선언하는 부분.
--BEGIN 
---- 트리거 본문 작성
--END;

-- DDL (테이터 구조 명령어) 에 대한 트리거 작성해두고,
-- BEGIN-END 사이에 DML(데이터 명령어) 명령어 수행

-- INSERT 문 수행 시, "데이터 추가합니다." 출력
CREATE OR REPLACE TRIGGER ALARM_INSERT
BEFORE INSERT ON THINGS      --THINGS 테이블에 대하여 INSERT문 수행전 호출.
FOR EACH ROW
DECLARE BEGIN
    --트리거본문
    DBMS_OUTPUT.PUT_LINE('데이터를 추가합니다.');
END;
/

--DELETE 된 후 "데이터를 삭제합니다." 출력
CREATE OR REPLACE TRIGGER ALARM_DELETE
AFTER DELETE ON THINGS      --THINGS 테이블에 대하여 DELETE문 수행후 호출.
FOR EACH ROW
DECLARE BEGIN
    --트리거본문
    DBMS_OUTPUT.PUT_LINE('데이터를 삭제합니다.');
END;
/

-- 1. DDL(데이터 구조 명령어) 에 대한 트리거 작성해두고.
-- BEGIN-END 사이에 DML(데이터 명령어) 명령어 통해 테스트 데이터 삽입
-- 2. DML(데이터 명령어)에 대한 트리거 작성해두고,
-- 단순 출력문 수행


