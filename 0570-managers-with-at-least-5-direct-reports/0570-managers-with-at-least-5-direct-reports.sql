SELECT name
FROM Employee as E
JOIN
(
    SELECT managerId , COUNT(managerId) as c 
    FROM Employee 
    GROUP BY managerId
) AS T
ON E.id = T.managerId
WHERE T.c >= 5
;

