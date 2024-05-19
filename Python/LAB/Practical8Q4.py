def integerdivision(a, b):
    try:
        result = a // b
        print(result)
    except ZeroDivisionError:
        print("Error Code: integer division or modulo by zero")
    except ValueError:
        print("Error Code: invalid literal for int() with base 10:",b)
N = int(input("Enter the number of test cases: "))
for i in range(N):
    a, b = map(int, input("Enter values seperated by space: ").split())
    integerdivision(a, b)

