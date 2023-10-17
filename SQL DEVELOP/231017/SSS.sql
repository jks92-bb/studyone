-- ���ν��� : �Լ��� ����, DB���� ������ �� �ִ� �ڵ� ��
-- ���α׷��� �� ���� ����

-- ���ν��� ���� ���
-- OR REPLACE �� ����, ������ �̸��� ���ν��� ����� �Ұ�.
--CREATE OR REPLACE PREOCEDURE ���ν�����
--(
-- �Ű����� (IN, OUT, INOUT)
--)
--IS
--��������
--BEGIN 
--���ν��� ����
--END ���ν�����;

-- ��� ���̺� ����
CREATE TABLE EMPLOYEE(
    NUM VARCHAR2(10) PRIMARY KEY,  -- �⺻Ű ����
    NAME VARCHAR2(20),
    AGE INT,
    DEPART VARCHAR2(5)
);

--DROP TABLE EMPLOYEE;
    
--�μ� ���̺� ����
CREATE TABLE DEPART(
    DEPART_NUM VARCHAR2(5),
    NAME VARCHAR2(20),
    CONSTRAINT PK_NUM PRIMARY KEY(DEPART_NUM) 
     --�������� PK_NUM���� ����, DEPART_NUM �� �⺻Ű�� ��.
);

--drop table depart;

-- EMPLOYEE �� DEPART -> DEPART�� DEPART_NUM���� ����. (�������� �߰�)
ALTER TABLE EMPLOYEE ADD CONSTRAINT FK_CODE
FOREIGN KEY(DEPART) REFERENCES DEPART(DEPART_NUM);

-- ����� ���� ������ �߰�
-- INSERT������ ������ �߰��� �ؿ�����, ���ν����� �����ؼ� ���
-- ���ν��� ȣ��-> exec ���ν�����(����1, ����2,...);
EXEC ADD_DEPART('1','������');
EXEC ADD_DEPART('2','����������');
EXEC ADD_DEPART('3','�濵������');
exec add_emplo('525','������',24,'1');
exec add_emplo('526','���ϳ�',29,'1');
exec add_emplo('123','������',34,'2');
exec add_emplo('456','�ż���',40,'2');
exec add_emplo('457','���켺',41,'3');
exec add_emplo('458','��â��',33,'3');
exec add_emplo('124','������',28,'2');
exec add_emplo('777','���ƶ�',32,'1');

-- ���� : 2���̻��� ���̺��� ����� ���� ���´�.
SELECT *FROM DEPART;
SELECT *FROM EMPLOYEE;


SELECT * 
FROM EMPLOYEE E JOIN DEPART D
ON E.DEPART = D.DEPART_NUM;

SELECT NUM �����ȣ, EMPLOYEE.NAME �̸�, AGE ����, DEPART.NAME �μ� FROM DEPART, EMPLOYEE WHERE EMPLOYEE.DEPART = depart.depart_num;

-- EMPLOYEE ���̺��� ������ �߰� �����ϴ� ���ν��� ����
--CREATE OR REPLACE PROCEDURE add_emplo
--(
--    input_num in varchar2, -- in�տ� �ѹ����ص� �ؿ� in ����� in���� �ݿ���.
--    input_name varchar,
--    input_age in int,
--    input_depart in varchar2
--    
--)
--is begin
--    insert into employee values(input_num,input_name,input_age,input_depart);
--end add_emplo;

-- depart ���̺��� ������ �߰� �����ϴ� ���ν��� �ۼ�.
--create or replace procedure add_depart
--(
--    input_num in varchar2,
--    input_name in varchar2
--)
--is begin
--    insert into depart values(input_num, input_name);
--end add_depart ;


