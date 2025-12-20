
select e2.name as Employee
from Employee as e1
inner join Employee as e2
on e1.id=e2.managerID
where e1.salary < e2.salary;