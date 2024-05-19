def findlargestNo(lista):
    largestNo = lista[0]
    for number in lista:
        if number > largestNo:
            largestNo = number
    return largestNo
lista = [10, 5, 8, 20, 15]
largestNo = findlargestNo(lista)
print("List of numbers:", lista)
print("Largest number in the list:", largestNo)
