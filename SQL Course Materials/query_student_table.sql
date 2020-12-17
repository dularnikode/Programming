CREATE TABLE student(
    studentid int AUTO_INCREMENT primary key,
    name varchar(20) NOT NULL,
    major varchar(20) default 'undecided');
    
DESCRIBE student;
INSERT INTO student(name,major) VALUES('Jack','Sociology');
INSERT INTO student(name,major) VALUES('Claire','Chemistry');
INSERT INTO student(name,major) VALUES('Jack','Biology');
INSERT INTO student(name,major) VALUES('Mike','Computer science');

select * from student;
    
drop table student;
    
alter table student add gpa decimal(3,2);
alter table student drop column gpa;


UPDATE student
SET major = 'Bio'
WHERE major='Biology';

UPDATE student
SET major ='biochemistry'
WHERE major ='Bio' OR major='Chemistry';


update student
set major ='bbio'
where studentid=1 or studentid=2;



update student
set major='geography'
where major='undecided';

delete from student;

select *
from student;

select major from student;

select major,name 
from student
order by major desc;

select major,name 
from student
order by name asc;

select *
from student
limit 2;

select *
from student
order by studentid desc
limit 2;

select name,major
from student 
where major='chemistry' or major='geography';


select *
from student
where studentid <> 3;-- not equal to 3 

select *
from student
where studentid < 3;

select * 
from student 
where name in('Claire','Kate','Mike');


select * 
from student 
where major in ('geography','chemistry') and studentid >=2;

drop schema sql_invoicing;










































































































































    
    
    