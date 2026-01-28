# Write your MySQL query statement below
with latest as (select
product_id, max(change_date) as latest_date
from products
where change_date<="2019-08-16"
group by product_id)
select latest.product_id, new_price as price
from latest join products on products.product_id=latest.product_id
and products.change_date=latest.latest_date
union
select product_id, 10 as price
from products
where product_id not in (
    select product_id
    from products
    where change_date<="2019-08-16"
);