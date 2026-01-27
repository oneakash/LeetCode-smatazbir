# Write your MySQL query statement below
select *
from users
where mail like binary "%@leetcode.com"
and mail regexp "^[a-zA-Z][a-zA-Z0-9_.-]*@leetcode\.com$"