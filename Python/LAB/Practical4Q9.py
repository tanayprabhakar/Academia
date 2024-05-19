for n in range(1,101):
    count=0
    for i in range(1,(n//2)+1):
        if(n%i==0):
            count+=1
        if(count>1):
            break
    if(count==1):
        print(n,end=" ")
