def longstring(inplist):
    try:
        if len(inplist) == 0:
            raise IndexError
        for string in inplist:
            if len(string) > 10:
                return string
        return None
    except IndexError:
        print("Input list is empty")
        return None
strlist = ["short", "medium", "this string is longer than 10 characters"]
result = longstring(strlist)
print(result)
emptlist = []
emptrslt = longstring(emptlist)
print(emptrslt)