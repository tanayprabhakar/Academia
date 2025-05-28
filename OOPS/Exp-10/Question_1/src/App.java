import java.util.*;

public class App {
    public static void main(String[] args) {
        new App().run();
    }

    public void run() {
        Scanner scanner = new Scanner(System.in);
        ArrayList<Integer> numbers = new ArrayList<>();

        System.out.print("Enter the number of integers: ");
        int n = scanner.nextInt();

        System.out.println("Enter " + n + " integers:");
        for (int i = 0; i < n; i++) {
            numbers.add(scanner.nextInt()); // autoboxing
        }

        for (Integer num : numbers) {
            int value = num; // unboxing
            if (isPrime(value)) {
                System.out.println(value + " is a prime number");
            } else {
                System.out.println(value + " is not a prime number");
            }
        }
    }

    public boolean isPrime(int num) {
        if (num <= 1) return false;
        if (num == 2) return true;
        if (num % 2 == 0) return false;
        for (int i = 3; i <= Math.sqrt(num); i += 2) {
            if (num % i == 0) return false;
        }
        return true;
    }
}
