-- 트리거 사용하기위해 서버 아웃풋을 ON 시킨다
SET SERVEROUTPUT ON;
-- 상품코드 846543부터 시작해서 17씩 증가
CREATE SEQUENCE FOOD_BARCODE START WITH 846543 INCREMENT BY 17; 
 -- 인벤토리코드 846543부터 시작해서 17씩 증가
CREATE SEQUENCE INVENTORY_BARCODE START WITH 846543 INCREMENT BY 17;

CREATE TABLE CATEGORY(                                  -- 품목 테이블 (이 테이블의 데이터값은 고정)
    CODE VARCHAR2(10) PRIMARY KEY,                      -- 품목분류코드 
    KIND VARCHAR2(20)                                   -- 품목 분류
);
CREATE TABLE COMPANY(                                   -- 회사 테이블
    CODE INT DEFAULT FOOD_BARCODE.NEXTVAL PRIMARY KEY,  -- 상품 코드(상품마다 다름, 시퀀스 사용)
    COMPANY VARCHAR2(30)                                -- 제조회사명
);
CREATE TABLE INVENTORY(                                 -- 관리 테이블 
    CATEGORY_CODE VARCHAR2(10),                         -- 품목분류하기위한 코드 (외래키) -- CATEGORY 테이블의 CODE랑 연결
    FOOD_CODE INT DEFAULT INVENTORY_BARCODE.NEXTVAL,    -- 상품 코드(외래키) -- COMPANY 테이블의 CODE랑 연결
    NAME VARCHAR2(50),                                  -- 상품명 
    CNT INT ,                                           -- 재고량
    PRICE INT                                           -- 음식 가격
);
-- CATEGORY 테이블의 CODE를 참조하여 INVENTORY 테이블의 CATEGORY_CODE를 외래키로 지정
ALTER TABLE INVENTORY ADD CONSTRAINT FK_CATEGORY_CODE FOREIGN KEY(CATEGORY_CODE) REFERENCES CATEGORY(CODE);                                                                                                              
 -- COMPANY 테이블의 CODE를 참조하여 INVENTORY 테이블의 FOOD_CODE를 외래키로 지정                                                                                      
ALTER TABLE INVENTORY ADD CONSTRAINT FK_FOOD_CODE FOREIGN KEY(FOOD_CODE) REFERENCES COMPANY(CODE);     
                                                                                       
-------------------------------------조회-------------------------------------
-- 모든 테이블 JOIN해서 모두 조회
SELECT * FROM INVENTORY JOIN COMPANY ON INVENTORY.FOOD_CODE = COMPANY.CODE JOIN CATEGORY ON CATEGORY.CODE = INVENTORY.CATEGORY_CODE; 
-- 모든 테이블 조회 하면 겹치는 속성값(상품코드,카테고리코드)도 나오니까 필요한 정보들만 속성 뽑아서 뷰 만들기.
CREATE VIEW ALL_INFO AS
SELECT KIND, NAME, PRICE, CNT, COMPANY, FOOD_CODE 음식코드 FROM COMPANY, CATEGORY, INVENTORY WHERE INVENTORY.FOOD_CODE = COMPANY.CODE AND CATEGORY.CODE = INVENTORY.CATEGORY_CODE;
-- 만들어진 뷰 조회(뷰 이름 : ALL_INFO)
SELECT * FROM ALL_INFO;
-- 회사별 상품 종류
SELECT COMPANY, COUNT(*) 상품종류 FROM ALL_INFO GROUP BY COMPANY;
-- 회사별 상품이 3개 종류 이상 출력
SELECT COMPANY, COUNT(*) 상품종류 FROM ALL_INFO GROUP BY COMPANY HAVING COUNT(*) >= 3;
-- 특정 이름을 검색 후(EX.초코) 음식코드 ,종류 ,음식명 ,가격 ,재고량 ,제조사 출력하기
SELECT * FROM ALL_INFO WHERE NAME LIKE '%초코%'; 
-- 제일 낮은 가격의 상품 정보를 출력하기 (중첩질의문 사용)
SELECT * FROM ALL_INFO WHERE PRICE = (SELECT MIN(PRICE) FROM ALL_INFO);
-------------------------- 수정-----------------------------------------
-- COMPANY 테이블에 데이터 추가하는 프로시저 호출
EXEC INSERT_COMPANY(FOOD_BARCODE.NEXTVAL,'테스트회사');
-- 확인 출력
SELECT * FROM COMPANY;
-- INVENTORY 테이블에 데이터 추가하는 프로시저 호출 
EXEC INSERT_INVENTORY('테스트까까','AB01',INVENTORY_BARCODE.NEXTVAL,1,3000);
-- 확인 출력
SELECT * FROM INVENTORY;
-- 상품의 이름이 조건에 맞을때에 재고량을 수정하는 프로시저 호출 -> 매개변수(수정할 재고량, 수정할 제품명)
EXEC UPDATE_CNT(2,'후라이드치킨'); 
-- 재고 확인 출력
SELECT NAME,CNT FROM INVENTORY;
-- 상품의 이름이 조건에 맞을때에 가격을 수정하는 프로시저 호출 -> 매개변수(수정할 가격, 수정할 제품명)
EXEC UPDATE_PRICE(9000,'후라이드치킨');
-- 재고 확인 출력
SELECT NAME,PRICE FROM INVENTORY;
---------------------- 삭제 ------------------------------------
-- 전체데이터(INVENTORY) 삭제 프로시저 호출
EXEC DELETE_ALL();
-- INVENTORY 확인 출력
SELECT * FROM INVENTORY;
SELECT * FROM COMPANY;
-- 바코드 입력 받아서 삭제 프로시저 호출
EXEC DELETE_INVENTORY_CODE(846543);
EXEC DELETE_COMPANY_CODE(846543);
-- INVENTORY 확인 출력
SELECT * FROM COMPANY;
SELECT * FROM INVENTORY;

COMMIT;