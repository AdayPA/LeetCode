DELETE FROM Person
WHERE Id NOT IN (
    SELECT Id
    FROM (
        SELECT MIN(Id) AS Id
        FROM Person
        GROUP BY Email
    ) AS temp
);
