import random
length = int(input("Enter desired password length: "))
ucase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
lcase = "abcdefghijklmnopqrstuvwxyz"
numbers = "0123456789"
special = "!@#$%^&*()"
password = ""

for i in range(length):
    set = random.choice([ucase, lcase, numbers, special])
    index = random.randint(0, len(set) - 1) 
    password += set[index]
print("Generated password:", password)
userpassword = input("Enter a password to validate: ")
hasuppercase = False
haslowercase = False
hasnumber = False
hasspecial = False
for char in userpassword:
    if char.isupper():
        hasuppercase = True
    elif char.islower():
        haslowercase = True
    elif char.isdigit():
        hasnumber = True
    else:
        hasspecial = True
if (hasuppercase and haslowercase and hasnumber and hasspecial):
    print("Password is valid")
else:
    print("Password is invalid. Must contain uppercase, lowercase, number, and special characters.")
