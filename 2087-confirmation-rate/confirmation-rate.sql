# Write your MySQL query statement below
select s.user_id,ROUND(COALESCE(AVG(c.action = 'confirmed'), 0), 2) AS confirmation_rate from Signups s
LEFT JOIN confirmations c
ON s.user_id=c.user_id
GROUP BY s.user_id
