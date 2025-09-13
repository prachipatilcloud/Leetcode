# Write your MySQL query statement below
select a.teacher_id, count(distinct a.subject_id) as cnt
from Teacher a
join Teacher b
on a.teacher_id = b.teacher_id
group by teacher_id;