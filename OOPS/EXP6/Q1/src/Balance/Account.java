package Balance;

public class Account {
    private double balance = 1000.0;
    
    public void Display_Balance() {
        System.out.println("Current Balance: Rs." + balance);
    }
    
    // Constructor to set custom balance
    public Account(double initialBalance) {
        this.balance = initialBalance;
    }
    
    // Default constructor
    public Account() {}
}