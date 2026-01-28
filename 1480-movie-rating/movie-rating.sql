# Write your MySQL query statement below
(select
users.name as results
from users left join movierating on users.user_id = movierating.user_id
group by movierating.user_id
order by count(users.user_id) desc, users.name
limit 1)

union all

(select
title as results
from movies left join movierating on movies.movie_id = movierating.movie_id
where created_at like "2020-02%"
group by movierating.movie_id
order by avg(rating) desc, title
limit 1);