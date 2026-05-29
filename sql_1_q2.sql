select e1.name as Employee from employee e1
inner join employee e2
on e1.managerId = e2.id
where e2.salary < e1.salary
