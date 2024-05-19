def calculate100(age):
    try:
        age = int(age)
        if age <= 0:
            raise ValueError
        currentyear = 2024
        year100 = currentyear + (100 - age)
        return year100
    except ValueError:
        print("Age must be a positive integer")
        return None
userage = input("Enter your age: ")
year100 = calculate100(userage)
if year100 is not None:
    print("You will turn 100 in the year",year100)
