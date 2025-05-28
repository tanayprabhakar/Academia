//QUESTION 3
class Calculator {
    public int add(int a, int b) {
        return a + b;
    }
    
    public double add(double a, double b) {
        return a + b;
    }
    
    public int add(int a, int b, int c) {
        return a + b + c;
    }
}

//QUESTION 4
class Student {
    static String universityName = "UPES";
    String studentName;
    
    public Student(String studentName) {
        this.studentName = studentName;
    }
    
    static void displayUniversityName() {
        System.out.println("University Name: " + universityName);
    }
    
    public void displayStudent() {
        System.out.println("Student: " + studentName);
    }
}

// QUESTION 5
class Course {
    String courseName;
    String courseCode;
    
    public Course(String courseName, String courseCode) {
        this.courseName = courseName;
        this.courseCode = courseCode;
    }
    
    public void displayCourse() {
        System.out.println("Course Name: " + courseName + ", Course Code: " + courseCode);
    }
}

// Additional: Question 6
class Employee {
    static int totalEmployees = 0;
    private double salary;
    int employeeID;
    String name;
    String department;
    
    public Employee() {
        this.employeeID = ++totalEmployees;
        this.name = "Default Employee";
        this.department = "General";
        this.salary = 30000;
    }
    
    public Employee(String name, String department, double salary) {
        this.employeeID = ++totalEmployees;
        this.name = name;
        this.department = department;
        this.salary = salary;
    }
    
    public double getSalary() {
        return salary;
    }
    
    public void displayEmployeeInfo() {
        System.out.println("ID: " + employeeID + ", Name: " + name + ", Department: " + department + ", Salary: " + salary);
    }
    
    static void displayTotalEmployees() {
        System.out.println("Total Employees: " + totalEmployees);
    }
}

// Main Class to Demonstrate All
public class Experiment4 {
    public static void main(String[] args) {

        // Calculator demo
        Calculator calc = new Calculator();
        System.out.println("Addition of 2 integers: " + calc.add(2, 3));
        System.out.println("Addition of 2 doubles: " + calc.add(2.5, 3.5));
        System.out.println("Addition of 3 integers: " + calc.add(1, 2, 3));

        // University class demo
        Student.displayUniversityName();
        Student u1 = new Student("Tanay");
        Student u2 = new Student("Jahnavi");
        u1.displayStudent();
        u2.displayStudent();

        // Course class demo
        Course course = new Course("OOPS", "CSDS101");
        course.displayCourse();

        // Employee Management System demo
        Employee e1 = new Employee();
        Employee e2 = new Employee("Hritvik", "HR", 45000);
        e1.displayEmployeeInfo();
        e2.displayEmployeeInfo();
        Employee.displayTotalEmployees();
    }
}
