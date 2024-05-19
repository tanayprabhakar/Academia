#x="hello"
#assert x=="hello","x should be 'hello'"

try:
    numerator=50
    denom=int(input("Enter the denominator"))
    quotient=(numerator/denom)
    print("Division Performed Successfully")
except ZeroDivisionError:
    print("Denominator as zero not allowed.")
except  ValueError:
    print("Value must be integer.")
'''
try:
    def hello():
        a=10
    print(a)
except NameError:
    print("Variable not found")
'''