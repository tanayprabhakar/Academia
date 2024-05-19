capitalize = lambda s: ''.join([c.upper() if i % 2 != 0 else c for i, c in enumerate(s)])
print(capitalize('hello world'))