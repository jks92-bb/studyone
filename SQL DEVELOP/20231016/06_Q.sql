--1. �μ� ���̺� ����
--- �ڵ� CHAR(3)
--- �μ��� VARCHAR2(100)
create table buseo (code char(3) primary key, name varchar2(100));

--2. ���� ���̺� ����
--- �ڵ� INT
--- ���޸� VARCHAR2(100)
create table jikgeup(code int primary key, name varchar2(100));

--3. �λ� ���̺��� �����.
--- ��� CHAR(5)
--- �μ��ڵ�
--- �����ڵ�
--- �̸� VARCHAR2(100)
--- ���� INT
--- ���� CHAR(1)
--- HP VARCHAR2(15) UNIQUE
create table insa(
sabeon char(5),
buseo_code char(3) references buseo(code),
jikgeup_code int references jikgeup(code),
name varchar2(100),
age int,   
gender char(1),
hp varchar2(15) unique);

insert into buseo values('A01', '����1��');
insert into buseo values('B01', '����2��');
insert into buseo values('CCC', '�濵����');

CREATE SEQUENCE jikseq START WITH 1 INCREMENT BY 1;

insert into jikgeup values(jikseq.nextval, '���');
insert into jikgeup values(jikseq.nextval, '�븮');
insert into jikgeup values(jikseq.nextval, '����');


insert into insa values('00001', 'A01', 1, '�̵���', 35, 'M', '010-2940-1613');
insert into insa values('00002', 'B01', 2, '������', 25, 'F',NULL);
insert into insa values('00003', 'CCC', 3, '������', 45, 'M', '010-2940-1111');
insert into insa values('00004', 'CCC', 2, '������', 40, 'M', '010-2940-2222');
insert into insa values('00005', 'B01', 2, '������', 29, 'M', '010-2940-3333');
insert into insa values('00006', 'B01', 2, '������', 55, 'M', '010-2940-4444');
insert into insa values('00007', 'CCC', 3, '��ä��', 60, 'M', '010-5555-1613');
insert into insa values('00008', 'A01', 3, '�ֱ���', 38, 'M', '010-1234-1613');
insert into insa values('00009', 'A01', 3, 'ǥ�ֱ�', 37, 'M', '010-7777-1613');
insert into insa values('0000A', 'A01', 1, '��ȿ��', 27, 'F', '010-8888-1613');

select *from buseo;
select *from jikgeup;
select *from insa;

--6. ���� �̾��� ����� ã�� ������ �ۼ�(like Ȥ�� ���۸��̳� gpt ����)
-- %�� �ǹ� : �ּ� 0���� �̻�.
-- '��%' = �� , �̵���, ���� ���
SELECT * FROM insa WHERE NAME LIKE '��%';

-- �� �� ���ڰ� ��.
SELECT * FROM insa WHERE NAME LIKE '%��';

-- ���� ���ԵǸ� �� ok
select *from insa where name like '%��%';

-- ���� ���� ���̴� �� ������ ���
SELECT MAX(AGE) �ְ�� FROM insa;

--7.���� ���̰� � ����� �������� ���(��ø���ǹ��� ���� �Ǵ� �� ���� ������ �𸣸� ���۸��̳� gpt)
-- �̷� ���� �ۼ��� ��ø ���Ƕ�� �Ѵ�.
SELECT NAME �ֿ��� FROM insa WHERE AGE = (SELECT MIN(AGE) FROM insa);

--8. ���� ���̰� ���� �μ� ã��(��� ���� ����)

-- �μ��� ��� ���� ���ؾ� �Ѵ�.
select buseo_code, avg(age) from insa group by buseo_code;
select buseo_code, round(avg(age),1) from insa group by buseo_code;

-- ��� ���� �� �߿��� �� round, avg ���� �̿��ؼ� view �� ���� ����
-- �� �κп� ���� �ӽ� �̸��� �ٿ� ��� ��.
create view avg_buseo as select buseo_code, round(avg(age),1) RVA 
from insa group by buseo_code;
--���� ���
select *from avg_buseo;
-- ��� insert,update,delete�� �ȵȴ�.
-- ���� �÷��� ���ؼ��� �߰� ���� ���� �ȉ�.

-- �� �߿��� max�� ���� ���ؾ� �Ѵ�.
select *from avg_buseo where rva=(select max(rva) from avg_buseo);

-- �μ��� ��� ���̰� max�� ��ġ�ϴ� �μ��� ã�ƾ� �Ѵ�.
select name, buseo_code, rva from avg_buseo
join buseo on avg_buseo.buseo_code= buseo.code
where rva=(select max(rva) from avg_buseo);

--SELECT �μ���, AVG(AGE) FROM rva GROUP BY �μ��� ORDER BY AVG(AGE) DESC FETCH FIRST 1 ROW ONLY;

-- 9. ���� �� ��� ���� ����ϱ�
SELECT gender ,AVG(AGE) FROM insa GROUP BY GENDER;

-- 10. �λ� ���̺��� ����ϵ�, �μ��ڵ�� �����ڵ�鵵 �μ���� ���޸����� ����ϱ� ��, 3���� ���̺��� ���� �����ؾ� ��
--ALTER TABLE insa ADD CONSTRAINT buseo_code FOREIGN KEY (buseo_code) REFERENCES buseo(CODE);
--ALTER TABLE insa ADD CONSTRAINT jikgeup_code FOREIGN KEY (jikgeup_code) REFERENCES jikgeup(CODE);
--CREATE VIEW ABC AS SELECT NUM, buseo.name �μ���, jikgeup.name ���޸�, NAME, AGE, GENDER, HP FROM buseo,jikgeup HR WHERE code = buseo.code AND code=jikgeup.code;
--SELECT * FROM ABC;

-- 1. join�� �̿��ϴ� ��.
-- if���� and�� ����. ������ �������°�.
SELECT sabeon,insa.name,buseo.name,jikgeup.name from insa join buseo on
insa.buseo_code = buseo.code join jikgeup on insa.jikgeup_code = jikgeup.code;

--2. where�� �̿��ϴ� ���
-- ���̼� ����
SELECT sabeon ��� ,insa.name �̸� ,buseo.name �μ� ,jikgeup.name ���� , age ���� from insa , buseo,jikgeup
where insa.buseo_code= buseo.code and insa.jikgeup_code = jikgeup.code
order by ���� desc;

-- �μ��� ���̺��� ���� �� 40 �� �̻� ǥ��
 SELECT BUSEO_CODE, ROUND(AVG(AGE),1) RVA FROM INSA 
GROUP BY BUSEO_CODE HAVING ROUND(AVG(AGE),1) >=40;






