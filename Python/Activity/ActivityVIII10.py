def calculatequotientandremainder(num1, num2):
    try:
        num1 = int(num1)
        num2 = int(num2)
        if num2 == 0:
            raise ValueError
        quotient = num1 // num2
        remainder = num1 % num2
        print("Quotient: ",quotient)
        print("Remainder:",remainder)
    except ValueError:
        print("Cannot divide by zero")
num1 = input("Enter the first integer: ")
num2 = input("Enter the second integer: ")
calculatequotientandremainder(num1, num2)
