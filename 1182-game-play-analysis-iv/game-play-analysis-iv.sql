# Write your MySQL query statement below
select
round(count(a2.event_date)/count(*),2) as fraction
from activity a1 left join activity a2
on a1.player_id=a2.player_id and datediff(a2.event_date, a1.event_date)=1
where(a1.player_id,a1.event_date)in(
    select player_id, min(event_date)
    from activity
    group by player_id
);