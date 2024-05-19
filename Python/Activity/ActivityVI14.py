under18 = lambda people: [person['name'] for person in people if person.get('age', 0) < 18]
print(under18([
    {"name": "Tanay", "age": 14},
    {"name": "Sangam", "age": 18},
    {"name": "Harshit", "age": 20},
    {"name": "Jahnavi", "age": 18}
]))
