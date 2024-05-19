def outer(x):
    def inner(y):
        return y * 2
    
    result = x + inner(x)
    return result

result = outer(3)
print(result)
