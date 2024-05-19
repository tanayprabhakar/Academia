import string
a='hello'
a[2]='w'
print(len(a))
print(dir(a))
print(type(a))
b=a+'world!'
print(b)
print(ord(a[1]))
print(chr(65))
print(a.capitalize())
c=a.join(b)
print(c)
print(a.__add__(b))
