class Student:
    def __init__(self, n):
        self.n = n
        self.students = []
        for _ in range(n):
            name = input("Enter student name: ")
            roll = input("Enter roll number: ")
            marks = [float(input(f"Enter marks for Subject {i+1}: ")) for i in range(3)]
            self.students.append({'name': name, 'roll': roll, 'marks': marks})

    def display(self):
        print("\nStudent Details:")
        for student in self.students:
            print(f"Name: {student['name']}, Roll: {student['roll']}, Marks: {student['marks']}")

    def find_marks_percentage(self):
        print("\nMarks Percentage:")
        for student in self.students:
            total_marks = sum(student['marks'])
            percentage = (total_marks / 300) * 100
            print(f"{student['name']}: {percentage:.2f}%")

    def display_result(self):
        print("\nResult:")
        for student in self.students:
            if all(mark >= 40 for mark in student['marks']):
                print(f"{student['name']}: Pass")
            else:
                print(f"{student['name']}: Fail")

    def find_class_average(self):
        total_marks = sum(sum(student['marks']) for student in self.students)
        average = total_marks / (self.n * 3)
        print(f"\nClass Average: {average:.2f}")


# Example Usage
n = int(input("Enter the number of students: "))
students_info = Student(n)
students_info.display()
students_info.find_marks_percentage()
students_info.display_result()
students_info.find_class_average()
