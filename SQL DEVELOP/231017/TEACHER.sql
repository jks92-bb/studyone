-- TEACHER ���̺��� ������ �߰� �����ϴ� ���ν��� �ۼ�.
create or replace procedure ADD_TEACHER
(
    input_nAME in varchar2,
    input_TEAM in varchar2,
    INPUT_CAREER IN INT,
    INPUT_CHARGE IN VARCHAR2
    
)
is begin
    insert into TEACHER values(input_NAME, input_TEAM,INPUT_CAREER,INPUT_CHARGE);
end ADD_TEACHER ;
