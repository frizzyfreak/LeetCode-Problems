# Write your MySQL query statement below
SELECT a.Id
from Weather a,
    Weather b
where dateDiff(a.recordDate,b.recordDate) = 1
and a.temperature > b.temperature