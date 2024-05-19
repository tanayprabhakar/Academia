with open('names.txt', 'r') as file:
    names = file.readlines()
names = [name.strip() for name in names]
countnames = len(names)
vowelnames=[]
for name in names:
    if name[0].lower() in 'aeiou':
        vowelnames.append(name)
countvowelnames = len(vowelnames)
longestname = max(names, key=len)
print("Total names:", countnames)
print("Names starting with a vowel:",countvowelnames)
print("Longest name:",longestname)