
--Table STU1�� ����Ǿ����ϴ�.
-- �ش� �� �����ϴ� ����Ű : CTRL + ENTER
create table stu1 (
hakbeon char(8) primary key, --char 8byte ������?
name varchar2(100), --varchar2 , char ??
birth varchar2(100),
age int);

insert into stu1(hakbeon, name, birth, age)
values('09038033','�̵���','890430',34);

insert into stu1(hakbeon, name, birth, age)
values('09038003','�̻���','990430',24);

insert into stu1(hakbeon, name, birth, age)
values('0903803','�̻���','990430',24);

select *from stu1;
