class Car:
    def __init__(self,model,colour):
        self.model=model
        self.colour=colour
    def displayCar(self):
        print("Car:"+self.model+"-"+self.colour)
car1=Car("Tesla","Red")
car1.displayCar()
car2=Car("Ford","Green")
car2.displayCar()
car3=Car("Ford","Green")
car3.colour="Black"
car3.displayCar()

class Rectangle:
    def __init__(self,width,height,colour):
        self.width=width
        self.height=height
        self.colour=colour
    def area(self):
        print("width=",self.width)
        print("height=",self.height)
        print("colour=",self.colour)
        print("area=",self.height*self.width)
Rectangle1=Rectangle(5,3,(2,200,2))
Rectangle1.area()