def calculate_average(*dict):
    total = 0
    count = 0
    for d in dict:
        if 'score' in d:
            total += d['score']
            count += 1
    return total / count
dict1 = {'score': 876}
dict2 = {'score': 89}
result = calculate_average(dict1, dict2)
print(result)