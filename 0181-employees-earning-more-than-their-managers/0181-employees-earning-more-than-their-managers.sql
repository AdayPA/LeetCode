# Write your MySQL query statement below
select  em.name as Employee from Employee em where em.salary > (select salary from Employee em2 where
                                                         em.managerId = em2.id)