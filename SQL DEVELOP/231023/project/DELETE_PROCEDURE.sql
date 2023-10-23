-- 1. ��ü ������ ����
CREATE OR REPLACE PROCEDURE DELETE_ALL
IS BEGIN
    DELETE FROM INVENTORY;
    DELETE FROM COMPANY;
END DELETE_ALL;
/
-- 2. ��ǰ �����ͻ��� - ���ڵ��
CREATE OR REPLACE PROCEDURE DELETE_INVENTORY_CODE(
    DEL_FOOD_CODE IN INT
)
IS BEGIN
    DELETE FROM INVENTORY WHERE FOOD_CODE = DEL_FOOD_CODE;
END DELETE_INVENTORY_CODE;
/
CREATE OR REPLACE PROCEDURE DELETE_COMPANY_CODE(
    DEL_COMPANY_CODE IN INT
)
IS BEGIN
    DELETE FROM COMPANY WHERE CODE = DEL_COMPANY_CODE;
END DELETE_COMPANY_CODE;