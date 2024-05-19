def sum(n):
    sum=0
    for i in range(1,n+1):
        sum+=i**2
    return sum
n = 5
result = sum(n)
print("Sum of squares of the first",n,"positive integers:", result)
