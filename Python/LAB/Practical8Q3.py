with open('city.txt', 'r') as file:
    citydata = file.readlines()
print("Details of all cities:")
for line in citydata:
    cityinfo = line.split()
    cityname = cityinfo[0]
    population = float(cityinfo[1])
    area = float(cityinfo[2])
    print("City:",cityname,"Population:", population, "Lakhs, Area:",area, "sq KM")
print("City names with population more than 10 Lakhs:")
for line in citydata:
    cityinfo = line.split()
    cityname = cityinfo[0]
    population = float(cityinfo[1])
    if population > 10:
        print(cityname)
totalarea = sum(float(cityinfo[2]) for cityinfo in [line.split() for line in citydata])
print("Sum of areas of all cities:",totalarea," sq KM")
