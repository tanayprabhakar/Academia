sentence=input("Enter a string: ")
count=0
for i in sentence:
    if(ord(i)>64 and ord(i)<91):
        count+=1
print("Number of capital letter in the sentence is:",count)