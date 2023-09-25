
--Table STU1이 생상되었습니다.
-- 해당 줄 실행하는 단축키 : CTRL + ENTER
create table stu1 (
hakbeon char(8) primary key, --char 8byte 고정값?
name varchar2(100), --varchar2 , char ??
birth varchar2(100),
age int);

insert into stu1(hakbeon, name, birth, age)
values('09038033','이동준','890430',34);

insert into stu1(hakbeon, name, birth, age)
values('09038003','이상하','990430',24);

insert into stu1(hakbeon, name, birth, age)
values('0903803','이상하','990430',24);

select *from stu1;
