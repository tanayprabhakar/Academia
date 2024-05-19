def flatten(*args):
    result = []
    for lst in args:
        result.extend(lst)
    return result

list1 = [1, 2, 3]
list2 = [4, 5, 6]
list3 = [7, 8, 9]
print(flatten(list1, list2, list3))
