# Write your MySQL query statement below
SELECT project_id, ROUND(AVG(experience_years),2) as average_years
FROM Project AS P
JOIN Employee AS e
ON P.employee_id = E.employee_id
GROUP BY project_id
;