-- 1. ǰ�� ���� ���涧 INVENTORY ���̺��� insert �ϴ� 2�� ���ν��� ����� 
-- *** ���� �����Ҷ� ���ν��� �ΰ��� �������� �Ѱ����ϸ� ���ڵ� ���δ�***
-- COMPANY ���̺� ������ �߰��ϴ� ���ν���
CREATE OR REPLACE PROCEDURE INSERT_COMPANY
(
    INSERT_CODE INT,
    INSERT_COMPANY VARCHAR2
)
IS BEGIN
INSERT INTO COMPANY (CODE,COMPANY) VALUES(INSERT_CODE,INSERT_COMPANY);
END INSERT_COMPANY;
/
-- INVENTORY ���̺� ������ �߰��ϴ� ���ν���
CREATE OR REPLACE PROCEDURE INSERT_INVENTORY
(
    INSERT_NAME VARCHAR2,   -- ��ǰ��
    INSERT_CGCODE VARCHAR2, -- ī�װ����ڵ� �з��ڵ�
    INSERT_FCODE INT,       -- ��ǰ�ڵ�
    INSERT_CNT INT,         -- �����
    INSERT_PRICE INT        -- ����
)
IS BEGIN
INSERT INTO INVENTORY (NAME,CATEGORY_CODE,FOOD_CODE,CNT,PRICE) VALUES(INSERT_NAME,INSERT_CGCODE,INSERT_FCODE,INSERT_CNT,INSERT_PRICE);
END INSERT_INVENTORY;
/