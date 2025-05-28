public class BankAccount {
    double balance;
    
    public BankAccount(double initialBalance) {
        if (initialBalance >= 0) {
            this.balance = initialBalance;
        } else {
            this.balance = 0;
            System.out.println("Initial balance cannot be negative. Set to 0.");
        }
    }
    
    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            System.out.println("Deposited: $" + amount);
            checkBalance(); 
        } else {
            System.out.println("Deposit amount must be positive");
        }
    }
    
    public void withdraw(double amount) {
        if (amount > 0) {
            if (balance >= amount) {
                balance -= amount;
                System.out.println("Withdrawn: $" + amount);
                checkBalance(); 
            } else {
                System.out.println("Insufficient funds");
            }
        } else {
            System.out.println("Withdrawal amount must be positive");
        }
    }
    
    public void checkBalance() {
        System.out.println("Current Balance: $" + balance);
    }
    
    public static void main(String[] args) {

        BankAccount account = new BankAccount(1000);
        System.out.println("Initial account status:");
        account.checkBalance();
        
        System.out.println("Testing deposit:");
        account.deposit(500);
        
        System.out.println("Testing withdraw:");
        account.withdraw(200);
        
        System.out.println("Testing checkBalance:");
        account.checkBalance();
        
        System.out.println("Testing invalid operations:");
        account.deposit(-100);  
        account.withdraw(2000); 
        
        }
}