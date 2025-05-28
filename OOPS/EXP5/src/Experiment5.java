// Question 1
class SuperClass {
    private int privateVar = 10;
    
    public int getPrivateVar() {
        return privateVar;
    }
}

class SubClass extends SuperClass {
    void display() {
        // System.out.println(privateVar); 
        System.out.println("Cannot access private variable directly");
    }
}

// Question 2
class Player {
    String name;
    int age;
    String position;

    public Player(String name, int age, String position) {
        this.name = name;
        this.age = age;
        this.position = position;
    }

    void play() {
        System.out.println(name + " is playing in " + position + " position.");
    }
}

class Cricket_Player extends Player {
    public Cricket_Player(String name, int age, String position) {
        super(name, age, position);
    }
}

class Football_Player extends Player {
    public Football_Player(String name, int age, String position) {
        super(name, age, position);
    }
}

class Hockey_Player extends Player {
    public Hockey_Player(String name, int age, String position) {
        super(name, age, position);
    }
}

// Question 3
class Worker {
    String name;
    double salaryRate;

    public Worker(String name, double salaryRate) {
        this.name = name;
        this.salaryRate = salaryRate;
    }

    double computePay(int hours) {
        return salaryRate * hours;
    }
}

class DailyWorker extends Worker {
    public DailyWorker(String name, double salaryRate) {
        super(name, salaryRate);
    }

    double computePay(int days) {
        return super.computePay(days * 8);
    }
}

class SalariedWorker extends Worker {
    public SalariedWorker(String name, double salaryRate) {
        super(name, salaryRate);
    }

    double computePay(int hours) {
        return super.computePay(40);
    }
}

// Question 4
class TrunkCall {
    double duration;

    public TrunkCall(double duration) {
        this.duration = duration;
    }

    double calculateCharge() {
        return duration * 1.0;
    }
}

class OrdinaryCall extends TrunkCall {
    public OrdinaryCall(double duration) {
        super(duration);
    }

    double calculateCharge() {
        return duration * 2.0;
    }
}

class UrgentCall extends TrunkCall {
    public UrgentCall(double duration) {
        super(duration);
    }

    double calculateCharge() {
        return duration * 3.5;
    }
}

class LightningCall extends TrunkCall {
    public LightningCall(double duration) {
        super(duration);
    }

    double calculateCharge() {
        return duration * 5.0;
    }
}

// Question 5
class Employee {
    String name;
    int empid;
    double salary;

    public Employee(String name, int empid, double salary) {
        this.name = name;
        this.empid = empid;
        this.salary = salary;
    }

    void increaseSalary(double percentage) {
        salary += salary * (percentage / 100);
    }
}

class Manager extends Employee {
    String department;

    public Manager(String name, int empid, double salary, String department) {
        super(name, empid, salary);
        this.department = department;
    }
}

//Question 6
class Vehicle {
    String brand, model;
    double price;

    public Vehicle(String brand, String model, double price) {
        this.brand = brand;
        this.model = model;
        this.price = price;
    }

    void displayDetails() {
        System.out.println("Brand: " + brand + ", Model: " + model + ", Price: " + price);
    }
}

class Car extends Vehicle {
    int seatingCapacity;
    String fuelType;

    public Car(String brand, String model, double price, int seatingCapacity, String fuelType) {
        super(brand, model, price);
        this.seatingCapacity = seatingCapacity;
        this.fuelType = fuelType;
    }
}

class ElectricCar extends Car {
    int batteryCapacity, chargingTime;

    public ElectricCar(String brand, String model, double price, int seatingCapacity, String fuelType, int batteryCapacity, int chargingTime) {
        super(brand, model, price, seatingCapacity, fuelType);
        this.batteryCapacity = batteryCapacity;
        this.chargingTime = chargingTime;
    }
}

class Motorcycle extends Vehicle {
    int engineCapacity;
    String type;

    public Motorcycle(String brand, String model, double price, int engineCapacity, String type) {
        super(brand, model, price);
        this.engineCapacity = engineCapacity;
        this.type = type;
    }
}

// Question 7
class Person {
    String name;
    int age;
    String address;
}

class Staff extends Person {
    int staffId;
    String department;
}

class Professor extends Staff {
    String specialization;
    void conductLecture() {
        System.out.println(name + " is conducting a lecture in " + specialization);
    }
}

class Student extends Person {
    int studentId;
    String course;
}

class GraduateStudent extends Student {
    String researchTopic;
    void submitThesis() {
        System.out.println(name + " is submitting thesis on " + researchTopic);
    }
}
public class Experiment5 {
    public static void main(String[] args) {
        // 
        SubClass obj = new SubClass();
        obj.display();

        // Question 2
        Cricket_Player cricketer = new Cricket_Player("Virat", 34, "Batsman");
        cricketer.play();

        Football_Player footballer = new Football_Player("Sanya Nehwal", 32, "ACE");
        footballer.play();

        // Question 3
        DailyWorker dWorker = new DailyWorker("Tanay", 50);
        System.out.println("Daily Worker Pay: " + dWorker.computePay(5));

        SalariedWorker sWorker = new SalariedWorker("Jahnavi", 100);
        System.out.println("Salaried Worker Pay: " + sWorker.computePay(40));

        // Question 4
        TrunkCall call = new OrdinaryCall(5);
        System.out.println("Ordinary Call Charge: " + call.calculateCharge());

        call = new UrgentCall(3);
        System.out.println("Urgent Call Charge: " + call.calculateCharge());

        call = new LightningCall(2);
        System.out.println("Lightning Call Charge: " + call.calculateCharge());

        // Question 5
        Manager manager = new Manager("Steve", 101, 50000, "IT");
        manager.increaseSalary(10);
        System.out.println("Manager's New Salary: " + manager.salary);

        // Question 6
        ElectricCar tesla = new ElectricCar("Tesla", "Cybertruck", 79999, 5, "Electric", 100, 8);
        tesla.displayDetails();

        Motorcycle harley = new Motorcycle("Harley-Davidson", "Sportster", 12000, 1200, "Cruiser");
        harley.displayDetails();

        // Question 7
        Professor prof = new Professor();
        prof.name = "Dr. Neeraj Chugh";
        prof.specialization = "Computer Science";
        prof.conductLecture();

        GraduateStudent grad = new GraduateStudent();
        grad.name = "Dr. Rajesh Bhatt";
        grad.researchTopic = "Artificial Intelligence";
        grad.submitThesis();
    }
}
