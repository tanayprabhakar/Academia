def max(lista):
    highest=lista[0]
    for i in lista:
        if (highest<i):
            highest=i
    return highest
def min(lista):
    lowest=lista[0]
    for i in lista:
        if (lowest>i):
            lowest=i
    return lowest
a=[]
n=int(input("Enter the number of input: "))
for i in range(n):
    b=int(input("Enter the element: "))
    a.append(b)
print("Maximum: ",max(a))
print("Minimum: ",min(a))