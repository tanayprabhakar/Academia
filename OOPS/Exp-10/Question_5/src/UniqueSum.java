import java.util.*;

public class UniqueSum {
    public static void main(String[] args) {
        new UniqueSum().run();
    }

    public void run() {
        ArrayList<Integer> numbers = new ArrayList<>();
        numbers.add(3);
        numbers.add(5);
        numbers.add(3);
        numbers.add(8);
        numbers.add(2);
        numbers.add(5);

        HashSet<Integer> uniqueNumbers = new HashSet<>(numbers);

        int sum = 0;
        for (int num : uniqueNumbers) {
            sum += num;
        }

        System.out.println("Unique values: " + uniqueNumbers);
        System.out.println("Sum: " + sum);
    }
}
