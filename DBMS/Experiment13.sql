DECLARE
    A NUMBER;
    B NUMBER;
    C NUMBER;
    greatest NUMBER;
BEGIN
    A := :x;
    B := :y;
    C := :z;
    IF A > B AND A > C THEN
        greatest := A;
    ELSIF B > A AND B > C THEN
        greatest := B;
    ELSE
        greatest := C;
    END IF;
    DBMS_OUTPUT.PUT_LINE('The greatest value is: ' || greatest);
END;
/
BEGIN
    FOR i IN 1..20 LOOP
        DBMS_OUTPUT.PUT_LINE('Welcome to PL/SQL Programming');
    END LOOP;
END;
/
DECLARE
    num NUMBER := :P1_NUM;
    factorial NUMBER := 1;
BEGIN
    IF num IS NULL OR num < 0 THEN
        DBMS_OUTPUT.PUT_LINE('Invalid input. Please enter a non-negative integer.');
    ELSE
        FOR i IN 1..num LOOP
            factorial := factorial * i;
        END LOOP;
        DBMS_OUTPUT.PUT_LINE('Factorial of ' || num || ' is: ' || factorial);
    END IF;
END;
/
DECLARE
    n NUMBER := :X;
    first NUMBER := 0;
    second NUMBER := 1;
    next NUMBER;
BEGIN
    IF n IS NULL OR n < 1 THEN
        DBMS_OUTPUT.PUT_LINE('Invalid input. Please enter a positive integer.');
    ELSE
        DBMS_OUTPUT.PUT_LINE('Fibonacci Series:');
        DBMS_OUTPUT.PUT_LINE(first);
        IF n > 1 THEN
            DBMS_OUTPUT.PUT_LINE(second);
        END IF;
        
        FOR i IN 3..n LOOP
            next := first + second;
            DBMS_OUTPUT.PUT_LINE(next);
            first := second;
            second := next;
        END LOOP;
    END IF;
END;
/
DECLARE
    N INTEGER;
    s INTEGER := 0;
BEGIN
    N := :X;

    IF N IS NULL OR N < 1 THEN
        DBMS_OUTPUT.PUT_LINE('Please enter a valid positive integer for N.');
    ELSE
        FOR i IN 1..N LOOP
            s := s + i;
        END LOOP;
        DBMS_OUTPUT.PUT_LINE('The sum of the first ' || N || ' numbers is: ' || s);
    END IF;
END;
/
