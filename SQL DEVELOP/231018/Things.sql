SET SERVEROUTPUT ON; -- ��ũ��Ʈ���� ��¹��� Ȱ��ȭ �ϴ� ��ɾ�

--THINGS ���̺� ����:
-- ǰ���(NAME) , ����(PRICE), ���(CNT)
-- (ǰ����� �⺻Ű�� ����)
CREATE TABLE THINGS(
 NAME VARCHAR2(20) PRIMARY KEY,
 PRICE INT,
 CNT INT
 
);

-- ������ 7�� ����(INSERT INTO �� �ۼ�)
INSERT INTO THINGS VALUES('����Ĩ',1700,20);
INSERT INTO THINGS VALUES('�ſ�����',1500,40);
INSERT INTO THINGS VALUES('�����',1500,20);
INSERT INTO THINGS VALUES('�����佺',2000,20);
INSERT INTO THINGS VALUES('����Ĩ',1700,20);
INSERT INTO THINGS VALUES('��īĨ',1700,30);
INSERT INTO THINGS VALUES('����ƽ',1500,40);

--DROP TABLE THINGS;

-- ��ũ��Ʈ ��� �� "��� �����Ͱ� ������ϴ�."�� ����ϸ�
-- ���̺� �� ��� ������ ����� ���ν��� ���� �� ȣ��
CREATE OR REPLACE PROCEDURE DEL_THINGS
IS BEGIN
--���ν��� ����
DELETE FROM THINGS;
COMMIT;
DBMS_OUTPUT.PUT_LINE('��� �����Ͱ� ������ϴ�.');

END DEL_THINGS;
/

-- ���̺� ������ ���� ���
SELECT *FROM THINGS;

-- ���ν��� ����1
BEGIN    
DEL_THINGS;
END;
/

--���ν��� ����2
EXEC DEL_THINGS;


-- ���̺� ������ ���� ���
SELECT *FROM THINGS;

/
---- ���ν��� : ���Ǹ� �صΰ�, ȣ���� ������ �ؾ�����.
---- Ʈ���� : "��Ƽ� ", � ��ɹ��� �������� �� "�ڵ����� ȣ��"��.
----           �����ϴ� ������ ������, ȣ���ϴ� ������ ������ ����.            
---- Ʈ���� ����
--
--CREATE OR REPLACE TRIGGER Ʈ���Ÿ�
--[BEFORE/AFTER] [Ʈ���� ������ ��ɹ�]  -- BEFORE INSERT 
--ON ���̺��
--(FOR EACH ROW) -- �ۼ��صθ�, Ʈ���� ������ ��ɹ� ������ ������ ����
--               -- �ۼ��� ���ϸ�, �� �ѹ� �����ϰ� �� ���ķ� ���� �ȵ�.
--
--DECLARE      -- "�����ϴ�" , ���� �����ϴ� �κ�.
--BEGIN 
---- Ʈ���� ���� �ۼ�
--END;

-- DDL (������ ���� ��ɾ�) �� ���� Ʈ���� �ۼ��صΰ�,
-- BEGIN-END ���̿� DML(������ ��ɾ�) ��ɾ� ����

-- INSERT �� ���� ��, "������ �߰��մϴ�." ���
CREATE OR REPLACE TRIGGER ALARM_INSERT
BEFORE INSERT ON THINGS      --THINGS ���̺� ���Ͽ� INSERT�� ������ ȣ��.
FOR EACH ROW
DECLARE BEGIN
    --Ʈ���ź���
    DBMS_OUTPUT.PUT_LINE('�����͸� �߰��մϴ�.');
END;
/

--DELETE �� �� "�����͸� �����մϴ�." ���
CREATE OR REPLACE TRIGGER ALARM_DELETE
AFTER DELETE ON THINGS      --THINGS ���̺� ���Ͽ� DELETE�� ������ ȣ��.
FOR EACH ROW
DECLARE BEGIN
    --Ʈ���ź���
    DBMS_OUTPUT.PUT_LINE('�����͸� �����մϴ�.');
END;
/

-- 1. DDL(������ ���� ��ɾ�) �� ���� Ʈ���� �ۼ��صΰ�.
-- BEGIN-END ���̿� DML(������ ��ɾ�) ��ɾ� ���� �׽�Ʈ ������ ����
-- 2. DML(������ ��ɾ�)�� ���� Ʈ���� �ۼ��صΰ�,
-- �ܼ� ��¹� ����


