def max_diff(*args):
    l=len(args)
    args=list(args)
    args.sort()
    return abs(args[l-1]-args[0])
print(max_diff(4, 5, 2, 9))