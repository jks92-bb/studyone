--데이터. 생성.

CREATE TABLE LIST(
 CODE INT PRIMARY KEY, -- 제품 분류 코드
 NAME VARCHAR2(30)    -- 품목 이름
);

CREATE TABLE FOOD(
 lIST_CODE INT REFERENCES LIST(CODE), -- 제품 분류 코드
 FOOD_CODE INT,            -- 제품코드
 NAME VARCHAR2(30),   --  제품명
 PRICE INT,          --  가격
 COMPANY VARCHAR(30)  -- 제조사

);

CREATE TABLE INVENTROY(
 

);


DROP TABLE LIST;
DROP TABLE FOOD;

INSERT INTO LIST VALUES(01,'즉석식품');

INSERT INTO FOOD VALUES(01,01,'스파게티',2000,'회사');



SELECT LIST_CODE 분류코드 , AVG(PRICE) 가격 FROM FOOD GROUP BY LIST_CODE;

--VIEW
CREATE VIEW COM_PRICE AS SELECT LIST_CODE, NAME, AVG(PRICE) FROM FOOD
GROUP BY LIST_CODE;

SELECT * FROM COM_PRICE;

-- 만원이상의 즉석식품을 출력하라.
SELECT LIST_CODE, PRICE FROM FOOD
GROUP BY LIST_CODE HAVING PRICE >= 10000;

SELECT *FROM LIST;
SELECT *FROM FOOD;

