# Write your MySQL query statement below
select round(sum(order_date = customer_pref_delivery_date) * 100.0 / COUNT(*), 2) as immediate_percentage
from Delivery
where (customer_id, order_date) in (
    SELECT customer_id, MIN(order_date)
    FROM Delivery
    GROUP BY customer_id
);