def revstr(inpstr):
    try:
        if type(inpstr)!=str:
            raise TypeError
        return inpstr[::-1]
    except TypeError:
        print("Input must be a string")
        return None
inpstring = "hello"
result = revstr(inpstring)
print(result)
nonstrinp = 123
resnonstr = revstr(nonstrinp)
print(resnonstr)
