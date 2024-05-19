volume = lambda r, h: (1/3) * 3.14 * (r**2) * h
radius = float(input("Enter the radius of the cone: "))
height = float(input("Enter the height of the cone: "))
result = volume(radius, height)
print("Volume of the cone:", result)