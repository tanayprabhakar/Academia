import pickle
listvalues=[1,"geetika",'f',26]
fileobject=open("mybinary.dat","wb")
pickle.dump(listvalues,fileobject)
fileobject.close()
print("The data stored are:")
fileobject=open("mybinary.dat","rb")
objectvar=pickle.load(fileobject)
fileobject.close()
print(objectvar)