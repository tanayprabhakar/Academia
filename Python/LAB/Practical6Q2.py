a=()
n=int(input("Enter the number of input: "))
for i in range(n):
    b=int(input("Enter the element: "))
    a=a+(b,)
sum=0
for i in a:
    sum+=i
print("Avg:",sum/n)