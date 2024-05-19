remove = lambda string: ''.join([char for char in string.lower() if char not in 'aeiou'])
print(remove("hello"))