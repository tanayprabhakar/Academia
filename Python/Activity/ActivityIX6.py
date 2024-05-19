class Restaurant:
    def __init__(self, name, cuisine, seats):
        self.name = name
        self.cuisine = cuisine
        self.seats = seats
    def getname(self):
        return self.name
    def setname(self, newname):
        self.name = newname
    def getcuisine(self):
        return self.cuisine
    def setcuisine(self, newcuisine):
        self.cuisine = newcuisine
    def getseats(self):
        return self.seats
    def setseats(self, newseats):
        self.seats = newseats
    def printsummary(self):
        print("Restaurant Name:", self.name)
        print("Cuisine Type:",self.cuisine)
        print("Number of Seats:",self.seats)
restaurant = Restaurant("La Pinoz", "Italian", 50)
restaurant.printsummary()
restaurant.setname("BigBites")
restaurant.setcuisine("Indian")
restaurant.setseats(30)
restaurant.printsummary()