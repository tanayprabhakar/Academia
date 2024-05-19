from myfunctions import *
import math
print(add(4,2))
print(dif(3,1))
print(avg(3,2))

def underroot(x):
    z=math.sqrt(x)
    return z,-z
y=underroot(2)
print(y)