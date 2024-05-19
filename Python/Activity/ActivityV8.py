def out(x):
  def inner(y):
    return x + y
  return inner
add = out(5)
print(add(10)) 