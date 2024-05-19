a=0
b=1
c=1
n=int(input("Enter the term you want fibonacci series upto: "))
print("The fibonacci series upto given term is:")
for i in range(n):
    print(a,end="  ")
    a=b
    b=c
    c=a+b
