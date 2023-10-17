-- STUDENT 테이블의 데이터 추가 수행하는 프로시저 작성.
---학생중 나이가 20미만인 학생 데이터 제거
create or replace procedure DELETE_STUDENT

AS    

 begin
  DELETE FROM STUDENT
    WHERE AGE < 20;    
    
end DELETE_STUDENT ;
