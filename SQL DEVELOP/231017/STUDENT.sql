-- STUDENT ���̺��� ������ �߰� �����ϴ� ���ν��� �ۼ�.
create or replace procedure ADD_STUDENT
(
    input_HAKBUN in varchar2,
    input_NAME in varchar2,
    INPUT_AGE IN INT,
    INPUT_CHARGE_T IN VARCHAR2 
    
)
is begin
    insert into STUDENT values(input_HAKBUN, input_NAME,INPUT_AGE,INPUT_CHARGE_T);
end ADD_STUDENT ;
