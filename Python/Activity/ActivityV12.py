def merge(list1, list2):
    combined_list = list1 + list2    
    unique_list = list(set(combined_list))
    return unique_list
list1 = [1, 2, 3, 4]
list2 = [3, 4, 5, 6]
merged = merge(list1, list2)
print("List 1:", list1)
print("List 2:", list2)
print("Merged and unique list:", merged)
