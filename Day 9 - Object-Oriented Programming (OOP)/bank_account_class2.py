import random
import datetime

class BankAccount:
    def __init__(self, initial_balance=0):
        self.account_number = self._generate_account_number()
        self.balance = initial_balance
        self.transaction_history = []  # Stores a history of transactions

    def _generate_account_number(self):
        # Generates a unique 10-digit account number
        return f"{random.randint(1000000000, 9999999999)}"

    def deposit(self, amount):
        if amount <= 0:
            print("Deposit amount must be positive.")
            return
        self.balance += amount
        self._add_transaction("Deposit", amount)
        print(f"Deposited: {amount}. New balance: {self.balance}")

    def withdraw(self, amount):
        if amount <= 0:
            print("Withdrawal amount must be positive.")
            return
        if amount > self.balance:
            print("Insufficient funds.")
        else:
            self.balance -= amount
            self._add_transaction("Withdrawal", amount)
            print(f"Withdrew: {amount}. New balance: {self.balance}")

    def _add_transaction(self, transaction_type, amount):
        # Adds a record to the transaction history with timestamp
        transaction = {
            "type": transaction_type,
            "amount": amount,
            "date": datetime.datetime.now().strftime("%Y-%m-%d %H:%M:%S"),
            "balance": self.balance
        }
        self.transaction_history.append(transaction)

    def check_balance(self):
        print(f"Current balance: {self.balance}")
        return self.balance

    def print_transaction_history(self):
        print("Transaction History:")
        for transaction in self.transaction_history:
            print(f"{transaction['date']} - {transaction['type']}: {transaction['amount']} (Balance: {transaction['balance']})")

# Example usage
account = BankAccount(initial_balance=500)
print(f"Account Number: {account.account_number}")
account.deposit(300)
account.withdraw(200)
account.withdraw(700)  # This should trigger "Insufficient funds."
account.check_balance()
account.print_transaction_history()
 