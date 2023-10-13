-- ���� ������ ; �ֱ� 
-- ��ҹ��� ���о���.


-- CRUD : CREATE/ READ / UPDATE/ DELETE
-- SQL��  : ���� CRUD����� �����ϱ� ���� ��ɹ�(���ǹ�)
--  => <<DQL/DDL/DML>> / DCL/ TCL

-- DQL(Query) : ������ ��ȸ
-- SELECT�� : �����͸� �˻��ϴ� ��ɾ� (�˻��Ȱ���� ����Ͽ� ǥ��)
-- SELECT Į���� FROM ���̺�� [WHERE ���ǹ�];
SELECT LENGTH('HELLOSQL') FROM DUAL WHERE LENGTH('HELLOSQL')>=5;

-- DDL : ������ ����(DB, ���̺�,  ...)����
--      => CREATE(����), ALTER(����), DROP, TRUNCATE(����)

-- DML(Mainpulation) : ������ ����
--      => INSERT(����) , UPDATE(����), DELETE(����), (+SELECT)

-- ORACLE �ڷ���
-- * ������
-- CHAR(N): ����ũ���� ������ Ÿ��, ������ N���� ���� �Ҵ�(��ȿ����)
-- VARCHAR2(N) : ���������� ���ϴ� ũ���� ������ Ÿ��,�ִ� N�������� ���� �Ҵ�(ȿ����)
-- NVARCHAR2(N)
-- * ������
-- INT : ���� ������
-- FLOAT : �Ǽ� ������
-- NUMBER(P,S) : ����, �Ǽ� ��� ����
--       P(�����κ�+�Ǽ��κ� �ִ� �ۼ������� ����) S(�Ǽ��κ� �ִ� �ۼ������� ����)


-- ��α� "��"�� ���� ���̺� ����
CREATE TABLE POST(
    TITLE VARCHAR2(30),      -- �� ����
    DAY VARCHAR2(10),         -- �� �ۼ���¥
    BODY VARCHAR2(100)        -- �� ����
);

-- POST ���̺� ���Ͽ� ,������ ����
INSERT INTO POST VALUES('���','20231013','���� ����� �̷����ϴ�.');
INSERT INTO POST(DAY, TITLE, BODY) VALUES('20231013', '��ɹ�', '����Դϴ�.');
INSERT INTO POST(DAY, TITLE, BODY) VALUES('20231013', '����', '����� ���־�.');
INSERT INTO POST(DAY, TITLE, BODY) VALUES('20231013', '��', '�ո����� �����Դϴ�.');
INSERT INTO POST(DAY, TITLE, BODY) VALUES('20231013', '�ֽ�', '���� ��ȸ�Դϴ�.');

-- POST ���̺� �־�, TITLE�� ���� '�ֽ�'�� �����͸� ����
--DELETE FROM POST;   -- TRUNCATE�� �Ȱ��� �����Ͱ� ��� ����.
DELETE FROM POST WHERE TITLE = '�ֽ�';

-- * : ��ü 
-- POST ���̺� ��ü �˻� ���.
SELECT * FROM POST;

-- ����.
-- DROP : ���̺� ����(������, ���̺� ����)
-- TRUNCATE : ���̺� ����(�����͸� ����, ������ ��������)
DROP TABLE POST;

COMMIT;





 






