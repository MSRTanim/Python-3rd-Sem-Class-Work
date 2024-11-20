class BankAccount:
    def __init__(self, account_number, balance=0):
        self.account_number, self.balance = account_number, balance

    def deposit(self, amount): self.balance += amount; print(f"New balance: {self.balance}")
    def withdraw(self, amount): 
        if amount > self.balance: print("Insufficient funds.")
        else: self.balance -= amount; print(f"New balance: {self.balance}")


account = BankAccount("123456789")
account.deposit(500)
account.withdraw(200)
account.withdraw(400)
  