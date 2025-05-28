import java.util.*;

public class ProductInventory {
    public static void main(String[] args) {
        new ProductInventory().run();
    }

    public void run() {
        HashMap<Integer, Integer> inventory = new HashMap<>();

        inventory.put(1001, 50);
        inventory.put(1002, 30);
        inventory.put(1003, 20);

        inventory.put(1002, 45);

        inventory.remove(1001);

        System.out.println("Final Inventory:");
        for (Map.Entry<Integer, Integer> entry : inventory.entrySet()) {
            System.out.println("Product ID: " + entry.getKey() + ", Quantity: " + entry.getValue());
        }
    }
}
