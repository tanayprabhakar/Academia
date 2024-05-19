class BankAccount:
    def __init__(self, account_number, initial_balance=0):
        self.account_number = account_number
        self.balance = initial_balance

    def deposit(self, amount):
        self.balance += amount
        return self.balance

    def withdraw(self, amount):
        if amount > self.balance:
            print("Insufficient funds!")
        else:
            self.balance -= amount
        return self.balance
class SavingsAccount(BankAccount):
    def __init__(self, account_number, interest_rate, initial_balance=0):
        super().__init__(account_number, initial_balance)
        self.interest_rate = interest_rate

    def add_interest(self):
        interest_amount = self.balance * self.interest_rate
        self.balance += interest_amount
        return self.balance
bank_account = BankAccount("123456")
print("Bank Account Balance:", bank_account.balance)
bank_account.deposit(1000)
print("After deposit:", bank_account.balance)
bank_account.withdraw(500)
print("After withdrawal:", bank_account.balance)
savings_account = SavingsAccount("789012", 0.05)
print("\nSavings Account Balance:", savings_account.balance)
savings_account.deposit(2000)
print("After deposit:", savings_account.balance)
savings_account.add_interest()
print("After adding interest:", savings_account.balance)
