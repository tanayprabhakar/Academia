def productinteger(inplist):
    try:
        if 0 in inplist:
            raise ZeroDivisionError("Input list contains a zero")
        product = 1
        for num in inplist:
            product *= num       
        return product
    except ZeroDivisionError as e:
        print(e)
        return None
numberlist = [1, 2, 3, 4, 5]
result = productinteger(numberlist)
print(result)

numberlistzero = [1, 2, 3, 0, 4, 5]
resultwithzero = productinteger(numberlistzero)
print(resultwithzero)