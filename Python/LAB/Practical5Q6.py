sentence =input("Enter a string: ")
words = sentence.lower().split()
uniquewords = set(words)
count = len(uniquewords)
print("The number of unique words in the sentence is:", count)
