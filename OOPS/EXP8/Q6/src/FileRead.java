import java.io.*;
import java.util.Scanner;
public class FileRead {
    public static void readFile(String fileName) throws FileNotFoundException {
        BufferedReader reader = new BufferedReader(new FileReader(fileName));
        try {
            String line;
            while ((line = reader.readLine()) != null) {
                System.out.println(line);
            }
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            try { reader.close(); } catch (IOException e) { /* Ignored */ }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter filename: ");
        String name = scanner.nextLine();

        try {
            readFile(name);
        } catch (FileNotFoundException e) {
            System.out.println("File not found: " + name);
        } finally {
            System.out.println("File operation attempted.");
        }
        scanner.close();
    }
}