-- DDL : ������ ����(DB, ���̺�,  ...)����
--      => CREATE(����), ALTER(����), DROP, TRUNCATE(����)

-- DML(Mainpulation) : ������ ����
--      => INSERT(����) , UPDATE(����), DELETE(����), (+SELECT)

-- �޴��� ���̺� ����
CREATE TABLE PHONE(
    NAME VARCHAR2(20),    -- ����
    OS VARCHAR2(20),      -- �ü��
    DAY INT,     -- ��ó⵵
    WAT INT,     -- ���͸� �ִ� ��Ʈ
    COLOR VARCHAR2(10),    -- ����
    PRICE INT    -- ����
);
--Ȯ��--
SELECT *FROM PHONE;

-- ALTER : ������ ������ ���� �����ϴ� ��ɾ�
-- => ADD(Į�� �߰�)
-- => DROP COLUMN (Į�� ����)
-- => MODIFY (Į���� Ÿ�� ����)
-- => RENAME (���̺�� ����)
-- => RENAME COLUMN (Į���� ����)

-- ADD :l Į���߰�
-- ALTER TABLE ���̺�� ADD Į���� Į��Ÿ��;
-- PHONE ���̺� FLOAT�� INCH Į�� �߰�
ALTER TABLE PHONE
ADD INCH FLOAT;

--Ȯ��--
SELECT *FROM PHONE;

-- DROP COLUMN :Į������
-- ALTER TABLE ���̺�� DROP COLUMN Į����;
-- PHONE ���̺� WAT Į�� ����
ALTER TABLE PHONE
DROP COLUMN WAT;

-- RENAME : ���̺�� ����
-- ALTER TABLE ���̺�� RENAME TO ���ο� ���̺��;
-- RENAME COLUMN : Į���� ����
-- ALTER TABLE ���̺�� RENAME COLUNM ���� �÷��� TO ���ο� �÷���

-- PHONE ���̺��� SMARTPHONE_LIST�� �̸�����
ALTER TABLE PHONE RENAME TO SMARTPHONE_LIST;
-- SMARTPHONE_LIST ���̺��� PHONE ���� �̸�����
ALTER TABLE SMARTPHONE_LIST RENAME TO PHONE;

-- PHONE ���̺��� DAY Į������ YEAR �� �̸� ����
ALTER TABLE PHONE RENAME COLUMN DAY TO YEAR;

--MODIFY : ������ Į���� Ÿ�� ����
-- ALTER TABLE ���̺�� MODIFY Į���� ������ Į��Ÿ��
-- PHONE ���̺��� ,INCH Į���� Ÿ���� ���� INT�� ����
-- ������ ��� ���·� MODIFY ����.
ALTER TABLE PHONE 
MODIFY INCH INT;


--Ȯ��--
SELECT *FROM PHONE;
SELECT *FROM SMARTPHONE_LIST;

--INSERT�� ������ �߰�
INSERT INTO PHONE VALUES('������S20','11',2021,'PINK',1000000,6);
INSERT INTO PHONE VALUES('������S22','10',2021,'BLUE',1100000,4);
INSERT INTO PHONE VALUES('������S23','12',2022,'RED',1150000,7);


--Ȯ��--
SELECT *FROM PHONE;

--UPDATE : Ư�� �����͸� �����ϴ� ��ɾ�
--UPDATE ���̺�� SETĮ�� 1 = ���氪1, .... WHERE ������;
-- ��ó⵵�� 2022�� �������� OS���� 13���� ����
UPDATE PHONE SET OS = '13' WHERE DAY ='2022';
UPDATE PHONE SET OS = '13', COLOR ='BLACK' WHERE NAME = '������S23';

--Ȯ��--
SELECT *FROM PHONE;

--����--
DROP TABLE PHONE;

COMMIT;







