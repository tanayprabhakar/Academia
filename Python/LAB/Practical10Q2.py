import numpy as np
arr = np.array([[1, 2, 3],
                [4, 5, 6],
                [7, 8, 9]])
sumrow = np.sum(arr, axis=1)
sumcolumn = np.sum(arr, axis=0)
unique = np.unique(arr)
sortedarr = np.sort(unique)
secondmax = sortedarr[-2]
print("Array:")
print(arr)
print("Sum of each row:", sumrow)
print("Sum of each column:", sumcolumn)
print("Second maximum element:", secondmax)
