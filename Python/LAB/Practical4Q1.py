#Find a factorial of given number.
a=int(input("Enter a number to calculate factorial for: "))
fact=1
for i in range(1,a+1):
    fact=fact*i
print("The factorial is",fact)