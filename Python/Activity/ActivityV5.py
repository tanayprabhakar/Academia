def reverse(temp):
    rev=0
    #reverses the number
    while(temp>0):
        rev=rev*10+temp%10
        temp//=10
    return rev
def palindrome(n):
    rev=reverse(n)
    #checks cases
    if(rev==n):
        print("The number is Palindrome.")
    else:
        print("The number is not Palindrome.")
n=int(input("Enter a number: "))
palindrome(n)