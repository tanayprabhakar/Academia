dicti={"Tanay":"Patna","Tanvi":"Mumbai","Jahnavi":"Gaziabad","Sangam":"Delhi","Harshit":"Gaziabad"}
print("Name of all students is:")
for key in dicti.keys():
    print(key)
city=[]
for value in dicti.values():
    city.append(value)
city=set(city)
print("\nName of all city is:")
for value in city:
    print(value)
print("\nStudent Name and City of all students is:")
for key,value in dicti.items():
    print(key,":",value)
listcity=list(dicti.values())
dict2={}
print("\nNumber of students in each city is:")
for i in city:
    dict2[i]=listcity.count(i)
    print(i,":",dict2[i])