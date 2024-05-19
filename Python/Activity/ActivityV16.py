def evenfilter(lista):
    evenlist=[]
    for i in lista:
        if(i%2==0) : 
            even=i
            evenlist.append(even)
    return evenlist
lista = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
evenlist = evenfilter(lista)
print("Original list of numbers:", lista)
print("List of even numbers:", evenlist)