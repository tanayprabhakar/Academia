print("All the numbers divisible between 1 and 100 by  5 & 7")
count=0
for i in range(1,101):
    if(i%5==0):
        count+=1
        print(i,end=" ")
    elif(i%7==0):
        count+=1
        print(i,end=" ")
print("\nCount:",count)