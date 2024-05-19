name='Rohit Sharma'
Rollno='R17234512'
SapId=50005673
Sem=1
Course="B.Tech. CSE AI&ML"
sub1=float(input("Enter marks for PDS: "))
sub2=float(input("Enter marks for python: "))
sub3=float(input("Enter marks for Chemistry: "))
sub4=float(input("Enter marks for English: "))
sub5=float(input("Enter marks for Physics: "))
percent=(sub1+sub2+sub3+sub4+sub5)/5;
cgpa=percent/10
if(cgpa<3.5):
    grade='F'
elif(cgpa<5.0):
    grade='C+'
elif(cgpa<6.0):
    grade='B'
elif(cgpa<7.0):
    grade='B+'
elif(cgpa<8.0):
    grade='A'
elif(cgpa<9.0):
    grade='A+'
else:
    grade='O'
print("Sample Gradesheet")
print("Name:",name)
print("Roll no:",Rollno,"\tSAPID:",SapId)
print("Sem:",Sem,"\tCourse:",Course)
print("Subject name:\tMarks")
print("PDS:\t",sub1)
print("Python:\t",sub2)
print("Chemistry:\t",sub3)
print("Physics:\t",sub5)
print("English:\t",sub4)
print("Percentage:",percent,"%")
print("CGPA:",cgpa)
print("Grade:",grade)
