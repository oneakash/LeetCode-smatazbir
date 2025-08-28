# Write your MySQL query statement below

SELECT ALL stu.student_id , stu.student_name , sb.subject_name, COUNT(ex.student_id) attended_exams
FROM Students stu CROSS JOIN Subjects sb LEFT JOIN Examinations ex 
ON stu.student_id = ex.student_id
AND sb.subject_name = ex.subject_name
GROUP BY stu.student_id, stu.student_name, sb.subject_name
ORDER BY stu.student_id, sb.subject_name
;