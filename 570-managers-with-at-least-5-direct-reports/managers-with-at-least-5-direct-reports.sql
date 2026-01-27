# Write your MySQL query statement below
select emp.name
from employee emp join employee mgr on
emp.id = mgr.managerID
group by emp.id
having count(*)>=5;