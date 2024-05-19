def count(n):
    if n > 0:
        count(n - 1)
        print(n)
count(6)
