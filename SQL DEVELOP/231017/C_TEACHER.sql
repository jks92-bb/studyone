-- CREATE PROCEDURE ���� ����Ͽ� ����� �߰��ϴ� ���ν��� ����
CREATE OR REPLACE PROCEDURE C_TEACHER
IS
BEGIN
    -- ����� 1�� ����
    UPDATE TEACHER
    SET CAREER = CAREER + 1;

    COMMIT; -- Ʈ������� Ȯ��(Commit)�Ͽ� �����ͺ��̽��� ���� ���� ����
END C_TEACHER;

