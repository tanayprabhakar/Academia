DECLARE
  changecount NUMBER := 0;
BEGIN
  UPDATE EMPLOYEES
  SET SALARY = SALARY * 1.1;
  
  changecount := SQL%ROWCOUNT;
  
  IF changecount > 0 THEN
    DBMS_OUTPUT.PUT_LINE(changecount || ' record(s) updated.');
  ELSE
    DBMS_OUTPUT.PUT_LINE('No Change');
  END IF;
END;
DECLARE
  CURSOR emp_cursor IS SELECT First_name, employee_id, salary FROM EMPLOYEES;
  
  cursoremployee_name EMPLOYEES.First_name%TYPE;
  cursoremployee_id EMPLOYEES.employee_id%TYPE;
  cursorsalary EMPLOYEES.salary%TYPE;
BEGIN
  OPEN emp_cursor;
  
  LOOP
    FETCH emp_cursor INTO cursoremployee_name, cursoremployee_id, cursorsalary;
    
    EXIT WHEN emp_cursor%NOTFOUND;
    
    DBMS_OUTPUT.PUT_LINE('Employee Name: ' || cursoremployee_name ||', Employee ID: ' || cursoremployee_id ||', Salary: ' || cursorsalary);
  END LOOP;
  CLOSE emp_cursor;
END;
DROP TABLE temp_emp;
CREATE TABLE temp_emp AS
   SELECT empno, ename, sal
   FROM emp;
DELETE FROM temp_emp;

DECLARE
   z_empid emp.empno%TYPE;
   z_empname emp.ename%TYPE;
   z_salary emp.sal%TYPE;

   CURSOR cur_st IS
      SELECT empno,
             ename,
             sal
      FROM   emp
      WHERE  sal > '2500';
BEGIN
OPEN cur_st;
LOOP
   FETCH cur_st INTO z_empid, z_empname, z_salary;
   EXIT WHEN cur_st%NOTFOUND;
   INSERT INTO temp_emp(empno,ename,sal)VALUES(z_empid,z_empname,z_salary);
END LOOP;
CLOSE cur_st;
COMMIT;
END;
/
