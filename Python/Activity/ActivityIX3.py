class BankAccount:
    def __init__(self, name, acnumber, initialbalance=0):
        self.name = name
        self.acnumber = acnumber
        self.balance = initialbalance

    def deposit(self, amount):
        self.balance += amount
        print("Deposited $",amount,". New balance: $",self.balance,sep='')

    def withdraw(self, amount):
        if amount > self.balance:
            print("Insufficient funds.")
        else:
            self.balance -= amount
            print("Withdrew $",amount,". New balance: $",self.balance,sep='')

    def displaybalance(self):
        print(f"Account balance for ",self.name," (",self.acnumber,"): $",self.balance,sep='')

account = BankAccount("Tanay Prabhakar", "7070170217", 1000)
account.displaybalance()
account.deposit(500)
account.withdraw(200)
account.displaybalance()
