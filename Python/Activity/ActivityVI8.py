def count_values(*args):
    count = {}
    for i in args:
        count[i] = count.get(i,0) + 1
    return count

result = count_values(1, 2, 3, 1, 2, 3, 4, 5)
print(result)
