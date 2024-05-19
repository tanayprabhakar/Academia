class Student:
    def __init__(self, n):
        self.n = n
        self.students = []
        for _ in range(n):
            name = input("Enter student name: ")
            roll = input("Enter roll number: ")
            marks = [float(input("Enter marks for Subject", i+1,": ")) for i in range(3)]
            self.students.append({'name': name, 'roll': roll, 'marks': marks})

    def Display(self):
        print("\nStudent Details:")
        for student in self.students:
            print("Name:", student['name'], "Roll:", student['roll'], "Marks:", student['marks'])

    def Marks_percentage(self):
        print("\nMarks Percentage:")
        for student in self.students:
            total_marks = sum(student['marks'])
            percentage = (total_marks / 300) * 100
            print(student['name'],":" ,percentage,"%")

    def result(self):
        print("\nResult:")
        for student in self.students:
            if all(mark >= 40 for mark in student['marks']):
                print(student['name'],": Pass")
            else:
                print(student['name'],": Fail")

    def Class_average(self):
        total_marks = sum(sum(student['marks']) for student in self.students)
        average = total_marks / (self.n * 3)
        print("\nClass Average:", average)
n = int(input("Enter the number of students: "))
students_info = Student(n)
students_info.Display()
students_info.Marks_percentage()
students_info.result()
students_info.Class_average()
