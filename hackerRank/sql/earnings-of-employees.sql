SELECT MAX(salary * months) AS TK, count(*) FROM
Employee
GROUP BY salary * months ORDER BY salary * months  DESC LIMIT 1;
