-- STUDENT ���̺��� ������ �߰� �����ϴ� ���ν��� �ۼ�.
---�л��� ���̰� 20�̸��� �л� ������ ����
create or replace procedure DELETE_STUDENT

AS    

 begin
  DELETE FROM STUDENT
    WHERE AGE < 20;    
    
end DELETE_STUDENT ;
