--1. "직원명단" 테이블을 생성하고, 아래처럼 구성하여라
CREATE TABLE EMPLOYEE_LIST(
 NUMBE VARCHAR2(20),
 NAME VARCHAR2(20) NOT NULL,
 DEPARTMENT VARCHAR2(20) NOT NULL,
 AGE INT
);
--
--2. "부서명단" 테이블을 생성하고, 아래처럼 구성하여라

CREATE TABLE DEPARTMENT_LIST(
 NUMBE VARCHAR2(20),
 NAME VARCHAR2(20) NOT NULL,
 VOLUME INT
);


--3. "직원명단" 테이블에 대해서, 아래처럼 데이터를 추가하라. 
INSERT INTO EMPLOYEE_LIST VALUES ('521', '김길동','경영행정학부','25');
INSERT INTO EMPLOYEE_LIST VALUES ('525', '이길동','교무부','40');
INSERT INTO EMPLOYEE_LIST VALUES ('523', '최길동','교무부','30');
INSERT INTO EMPLOYEE_LIST VALUES ('524', '정길동','교무지원부','29');


--DROP TABLE EMPLOYEE_LIST;

--4. "부서명단" 테이블에 대해서, 아래처럼 데이터를 추가하라.
INSERT INTO department_list VALUES('1','교무부','30');
INSERT INTO department_list VALUES('2','교무지원부','15');
INSERT INTO department_list VALUES('3','경영행정부','10');

--5. 3,4번 문제에 제시된 사진처럼, "직원명단"과 "부서명단" 테이블의 모든 데이터를 출력하라.
SELECT *FROM employee_list;
SELECT *FROM department_list;

--6. "직원명단" 테이블에 대해서, 
--이름과 부서 칼럼에 대한 정보만 검색하여 출력하라.
SELECT NAME, DEPARTMENT FROM employee_list;

--7. "직원명단" 테이블에 대해서, 부서가 "교무부"인
--데이터만 검색하여 사원번호, 이름, 부서 칼럼 정보만 출력하라.
SELECT NUMBE,NAME,DEPARTMENT FROM employee_list WHERE department ='교무부';

--8. "부서명단" 테이블에 대해서, 직원수가 10명 초과인 데이터만 
--검색하여 부서이름, 직원수 칼럼 정보만 출력하라.
SELECT NAME,VOLUME FROM department_list WHERE volume > '10';

--9. "부서명단" 테이블에 대해서, 부서번호가 "2"인
--데이터만 검색하여 전체 칼럼의 정보를 출력하라.
SELECT *FROM DEPARTMENT_LIST WHERE NUMBE ='2';

--10. "직원명단"과 "부서명단" 테이블을 삭제하여라. 
DROP TABLE EMPLOYEE_LIST;
DROP TABLE DEPARTMENT_LIST;
