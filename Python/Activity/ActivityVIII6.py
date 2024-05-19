def divide(num1, num2):
    try:
        result = num1 / num2
        print("Result of division:",result)
        print("Division successful.")
    except ZeroDivisionError:
        print("Division failed: Cannot divide by zero.")
    finally:
        pass
divide(10, 2)
divide(5, 0)