n=int(input("Enter a number: "))
#checks negetive palindrome
if(n<0):
    n=-1*n
rev=0
temp=n
#reverses the number
while(temp>0):
    rev=rev*10+temp%10
    temp//=10
#checks cases
if(rev==n):
    print("The number is Palindrome.")
else:
    print("The number is not Palindrome.")