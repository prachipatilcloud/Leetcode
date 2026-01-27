# Write your MySQL query statement below
select c.customer_id 
from Customer c
GROUP BY c.customer_id
HAVING COUNT(DISTINCT c.product_key) = (
    SELECT COUNT(*) FROM Product
);