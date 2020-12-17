select * from employee;

--More basic Queries;

select *
from employee;

select * 
from client;


select * from employee
order by salary desc;

select * from employee
order by sex,first_name,last_name;

select * from employee
limit 5;

select first_name,last_name
from employee;

select first_name as forename,last_name as surname
from employee;


#distinctsexin employeetable
select distinct sex 
from employee;


select count(emp_id) 
from employee;

select * from employee;
select count(emp_id)
from employee
where sex='F' and birth_day >'1971-01-01';


select avg(salary) from employee;

select AVG(salary)from employee
where sex='M';

select SUM(salary) from employee
where sex='M';
#####################
#Aggregations

select count(sex),sex
from employee
group by sex;

select sum(total_sales),client_id
from works_with
group by client_id;

###############
#wild cards and like keyword

	select * from client
	where client_name LIKE '%LLC' ;
	# % =any no of characters and _=One character


	select * from branch_supplier
	where supplier_name LIKE '%Labels';

	UPDATE branch_supplier 
	set supplier_name='Stamford Labels'
	where branch_id=3 and supply_type='Custom Forms';

	#get the birth dates in october and their name
	select birth_day,first_name 
	from employee
	where birth_day like '____-10%';

	select * from employee;

	#find any clients who are school
    select * 
    from client
    where client_name like '%school%';
    
#############
#UNIONS(multiple select statement into one)
	
    #find the list of employee and brachname
    select first_name
    from employee
    UNION
    select branch_name
    from branch
    UNION
    SELECT client_name 
    FROM client;
    
    #Find a list of all clients ad branch suppliers name;
    select client_name from client
    union
    select supplier_name from branch_supplier;
    
    select client_name,branch_id 
    from client
    union
    select supplier_name,branch_id 
    from branch_supplier;
    
    #find a list of allmoney spent or earned by the company
    select salary 
    from employee
    union 
    select total_sales
    from works_with;
    
##########################################
#Joins(combine rows from two or more tables based on related column between them)

Insert into branch values(4,'Buffalo',NULL,NULL);

	#find all branches and names of the manager
    select employee.emp_id,employee.first_name,branch.branch_name
    from employee
	join branch 
    on employee.emp_id=mgr_id;
    
    select employee.emp_id,employee.first_name,branch.branch_name
    from employee
    left join branch  #left join gives all the rows from left table
    on employee.emp_id=mgr_id;
    
    select employee.emp_id,employee.first_name,branch.branch_name
    from employee
    right join branch    #right join gives all rows from right table
    on employee.emp_id=mgr_id; 
    
    
################################
#Nested queries(use one select statement infrmation to other select statement)

	#Find names of all employees who have sold over 30,000 to a single client
    select employee.first_name,employee.last_name 
    from employee
    where employee.emp_id in(
    select works_with.emp_id 
    from works_with
    where works_with.total_sales >30000);#using netsed query
    
    
    
    select distinct employee.first_name,employee.last_name
    from employee 
    join works_with
    on employee.emp_id=works_with.emp_id
    where works_with.total_sales > 30000;#using joins
    
    #find all clients who are handeled by the branch that michel 
    #schoot manages assume you know Michel's Id
    
    select client_name
    from client
    where branch_id=( 
		select branch_id
		from branch 
		where mgr_id=102
        limit 1);
        
#on delete (deleteing entries in the data base when they have forign keys associated to them)

	#on delete set null -- if we delete one of this employees then associated data will be set to NULL in other table
    #on delete set cascade--if we delete one of this employees then associated data's whole row will be deleted;
    delete 
    from employee
    where emp_id=102;
    
    select * from employee;
    select * from branch;
    
    delete from branch where branch_id=2;
    select * from branch_supplier;
############################
#Triggers
#(block of code which defines certain action that should happen when certain operation get performed on database
#we have to create triggers in command line client
create table trigger_test(
	message varchar(100));
    /*
    #create trigger in cmd
    delimiter $$
    create
		trigger my_trigger before insert
		on employee
		for each row begin
			insert into triggers_test values('added new employee')
		END $$
	delimiter;*/
    
    
insert into employee values(102,'michael','schoot','1998-10-16','M',33333,100,3);
    
INSERT INTO employee VALUES(102, 'Michael', 'Scott', '1964-03-15', 'M', 75000, 100, NULL);

select * from trigger_test;

/*DELIMITER $$
CREATE
    TRIGGER my_trigger BEFORE INSERT
    ON employee
    FOR EACH ROW BEGIN
         IF NEW.sex = 'M' THEN
               INSERT INTO trigger_test VALUES('added male employee');
         ELSEIF NEW.sex = 'F' THEN
               INSERT INTO trigger_test VALUES('added female');
         ELSE
               INSERT INTO trigger_test VALUES('added other employee');
         END IF;
    END$$
DELIMITER ;*/
#deleting triggers 'drop trigger trigger_nmae'

