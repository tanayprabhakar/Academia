class Vehicle:
    def __init__(self, make, model, year):
        self.make = make
        self.model = model
        self.year = year
    def get_info(self):
        return self.year, self.make, self.model
class Car(Vehicle):
    def __init__(self, make, model, year, num_doors):
        super().__init__(make, model, year)
        self.num_doors = num_doors
    def get_doors(self):
        return self.num_doors
vehicle = Vehicle("Toyota", "Camry", 2020)
print(vehicle.get_info())
car = Car("Honda", "Accord", 2018, 4)
print(car.get_info()) 
print("Number of doors:", car.get_doors())
