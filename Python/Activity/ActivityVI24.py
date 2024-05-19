greaterthan5 = lambda numbers: list(map(lambda x: x, filter(lambda y: y > 5, numbers)))
print(greaterthan5([1, 3, 6, 8, 2, 10]))