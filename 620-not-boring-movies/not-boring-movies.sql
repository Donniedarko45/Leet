# Write your MySQL query statement below
select id,movie,description,rating FROM Cinema
where id%2=1 AND description <> 'boring'

Order by rating desc