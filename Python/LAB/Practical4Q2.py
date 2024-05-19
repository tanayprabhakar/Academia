num=int(input("Enter a number to check if it is armstrong or not: "))
temp=num
digits=0
while(temp>0):
    temp//=10
    digits+=1
temp=num
armstrong=0
while(temp>0):
    armstrong+=(temp%10)**digits
    temp//=10
if(armstrong==num):
    print(num,"is an armstrong number.")
else:
    print(num,"is not an armstrong number.")