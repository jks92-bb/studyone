-- EMPLOYEE ���̺��� ������ �߰� �����ϴ� ���ν��� ����
CREATE OR REPLACE PROCEDURE add_emplo
(
    input_num in varchar2, -- in�տ� �ѹ����ص� �ؿ� in ����� in���� �ݿ���.
    input_name varchar,
    input_age in int,
    input_depart in varchar2
    
)
is begin
    insert into employee values(input_num,input_name,input_age,input_depart);
end add_emplo;