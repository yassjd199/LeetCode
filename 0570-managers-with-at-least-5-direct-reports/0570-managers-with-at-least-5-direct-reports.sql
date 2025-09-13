SELECT name
FROM Employee as E
JOIN
(
    SELECT managerId , COUNT(managerId) as c 
    FROM Employee 
    GROUP BY managerId
    HAVING c>=5
) AS T
ON E.id = T.managerId
;

