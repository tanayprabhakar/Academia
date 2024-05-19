with open("ActivityVII9.txt", 'r') as file:
    lines = file.readlines()
    changedlines = [line.strip() for line in lines]
with open("ActivityVII9.txt", 'w') as file:
    file.writelines(changedlines)
