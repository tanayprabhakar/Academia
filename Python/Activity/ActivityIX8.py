class Shape:
    def __init__(self, sides):
        self.sides = sides
        self.area = 0

    def info(self):
        return ("This shape has "+ str(self.sides)+ " sides and area "+ str(self.areacal)+".")

class Triangle(Shape):
    def __init__(self, base, height):
        Shape.__init__(self,sides=3)
        self.base = base
        self.height = height

    def calarea(self):
        self.areacal = 0.5 * self.base * self.height
        return self.areacal

triangle = Triangle(base=5, height=4)
triangle.calarea()
print(triangle.info())
