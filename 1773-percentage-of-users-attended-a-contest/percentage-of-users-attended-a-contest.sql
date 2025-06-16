# Write your MySQL query statement below
select distinct contest_id, 
round(count(distinct user_id)*100.00/(select count(*) from Users),2) as percentage
FROM 
    Register
group by contest_id
order by 
percentage desc,
contest_id asc;
