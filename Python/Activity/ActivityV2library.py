def sum(a,b):
    return a+b
def average(*num):
    n=len(num)
    sum=0
    for i in range(n):
        sum+=num[i]
    return sum/n
def dif(a,b):
    if(a-b>0):
        return a-b
    else:
        return b-a
def product(a,b):
    return a*b
def division(a,b):
    return a/b
