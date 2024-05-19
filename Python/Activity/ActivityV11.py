def bubblesort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

n = int(input("Enter the number of elements: "))
arr = []

for i in range(n):
    element = input("Enter element " + str(i+1) + ": ")
    arr.append(element)

sorted_arr = bubblesort(arr)
print("Original list:", arr)
print("Sorted list using Bubble Sort:", sorted_arr)
