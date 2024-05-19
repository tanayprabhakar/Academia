def inlist(numberlist, target):
    return target in numberlist
lista = [1, 3, 5, 7, 9]
target = 10
result = inlist(lista, target)
print("List of numbers:", lista)
print(result,"that the",target,"is in the list.")