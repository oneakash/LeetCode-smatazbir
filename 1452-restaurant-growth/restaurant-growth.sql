# Write your MySQL query statement below
select
c2.visited_on as visited_on,
sum(c1.amount) as amount,
round(sum(c1.amount)/7,2) as average_amount
from customer c1  left join (
    select distinct visited_on from customer
) c2 on datediff(c2.visited_on,c1.visited_on) between 0 and 6
-- where c2.visited_on>=c1.visited_on
group by c2.visited_on
having count(distinct c1.visited_on)=7
order by c2.visited_on