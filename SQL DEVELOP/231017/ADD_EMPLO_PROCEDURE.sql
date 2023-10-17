-- EMPLOYEE 테이블의 데이터 추가 수행하는 프로시저 선언
CREATE OR REPLACE PROCEDURE add_emplo
(
    input_num in varchar2, -- in앞에 한번만해도 밑에 in 안적어도 in으로 반영됌.
    input_name varchar,
    input_age in int,
    input_depart in varchar2
    
)
is begin
    insert into employee values(input_num,input_name,input_age,input_depart);
end add_emplo;