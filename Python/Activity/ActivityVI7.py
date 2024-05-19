def combine_dicts(*args):
    result = {}
    for i in args:
        result.update(i)
    return result
dict1 = {'hello': 27, 'i': 12}
dict2 = {'am': 213, 'tanay': 213876}
combined_dict = combine_dicts(dict1, dict2)
print(combined_dict)
