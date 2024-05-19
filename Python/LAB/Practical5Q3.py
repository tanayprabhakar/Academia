string=input("Enter a string:")
print("String seperated by a line is:")
for i in string:
    if(i==" "):
        print("\n")
    else:
        print(i,end="")
print()