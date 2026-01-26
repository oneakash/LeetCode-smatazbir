# Write your MySQL query statement below
select user_id,
case
when name is null
then null
else concat(
    upper(substring(name, 1,1)),
    lower(substring(name, 2))
)
end as name
from users
order by user_id;