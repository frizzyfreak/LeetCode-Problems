# Write your MySQL query statement below
SELECT unique_id, name
FROM Employees e1
LEFT JOIN EmployeeUNI eu ON e1.id=eu.id