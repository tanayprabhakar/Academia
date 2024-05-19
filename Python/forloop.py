L=['Egg','Bacon','Ham']
for item in L:
    item+='s'
    print(item)
print(L)

for x in range(len(L)):
    L[x]+='s'
    print(L[x])
print (L)

for x in range(0,100,10):
    print(x)

S1='Hello'
for x in S1:
    print(x)

T=(1,'a',45,23.45,'String')
for x in T: print(x)

mydict={'a':'1','b':'2','c':'3'}
for key in mydict:
    print(key,'==>',mydict[key])

for (key,value) in mydict.items():
    print(key,'==>',value)