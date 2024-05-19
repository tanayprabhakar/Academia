class Circle:
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return 3.14159 * self.radius ** 2

    def circumference(self):
        return 2 * 3.14159 * self.radius
radius = 5
circle = Circle(radius)
print("Radius:", circle.radius)
print("Area:", circle.area())
print("Circumference:", circle.circumference())
