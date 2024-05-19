import string
with open("ActivityVII14.txt", 'r') as file:
    content = file.read()
    stringdata = ''.join(char for char in content if char not in string.punctuation)
print("Text without punctuation marks:")
print(stringdata)
