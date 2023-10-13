
--1. "�л����" ���̺�
CREATE TABLE STUDENT_LIST(
    HAK_BUN VARCHAR2(20),
    NAME VARCHAR2(20) NOT NULL,
    GRADE INT,
    MAJOR VARCHAR2(20)
    
);


--2. "�������" ���̺�
CREATE TABLE PROFESSOR_LIST(
    NUMBE VARCHAR2(20),
    NAME VARCHAR2(20) NOT NULL,
    PHONE VARCHAR2(20) NOT NULL,
    MAJOR VARCHAR2(20) NOT NULL,
    AGE INT
    
);

--3. "�л����" ���̺� ���ؼ�, �Ʒ�ó�� �����͸� �߰��϶�.
INSERT INTO STUDENT_LIST VALUES('123','��浿','1','��ǻ�Ͱ���'); 
INSERT INTO STUDENT_LIST VALUES('124','�Ǳ浿','2','���');
INSERT INTO STUDENT_LIST VALUES('125','�ڱ浿','3','�����');
INSERT INTO STUDENT_LIST VALUES('126','���浿','4','����');
INSERT INTO STUDENT_LIST VALUES('127','�̱浿','5','�����');

--4. "�������" ���̺� ���ؼ�, �Ʒ�ó�� �����͸� �߰��϶�.
INSERT INTO PROFESSOR_LIST VALUES('1','��ö��','010-0000-0000','�����','25');
INSERT INTO PROFESSOR_LIST VALUES('2','�̿���','010-1111-1111','���','45');
INSERT INTO PROFESSOR_LIST VALUES('3','����','010-2222-2222','��ǻ�Ͱ���','35');

--5. 3,4�� ������ ���õ� ����ó��, "�л����"�� "�������" ���̺��� ��� �����͸� ����϶�.
SELECT *FROM STUDENT_LIST;
SELECT *FROM PROFESSOR_LIST;

--6. "�л����" ���̺� ���ؼ�, �̸��� ���� Į���� ���� ������ �˻��Ͽ� ����϶�.
SELECT NAME,MAJOR FROM STUDENT_LIST;

--7. "�л����" ���̺� ���ؼ�, 3�г� �̻��� �����͸� �˻��Ͽ� 
--�й�, �̸�, �г� Į�� ������ ����϶�.

SELECT HAK_BUN,NAME,GRADE FROM STUDENT_LIST WHERE GRADE ='3';

--8. "�������" ���̺� ���ؼ�, ��ȣ�� 1�� �����͸� �˻��Ͽ�
--�̸�, ��ȭ��ȣ, �Ҽ����� Į�� ������ ����϶�.
SELECT NAME,PHONE,MAJOR FROM PROFESSOR_LIST WHERE NUMBE = '1';

--9. "�������" ���̺� ���ؼ�, ���̰� 35�� �̻��� �����͸� 
--�˻��Ͽ� �̸�, ���� Į�� ������ ����϶�.
SELECT NAME,AGE FROM PROFESSOR_LIST WHERE AGE >= '35';

10. "�л����"�� "�������" ���̺��� �����Ͽ���.
DROP TABLE STUDENT_LIST;
DROP TABLE PROFESSOR_LIST;




