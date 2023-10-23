-- Ʈ���� ����ϱ����� ���� �ƿ�ǲ�� ON ��Ų��
SET SERVEROUTPUT ON;
-- ��ǰ�ڵ� 846543���� �����ؼ� 17�� ����
CREATE SEQUENCE FOOD_BARCODE START WITH 846543 INCREMENT BY 17; 
 -- �κ��丮�ڵ� 846543���� �����ؼ� 17�� ����
CREATE SEQUENCE INVENTORY_BARCODE START WITH 846543 INCREMENT BY 17;

CREATE TABLE CATEGORY(                                  -- ǰ�� ���̺� (�� ���̺��� �����Ͱ��� ����)
    CODE VARCHAR2(10) PRIMARY KEY,                      -- ǰ��з��ڵ� 
    KIND VARCHAR2(20)                                   -- ǰ�� �з�
);
CREATE TABLE COMPANY(                                   -- ȸ�� ���̺�
    CODE INT DEFAULT FOOD_BARCODE.NEXTVAL PRIMARY KEY,  -- ��ǰ �ڵ�(��ǰ���� �ٸ�, ������ ���)
    COMPANY VARCHAR2(30)                                -- ����ȸ���
);
CREATE TABLE INVENTORY(                                 -- ���� ���̺� 
    CATEGORY_CODE VARCHAR2(10),                         -- ǰ��з��ϱ����� �ڵ� (�ܷ�Ű) -- CATEGORY ���̺��� CODE�� ����
    FOOD_CODE INT DEFAULT INVENTORY_BARCODE.NEXTVAL,    -- ��ǰ �ڵ�(�ܷ�Ű) -- COMPANY ���̺��� CODE�� ����
    NAME VARCHAR2(50),                                  -- ��ǰ�� 
    CNT INT ,                                           -- ���
    PRICE INT                                           -- ���� ����
);
-- CATEGORY ���̺��� CODE�� �����Ͽ� INVENTORY ���̺��� CATEGORY_CODE�� �ܷ�Ű�� ����
ALTER TABLE INVENTORY ADD CONSTRAINT FK_CATEGORY_CODE FOREIGN KEY(CATEGORY_CODE) REFERENCES CATEGORY(CODE);                                                                                                              
 -- COMPANY ���̺��� CODE�� �����Ͽ� INVENTORY ���̺��� FOOD_CODE�� �ܷ�Ű�� ����                                                                                      
ALTER TABLE INVENTORY ADD CONSTRAINT FK_FOOD_CODE FOREIGN KEY(FOOD_CODE) REFERENCES COMPANY(CODE);     
                                                                                       
-------------------------------------��ȸ-------------------------------------
-- ��� ���̺� JOIN�ؼ� ��� ��ȸ
SELECT * FROM INVENTORY JOIN COMPANY ON INVENTORY.FOOD_CODE = COMPANY.CODE JOIN CATEGORY ON CATEGORY.CODE = INVENTORY.CATEGORY_CODE; 
-- ��� ���̺� ��ȸ �ϸ� ��ġ�� �Ӽ���(��ǰ�ڵ�,ī�װ��ڵ�)�� �����ϱ� �ʿ��� �����鸸 �Ӽ� �̾Ƽ� �� �����.
CREATE VIEW ALL_INFO AS
SELECT KIND, NAME, PRICE, CNT, COMPANY, FOOD_CODE �����ڵ� FROM COMPANY, CATEGORY, INVENTORY WHERE INVENTORY.FOOD_CODE = COMPANY.CODE AND CATEGORY.CODE = INVENTORY.CATEGORY_CODE;
-- ������� �� ��ȸ(�� �̸� : ALL_INFO)
SELECT * FROM ALL_INFO;
-- ȸ�纰 ��ǰ ����
SELECT COMPANY, COUNT(*) ��ǰ���� FROM ALL_INFO GROUP BY COMPANY;
-- ȸ�纰 ��ǰ�� 3�� ���� �̻� ���
SELECT COMPANY, COUNT(*) ��ǰ���� FROM ALL_INFO GROUP BY COMPANY HAVING COUNT(*) >= 3;
-- Ư�� �̸��� �˻� ��(EX.����) �����ڵ� ,���� ,���ĸ� ,���� ,��� ,������ ����ϱ�
SELECT * FROM ALL_INFO WHERE NAME LIKE '%����%'; 
-- ���� ���� ������ ��ǰ ������ ����ϱ� (��ø���ǹ� ���)
SELECT * FROM ALL_INFO WHERE PRICE = (SELECT MIN(PRICE) FROM ALL_INFO);
-------------------------- ����-----------------------------------------
-- COMPANY ���̺� ������ �߰��ϴ� ���ν��� ȣ��
EXEC INSERT_COMPANY(FOOD_BARCODE.NEXTVAL,'�׽�Ʈȸ��');
-- Ȯ�� ���
SELECT * FROM COMPANY;
-- INVENTORY ���̺� ������ �߰��ϴ� ���ν��� ȣ�� 
EXEC INSERT_INVENTORY('�׽�Ʈ���','AB01',INVENTORY_BARCODE.NEXTVAL,1,3000);
-- Ȯ�� ���
SELECT * FROM INVENTORY;
-- ��ǰ�� �̸��� ���ǿ� �������� ����� �����ϴ� ���ν��� ȣ�� -> �Ű�����(������ ���, ������ ��ǰ��)
EXEC UPDATE_CNT(2,'�Ķ��̵�ġŲ'); 
-- ��� Ȯ�� ���
SELECT NAME,CNT FROM INVENTORY;
-- ��ǰ�� �̸��� ���ǿ� �������� ������ �����ϴ� ���ν��� ȣ�� -> �Ű�����(������ ����, ������ ��ǰ��)
EXEC UPDATE_PRICE(9000,'�Ķ��̵�ġŲ');
-- ��� Ȯ�� ���
SELECT NAME,PRICE FROM INVENTORY;
---------------------- ���� ------------------------------------
-- ��ü������(INVENTORY) ���� ���ν��� ȣ��
EXEC DELETE_ALL();
-- INVENTORY Ȯ�� ���
SELECT * FROM INVENTORY;
SELECT * FROM COMPANY;
-- ���ڵ� �Է� �޾Ƽ� ���� ���ν��� ȣ��
EXEC DELETE_INVENTORY_CODE(846543);
EXEC DELETE_COMPANY_CODE(846543);
-- INVENTORY Ȯ�� ���
SELECT * FROM COMPANY;
SELECT * FROM INVENTORY;

COMMIT;