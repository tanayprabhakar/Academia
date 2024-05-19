
def sum(*numbers):
    n=len(numbers)
    sum=0
    for i in range(n):
        sum+=numbers[i]
    return sum