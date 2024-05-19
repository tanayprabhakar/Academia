a=[]
n=int(input("Enter the number of input: "))
for i in range(n):
    b=int(input("Enter the score: "))
    a.append(b)
b=set(a)
a=list(b)
a.sort()
print("The Score of the runner up is: ",a[-2])