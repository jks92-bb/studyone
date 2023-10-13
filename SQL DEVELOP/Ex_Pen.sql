-- PEN_LIST ���̺� ���� => ����ȸ�� (COMPANY), ����(COLOR)
CREATE TABLE PEN_LIST(
 COMPANY VARCHAR2(20),
 COLOR VARCHAR2(10)
);


-- PEN_LIST ���̺� ���
SELECT *FROM PEN_LIST;

-- ALTER TABLE ���̺�� RENAME TO ���ο� ���̺��;
--PEN_LIST ���̺�� PEN���� ����
ALTER TABLE PEN_LIST RENAME TO PEN;

-- ALTER TABLE ���̺�� RENAME COLUMN ���� �÷��� TO ���ο� �÷���
-- PEN ���̺� �� COMPANY Į���� COM���� ����
ALTER TABLE PEN RENAME COLUMN COMPANY TO COM; 

-- PEN ���̺� ����(THICKNESS) Į�� �߰�
ALTER TABLE PEN ADD THICKNESS VARCHAR2(10); 

-- PEN ���̺� ����(PRICE) Į�� �߰�
ALTER TABLE PEN ADD PRICE VARCHAR2(10);

COMMIT;

-- PEN ���̺� ���
SELECT *FROM PEN;

-- PEN ���̺� ���� ��ü ������ 5~10�� ����
INSERT INTO PEN VALUES('�𳪹�','BLACK','0.5','1000');
INSERT INTO PEN VALUES('�𳪹�','YELLOW','1.5','1200');
INSERT INTO PEN VALUES('�𳪹�','BLUE','1.0','1300');
INSERT INTO PEN VALUES('�𳪹�','RED','0.75','1500');
INSERT INTO PEN VALUES('�۷θ�','GREEN','0.5','2000');

-- PEN ���̺� ��ü ������ ���
SELECT *FROM PEN;

-- PEN ������ ��, ������ 2000�� �̻��� �������� ����ȸ�縦 ��� '�𳪹�'�� ����
--UPDATE ���̺�� SETĮ�� 1 = ���氪1, .... WHERE ������;
UPDATE PEN SET COM = '�𳪹�' WHERE PRICE >= 2000;

-- PEN ������ ��, ���Ⱑ 0.5�� �������� ������ 1500���� ����
UPDATE PEN SET PRICE = '1500' WHERE THICKNESS = '0.5';

-- PEN ���̺� ��ü ������ ���
SELECT *FROM PEN;

-- PEN ���̺� �� ����, ���� Į�� �����͸� ���
-- SELECT Į���� FROM ���̺�� [WHERE ���ǹ�];
SELECT THICKNESS,COLOR FROM PEN;

--PEN ������ ��, ������'BLACK'�� �������� ����, ����, ���� Į�� �����͸� ���.
SELECT COLOR,THICKNESS,PRICE FROM PEN WHERE COLOR ='BLACK';

--PEN ���̺��� ������ ����
TRUNCATE TABLE PEN;

-- PEN ���̺� ��ü ������ ���
SELECT *FROM PEN;

--PEN ���̺� ����
DROP TABLE PEN;




-----������--
--DROP TABLE PEN;

