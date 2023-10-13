--1. "�������" ���̺��� �����ϰ�, �Ʒ�ó�� �����Ͽ���
CREATE TABLE EMPLOYEE_LIST(
 NUMBE VARCHAR2(20),
 NAME VARCHAR2(20) NOT NULL,
 DEPARTMENT VARCHAR2(20) NOT NULL,
 AGE INT
);
--
--2. "�μ����" ���̺��� �����ϰ�, �Ʒ�ó�� �����Ͽ���

CREATE TABLE DEPARTMENT_LIST(
 NUMBE VARCHAR2(20),
 NAME VARCHAR2(20) NOT NULL,
 VOLUME INT
);


--3. "�������" ���̺� ���ؼ�, �Ʒ�ó�� �����͸� �߰��϶�. 
INSERT INTO EMPLOYEE_LIST VALUES ('521', '��浿','�濵�����к�','25');
INSERT INTO EMPLOYEE_LIST VALUES ('525', '�̱浿','������','40');
INSERT INTO EMPLOYEE_LIST VALUES ('523', '�ֱ浿','������','30');
INSERT INTO EMPLOYEE_LIST VALUES ('524', '���浿','����������','29');


--DROP TABLE EMPLOYEE_LIST;

--4. "�μ����" ���̺� ���ؼ�, �Ʒ�ó�� �����͸� �߰��϶�.
INSERT INTO department_list VALUES('1','������','30');
INSERT INTO department_list VALUES('2','����������','15');
INSERT INTO department_list VALUES('3','�濵������','10');

--5. 3,4�� ������ ���õ� ����ó��, "�������"�� "�μ����" ���̺��� ��� �����͸� ����϶�.
SELECT *FROM employee_list;
SELECT *FROM department_list;

--6. "�������" ���̺� ���ؼ�, 
--�̸��� �μ� Į���� ���� ������ �˻��Ͽ� ����϶�.
SELECT NAME, DEPARTMENT FROM employee_list;

--7. "�������" ���̺� ���ؼ�, �μ��� "������"��
--�����͸� �˻��Ͽ� �����ȣ, �̸�, �μ� Į�� ������ ����϶�.
SELECT NUMBE,NAME,DEPARTMENT FROM employee_list WHERE department ='������';

--8. "�μ����" ���̺� ���ؼ�, �������� 10�� �ʰ��� �����͸� 
--�˻��Ͽ� �μ��̸�, ������ Į�� ������ ����϶�.
SELECT NAME,VOLUME FROM department_list WHERE volume > '10';

--9. "�μ����" ���̺� ���ؼ�, �μ���ȣ�� "2"��
--�����͸� �˻��Ͽ� ��ü Į���� ������ ����϶�.
SELECT *FROM DEPARTMENT_LIST WHERE NUMBE ='2';

--10. "�������"�� "�μ����" ���̺��� �����Ͽ���. 
DROP TABLE EMPLOYEE_LIST;
DROP TABLE DEPARTMENT_LIST;
