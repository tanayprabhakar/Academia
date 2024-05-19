def avg(*arg):
    l=len(arg)
    sum=0
    for i  in range(l):
        sum=sum+arg[i]
    return sum/l
print("The average of the input is",avg(1,2,3,4,4,21))