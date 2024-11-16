CREATE OR REPLACE FUNCTION FindGreatest (A NUMBER, B NUMBER, C NUMBER)
RETURN NUMBER IS
    greatest NUMBER;
BEGIN
    IF A > B AND A > C THEN
        greatest := A;
    ELSIF B > A AND B > C THEN
        greatest := B;
    ELSE
        greatest := C;
    END IF;
    RETURN greatest;
END;
/
DECLARE
    result NUMBER;
BEGIN
    result := FindGreatest(10, 20, 15);
    DBMS_OUTPUT.PUT_LINE('The greatest value is: ' || result);
END;
/
CREATE OR REPLACE PROCEDURE DisplayMessage IS
BEGIN
    FOR i IN 1..20 LOOP
        DBMS_OUTPUT.PUT_LINE('Welcome to PL/SQL Programming');
    END LOOP;
END;
/
BEGIN
    DisplayMessage;
END;
/
CREATE OR REPLACE FUNCTION CalculateFactorial(num NUMBER)
RETURN NUMBER IS
    factorial NUMBER := 1;
BEGIN
    FOR i IN 1..num LOOP
        factorial := factorial * i;
    END LOOP;
    RETURN factorial;
END;
/
DECLARE
    result NUMBER;
BEGIN
    result := CalculateFactorial(5);
    DBMS_OUTPUT.PUT_LINE('Factorial is: ' || result);
END;
/
DECLARE
    result NUMBER;
BEGIN
    result := FindGreatest(10, 20, 15);
    DBMS_OUTPUT.PUT_LINE('The greatest value is: ' || result);
END;
/
BEGIN
    GenerateFibonacci(10);
END;
/
CREATE OR REPLACE FUNCTION SumOfFirstN(N NUMBER)
RETURN NUMBER IS
    s NUMBER := 0;
BEGIN
    FOR i IN 1..N LOOP
        s := s + i;
    END LOOP;
    RETURN s;
END;
/
DECLARE
    result NUMBER;
BEGIN
    result := SumOfFirstN(10);
    DBMS_OUTPUT.PUT_LINE('The sum of the first N numbers is: ' || result);
END;
/
