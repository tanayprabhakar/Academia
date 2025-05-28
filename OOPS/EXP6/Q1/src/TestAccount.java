import Balance.Account;

public class TestAccount {
    public static void main(String[] args) {
        Account myAccount = new Account();
        myAccount.Display_Balance();
        
        Account customAccount = new Account(2500.0);
        customAccount.Display_Balance();
    }
}