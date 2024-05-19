filepath = 'ActivityVII13.txt'
with open(filepath, 'r') as file:
    content = file.read()
    words = [word.lower() for word in content.split()]
sortedwords = sorted(words)
print("Sorted words in alphabetical order:")
for word in sortedwords:
    print(word)
