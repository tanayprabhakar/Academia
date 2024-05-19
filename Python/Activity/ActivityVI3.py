def intersection(*args):
    l=len(args)
    result = args[0]
    for i in range(l-1):
        result=list(set(result) & set(args[i+1]))
    return result
print(intersection([1,2,3],[3,5,6], [3,8,9]))
    