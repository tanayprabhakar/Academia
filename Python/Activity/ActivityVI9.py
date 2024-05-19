def sort_by_key(*dict):
    combined = {k: v for d in dict for k, v in d.items()}
    sdict = dict(sorted(combined.items(), key=lambda x: x[0]))
    return [sdict.copy()]
dict1 = {'c': 3, 'a': 1, 'b': 2}
dict2 = {'d': 4, 'b': 2, 'a': 1}
dict3 = {'e': 5, 'c': 3, 'd': 4}
sdict = sort_by_key(dict1, dict2, dict3)
print(sdict)