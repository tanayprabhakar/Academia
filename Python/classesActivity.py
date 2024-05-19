class Students:
    def __init__(self,name,program,batch,rollno,sapid,semester):
        self.name=name
        self.program=program
        self.batch=batch
        self.rollno=str(rollno)
        self.sapid=str(sapid)
        self.semester=semester
    def totextfile(self):
        file = open("Students.txt", 'w')
        file.writelines(self.name+"\n"+self.program+"\n"+self.batch+"\n"+self.rollno+"\n"+self.sapid+"\n"+self.semester)
        file.close()
