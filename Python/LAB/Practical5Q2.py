string=input("Enter a string: ")
string=string.upper()
count=0
for i in string:
    if(i=='A' or i=='E' or i=='I' or i=="O" or i=="U"):
        count+=1
print("The number of vowels in the string is: ",count)