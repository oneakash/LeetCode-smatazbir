# Write your MySQL query statement below
SELECT query_name,
round(avg(rating/position),2) as quality,
round(sum(CASE WHEN rating<3 THEN 1 ELSE 0 END)/count(*)*100,2) as poor_query_percentage
from queries
group by query_name;