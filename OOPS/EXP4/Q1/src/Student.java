public class Student {
    String name;
    int age;
    static int totalStudents = 0;
    public Student() {
        this.name = "";
        this.age = 0;
        totalStudents++;
    }
    public Student(String name, int age) {
        this.name = name;
        this.age = age;
        totalStudents++;
    }
    public void displayDetails() {
        System.out.println("Name: " + this.name);
        System.out.println("Age: " + this.age);
    }
    
    public static int getTotalStudents() {
        return totalStudents;
    }
    
        public static void main(String[] args) {
        Student student1 = new Student();
        System.out.println("Student 1 (Default Constructor):");
        student1.displayDetails();
        
        System.out.println("Student 2 (Parameterized Constructor):");
        Student student2 = new Student("Tanay", 20);
        student2.displayDetails();
        
        System.out.println("Total number of students: " + Student.getTotalStudents());
    }
}