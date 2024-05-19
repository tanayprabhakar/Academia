n=int(input("Enter a number: "))
sum=0
while(n>0):
    sum+=n%10
    n//=10
print("The sum is:",sum)
