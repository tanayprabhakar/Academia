import java.io.*;
import java.util.Scanner;

public class StudentWriter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Name: ");
        String name = scanner.nextLine();
        System.out.print("Roll Number: ");
        String roll = scanner.nextLine();
        System.out.print("Grade: ");
        String grade = scanner.nextLine();

        try (FileWriter writer = new FileWriter("student.txt", true)) {
            writer.write("Name: " + name + ", Roll Number: " + roll + ", Grade: " + grade + "\n");
        } catch (IOException e) {
            System.out.println("Error writing file: " + e.getMessage());
        }
        scanner.close();
    }
}