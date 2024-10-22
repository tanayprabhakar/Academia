CREATE OR REPLACE VIEW Dept_Manager_View AS
SELECT d.dname AS department_name,
       e.fname || ' ' || e.lname AS manager_name,
       e.salary AS manager_salary
FROM department d
JOIN employee e ON d.mgr_ssn = e.ssn;

CREATE OR REPLACE VIEW Research_Employee_Supervisor_View AS
SELECT e1.fname || ' ' || e1.lname AS employee_name,
       e2.fname || ' ' || e2.lname AS supervisor_name,
       e1.salary AS employee_salary
FROM employee e1
JOIN employee e2 ON e1.super_ssn = e2.ssn
JOIN department d ON e1.dno = d.dnumber
WHERE d.dname = 'Research';

CREATE OR REPLACE VIEW Project_Details_View AS
SELECT p.pname AS project_name,
       d.dname AS controlling_department_name,
       COUNT(w.essn) AS number_of_employees,
       SUM(w.hours) AS total_hours_per_week
FROM project p
JOIN department d ON p.dnum = d.dnumber
JOIN works_on w ON p.pnumber = w.pno
GROUP BY p.pname, d.dname;

CREATE OR REPLACE VIEW Project_Multiple_Employees_View AS
SELECT p.pname AS project_name,
       d.dname AS controlling_department_name,
       COUNT(w.essn) AS number_of_employees,
       SUM(w.hours) AS total_hours_per_week
FROM project p
JOIN department d ON p.dnum = d.dnumber
JOIN works_on w ON p.pnumber = w.pno
GROUP BY p.pname, d.dname
HAVING COUNT(w.essn) > 1;