product = lambda numbers:  1 if not numbers else numbers[0] * product(numbers[1:])
print(product([1,2,3,4]))