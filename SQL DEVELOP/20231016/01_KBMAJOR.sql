--DROP TABLE IF EXISTS 이건 ORACLE에서는 지원되지 않음


DROP TABLE KBMAJOR;

CREATE TABLE KBMAJOR(
CODE CHAR(3) PRIMARY KEY,
NAME VARCHAR2(100)
);

SELECT * FROM KBMAJOR;

INSERT INTO KBMAJOR(CODE, NAME) VALUES('001','컴공');
INSERT INTO KBMAJOR(CODE, NAME) VALUES('002','화공');
INSERT INTO KBMAJOR(CODE, NAME) VALUES('003','생공');

COMMIT;