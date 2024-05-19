class Person:
    def __init__(self, name, age, gender):
        self.name = name
        self.age = age
        self.gender = gender

    def info(self):
        return "Name:"+ self.name+ "Age:"+ str(self.age)+"Gender:" + self.gender
class Student(Person):
    def __init__(self, name, age, gender, major):
        super().__init__(name, age, gender)
        self.major = major

    def getmajor(self):
        
        return self.major
    
person1 = Person("Jahnavi", 19, "Female")
print(person1.info())

student1 = Student("Tanay", 20, "Male", "Computer Science")
print(student1.info())
print("Major:"+student1.getmajor())
