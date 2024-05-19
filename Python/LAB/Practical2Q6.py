import math
s1=float(input("Enter first Side: "))
s2=float(input("Enter second Side: "))
s3=float(input("Enter third Side: "))
s=s1+s2+s3/2
area=math.sqrt(s*(s-s1)*(s-s2)*(s-s3))
print("Area: ",area)