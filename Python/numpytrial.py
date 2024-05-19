import numpy as np
a=[1,2,2,3,45,64,7]
array=np.array(a)
print(array)
b=[[1,2,3],[4,5,6]]
array1=np.array(b)
print(array1)
print(type(array1))
print(array1.shape)
print(array1.itemsize)
print(array1.size)
print(array1.dtype)
print(array1.ndim)
print(np.empty([3,2],dtype=int))
ar=np.arange(5)
print(ar)