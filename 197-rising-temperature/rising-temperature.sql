# Write your MySQL query statement below
SELECT id
FROM Weather w1
WHERE temperature > ANY (
    SELECT temperature
    FROM Weather w2
    WHERE DATEDIFF(w1.recordDate, w2.recordDate)=1
);