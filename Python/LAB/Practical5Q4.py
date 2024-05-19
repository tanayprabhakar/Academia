string=input("Enter a string: ")
substring=input("Enter a substring: ")
count=0
trav=0
for i in string:
    for j in substring:
        if (i!=j):
            break
        elif(substring==string[trav:len(substring)+trav]):
            count+=1
    trav+=1
print(count)