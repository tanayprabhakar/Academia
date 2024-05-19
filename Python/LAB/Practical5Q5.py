string=(input("Enter a string:"))
string=string.upper()
for j in range(65,91):
    count=0
    for i in string:   
        if chr(j)==i:
            count+=1
    if(count!=0):
        print(count,chr(j))