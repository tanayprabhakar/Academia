class Student:
    def __init__(self, name, SAPID):
        self.name = name
        self.SAPID = SAPID
        self.grades = []
    def grade(self, grade):
        self.grades.append(grade)
    def avggrade(self):
        if not self.grades:
            return 0
        return sum(self.grades) / len(self.grades)
    def printgrade(self):
        print("Student:", self.name, "(ID:",self.SAPID,")")
        print("Grades:")
        for i, grade in enumerate(self.grades, start=1):
            print(i, grade)
        print("Average Grade:", self.avggrade())
student = Student("Tanay", "500119182")
student.grade(85)
student.grade(90)
student.grade(78)
student.printgrade()