def cubesum(a):
    sum=0
    for i in range(1,a):
        sum+=i**3
    return sum
print(cubesum(5))