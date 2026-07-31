# Write your MySQL query statement below

SELECT contest_id, ROUND(COUNT(r.user_id)*100/(
    SELECT COUNT(user_id) FROM Users
), 2) percentage
FROM Register r LEFT JOIN Users u ON u.user_id=r.user_id
GROUP BY contest_id
ORDER BY percentage DESC, contest_id;

-- join na korleo hobe, but jokhon onno kono column theke value
--  or column show korte hobe tokhon must be join korte hobe