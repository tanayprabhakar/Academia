import java.util.*;

public class UniqueNames {
    public static void main(String[] args) {
        new UniqueNames().run();
    }

    public void run() {
        String[] namesArray = {"Aman", "Varchasv", "Divyansh", "Varchasv", "Aman"};
        HashSet<String> nameSet = new HashSet<>();

        for (String name : namesArray) {
            nameSet.add(name);
        }

        String searchName = "Divyansh";
        if (nameSet.contains(searchName)) {
            System.out.println(searchName + " exists in the set");
        } else {
            System.out.println(searchName + " does not exist in the set");
        }

        System.out.println("Unique Names:");
        for (String name : nameSet) {
            System.out.println(name);
        }
    }
}
