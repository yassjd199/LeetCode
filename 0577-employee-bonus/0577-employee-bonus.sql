# Write your MySQL query statement below
SELECT name, bonus 
FROM Employee AS E
LEFT JOIN Bonus AS B
ON E.empId = B.empId
WHERE B.bonus < 1000 or B.bonus IS NULL 
;