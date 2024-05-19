with open("ActivityVII16.txt", 'r') as file:
    content = file.read()
replaceword = input("Enter the word to be replaced: ")
newword = input("Enter the new word: ")
newcontent = content.replace(replaceword, newword)
with open("ActivityVII16.txt", 'w') as file:
    file.write(newcontent)