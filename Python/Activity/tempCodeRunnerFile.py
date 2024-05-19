gmailcheck = lambda users: list(filter(lambda user: '@gmail.com' in user.get('email', '').lower(), users))
users = [
    {'name': 'Tanay', 'email': 'tanay@gmail.com'},
    {'name': 'Sangam', 'email': 'sangam@rediff.com'}, 
    {'name': 'Harshit', 'email': 'harshit.123@gmail.com'},
    {'name': 'Jahnvi', 'email': 'jahnvi@gmail.com'},
]
print(gmailcheck(users))