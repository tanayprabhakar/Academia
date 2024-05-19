string=str(input("Enter a string: "))
for i in range(len(string)):
    if(ord(string[i])>=97 and string[i]<=123):
        print(chr(ord(string[i])-32),end="")
    else:
        print(string[i],end="")