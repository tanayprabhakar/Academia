A=int(input("Enter A: "))
B=int(input("Enter B: "))
C=int(input("Enter C: "))
if(A>B and A>C):
    print(A,">",B,"and",C)
elif(B>C):
    print(B,">",A,"and",C)
else:
    print(C,">",B,"and",C)
