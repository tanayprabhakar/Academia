n=int(input("Enter a no to check if it is prime or not: "))
count=0
if(n==1):
    print("The given number is not a prime number.")
for i in range(1,(n//2)+1):
    if(n%i==0):
        count+=1
    if(count>1):
        print("The given number is not a prime number.")
        break
if(count==1):
    print("The given number is a prime number.")
