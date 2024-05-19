with open('numbers.txt', 'r') as file:
    numbers = [int(line.strip()) for line in file]
maxnum = max(numbers)
average = sum(numbers) / len(numbers)
greater100 = sum(1 for num in numbers if num > 100)
print("Maximum number:", maxnum)
print("Average of all numbers:",average)
print("Count of numbers greater than 100:",greater100)