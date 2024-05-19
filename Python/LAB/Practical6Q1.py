a=[]
count={0:0,1:0,2:0,3:0}
n=int(input("Enter the number of input: "))
for i in range(n):
    b=int(input("Enter the element: "))
    a.append(b)
for i in range(4):
    count[i]=a.count(i)
for key,values in count.items():
    print(key,":",values)