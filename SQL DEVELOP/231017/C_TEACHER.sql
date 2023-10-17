-- CREATE PROCEDURE 문을 사용하여 경력을 추가하는 프로시저 생성
CREATE OR REPLACE PROCEDURE C_TEACHER
IS
BEGIN
    -- 경력을 1씩 증가
    UPDATE TEACHER
    SET CAREER = CAREER + 1;

    COMMIT; -- 트랜잭션을 확정(Commit)하여 데이터베이스에 변경 내용 저장
END C_TEACHER;

