import java.util.*;

public class EmployeeManager {
    public static void main(String[] args) {
        new EmployeeManager().run();
    }

    public void run() {
        ArrayList<Employee> employees = new ArrayList<>();

        employees.add(new Employee("Alice", 101, 50000));
        employees.add(new Employee("Bob", 102, 60000));
        employees.add(new Employee("Charlie", 103, 55000));

        for (Employee emp : employees) {
            if (emp.getId() == 102) {
                emp.setSalary(65000);
                break;
            }
        }

        Iterator<Employee> iterator = employees.iterator();
        while (iterator.hasNext()) {
            if (iterator.next().getId() == 101) {
                iterator.remove();
                break;
            }
        }

        System.out.println("Remaining Employees:");
        for (Employee emp : employees) {
            System.out.println(emp);
        }
    }
}

class Employee {
    private String name;
    private int id;
    private double salary;

    public Employee(String name, int id, double salary) {
        this.name = name;
        this.id = id;
        this.salary = salary;
    }

    public int getId() {
        return id;
    }

    public void setSalary(double salary) {
        this.salary = salary;
    }

    public String toString() {
        return "Name: " + name + ", ID: " + id + ", Salary: " + salary;
    }
}
