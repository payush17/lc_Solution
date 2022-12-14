# Write your MySQL query statement below email
SELECT email
FROM Person
group by email
having count(email) > 1
