n = int(input("Enter the number of fruits for set s1: "))
s1 = set()
print("Enter the fruits for set s1:")
for i in range(n):
    fruit = input()
    s1.add(fruit)
n = int(input("Enter the number of fruits for set s2: "))
s2 = set()
print("Enter the fruits for set s2:")
for i in range(n):
    fruit = input()
    s2.add(fruit)
fruitintersection = s1.intersection(s2)
print("Fruits in both sets s1 and s2:", fruitintersection)
s1differences2 = s1.difference(s2)
print("Fruits only in s1 but not in s2:", s1differences2)
totalfruits = len(s1) + len(s2)
print("Count of all fruits from s1 and s2:", totalfruits)