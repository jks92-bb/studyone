-- PEN_LIST 테이블 생성 => 제조회사 (COMPANY), 색상(COLOR)
CREATE TABLE PEN_LIST(
 COMPANY VARCHAR2(20),
 COLOR VARCHAR2(10)
);


-- PEN_LIST 테이블 출력
SELECT *FROM PEN_LIST;

-- ALTER TABLE 테이블명 RENAME TO 새로운 테이블명;
--PEN_LIST 테이블명 PEN으로 변경
ALTER TABLE PEN_LIST RENAME TO PEN;

-- ALTER TABLE 테이블명 RENAME COLUMN 기존 컬럼명 TO 새로운 컬럼명
-- PEN 테이블 중 COMPANY 칼럼명 COM으로 변경
ALTER TABLE PEN RENAME COLUMN COMPANY TO COM; 

-- PEN 테이블에 굵기(THICKNESS) 칼럼 추가
ALTER TABLE PEN ADD THICKNESS VARCHAR2(10); 

-- PEN 테이블에 가격(PRICE) 칼럼 추가
ALTER TABLE PEN ADD PRICE VARCHAR2(10);

COMMIT;

-- PEN 테이블 출력
SELECT *FROM PEN;

-- PEN 테이블에 대해 전체 데이터 5~10개 삽입
INSERT INTO PEN VALUES('모나미','BLACK','0.5','1000');
INSERT INTO PEN VALUES('모나미','YELLOW','1.5','1200');
INSERT INTO PEN VALUES('모나미','BLUE','1.0','1300');
INSERT INTO PEN VALUES('모나미','RED','0.75','1500');
INSERT INTO PEN VALUES('글로리','GREEN','0.5','2000');

-- PEN 테이블 전체 데이터 출력
SELECT *FROM PEN;

-- PEN 데이터 중, 가격이 2000원 이상인 데이터의 제조회사를 모두 '모나미'로 변경
--UPDATE 테이블명 SET칼럼 1 = 변경값1, .... WHERE 조건절;
UPDATE PEN SET COM = '모나미' WHERE PRICE >= 2000;

-- PEN 데이터 중, 굵기가 0.5인 데이터의 가격을 1500으로 변경
UPDATE PEN SET PRICE = '1500' WHERE THICKNESS = '0.5';

-- PEN 테이블 전체 데이터 출력
SELECT *FROM PEN;

-- PEN 테이블 중 굵기, 색상 칼럼 데이터만 출력
-- SELECT 칼럼명 FROM 테이블명 [WHERE 조건문];
SELECT THICKNESS,COLOR FROM PEN;

--PEN 데이터 중, 색상이'BLACK'인 데이터의 색상, 굵기, 가격 칼럼 데이터만 출력.
SELECT COLOR,THICKNESS,PRICE FROM PEN WHERE COLOR ='BLACK';

--PEN 테이블의 데이터 삭제
TRUNCATE TABLE PEN;

-- PEN 테이블 전체 데이터 출력
SELECT *FROM PEN;

--PEN 테이블 삭제
DROP TABLE PEN;




-----삭제용--
--DROP TABLE PEN;

