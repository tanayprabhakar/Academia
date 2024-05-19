class Student:
    def __init__(self, name, sapid, marks):
        self.name = name
        self.sapid = sapid
        self.marks = marks

    def displaydetails(self):
        print("Name:", self.name)
        print("SAP ID:", self.sapid)
        print("Marks (Physics, Chemistry, Maths):", self.marks)

students = []
for i in range(3):
    name = input("Enter student's name: ")
    sapid = input("Enter student's SAP ID: ")
    phymarks = float(input("Enter Physics marks: "))
    chemmarks = float(input("Enter Chemistry marks: "))
    mathsmarks = float(input("Enter Maths marks: "))
  
    marks = {'Physics': phymarks, 'Chemistry': chemmarks, 'Maths': mathsmarks}
    student = Student(name, sapid, marks)
    students.append(student)

for student in students:
    student.displaydetails()
    print() 
