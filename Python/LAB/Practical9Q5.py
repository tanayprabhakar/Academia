class Point:
    def __init__(self, x=0, y=0):
        self.x = x
        self.y = y

    def __add__(self, other):
        if isinstance(other, Point):
            return Point(self.x + other.x, self.y + other.y)
        else:
            raise TypeError("Unsupported operand type for +: Point and {}".format(type(other)))

    def __str__(self):
        return "Point(x={}, y={})".format(self.x, self.y)
P1 = Point(10, 20)
P2 = Point(12, 15)
P3 = P1 + P2
print("P1:", P1)
print("P2:", P2)
print("P3:", P3)
