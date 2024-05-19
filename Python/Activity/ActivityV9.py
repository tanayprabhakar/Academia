
def multiply(x, y):
   return x * y
def addingfuctionasargs(func, x, y):
   return func(x, y)

result = addingfuctionasargs(multiply, 3, 4)
print(result)