-- 문장 끝마다 ; 넣기 
-- 대소문자 구분없음.


-- CRUD : CREATE/ READ / UPDATE/ DELETE
-- SQL문  : 위의 CRUD기능을 수행하기 위한 명령문(질의문)
--  => <<DQL/DDL/DML>> / DCL/ TCL

-- DQL(Query) : 데이터 조회
-- SELECT문 : 데이터를 검색하는 명령어 (검색된결과는 출력하여 표현)
-- SELECT 칼럼명 FROM 테이블명 [WHERE 조건문];
SELECT LENGTH('HELLOSQL') FROM DUAL WHERE LENGTH('HELLOSQL')>=5;

-- DDL : 데이터 구조(DB, 테이블,  ...)정의
--      => CREATE(생성), ALTER(수정), DROP, TRUNCATE(삭제)

-- DML(Mainpulation) : 데이터 조작
--      => INSERT(삽입) , UPDATE(수정), DELETE(삭제), (+SELECT)

-- ORACLE 자료형
-- * 문자형
-- CHAR(N): 고정크기의 문자형 타입, 무조건 N개의 공간 할당(비효율적)
-- VARCHAR2(N) : 가변적으로 변하는 크기의 문자형 타입,최대 N개까지의 공간 할당(효율적)
-- NVARCHAR2(N)
-- * 숫자형
-- INT : 정수 숫자형
-- FLOAT : 실수 숫자형
-- NUMBER(P,S) : 정수, 실수 모두 가능
--       P(정수부분+실수부분 최대 작성가능한 공간) S(실수부분 최대 작성가능한 공간)


-- 블로그 "글"에 대한 테이블 생성
CREATE TABLE POST(
    TITLE VARCHAR2(30),      -- 글 제목
    DAY VARCHAR2(10),         -- 글 작성날짜
    BODY VARCHAR2(100)        -- 글 본문
);

-- POST 테이블에 대하여 ,데이터 삽입
INSERT INTO POST VALUES('방안','20231013','현재 방안은 이렇습니다.');
INSERT INTO POST(DAY, TITLE, BODY) VALUES('20231013', '명령문', '명령입니다.');
INSERT INTO POST(DAY, TITLE, BODY) VALUES('20231013', '음식', '된장찌개 맛있어.');
INSERT INTO POST(DAY, TITLE, BODY) VALUES('20231013', '옷', '합리적인 자켓입니다.');
INSERT INTO POST(DAY, TITLE, BODY) VALUES('20231013', '주식', '좋은 기회입니다.');

-- POST 테이블에 있어, TITLE의 값이 '주식'인 데이터를 제거
--DELETE FROM POST;   -- TRUNCATE랑 똑같이 데이터가 모두 제거.
DELETE FROM POST WHERE TITLE = '주식';

-- * : 전체 
-- POST 테이블 전체 검색 출력.
SELECT * FROM POST;

-- 삭제.
-- DROP : 테이블 삭제(데이터, 테이블 구조)
-- TRUNCATE : 테이블 삭제(데이터만 삭제, 구조는 남아있음)
DROP TABLE POST;

COMMIT;





 






