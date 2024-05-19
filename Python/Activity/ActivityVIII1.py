try:
    num1 = int(input("Enter the first integer: "))
    num2 = int(input("Enter the second integer: "))
    result = num1 / num2
    print("The result of division is: ",result)
except ZeroDivisionError:
    print("Error: Please enter a non-zero value for the second integer.")
except ValueError:
    print("Error: Please enter valid integers.")
