increase = lambda people: list(map(lambda person: {"name": person["name"], "age": person["age"] + 1}, people))
people = [
    {"name": "Tanay", "age": 18},
    {"name": "Jahnavi", "age": 17},
    {"name": "Harshit", "age": 19},
]
print(increase(people))