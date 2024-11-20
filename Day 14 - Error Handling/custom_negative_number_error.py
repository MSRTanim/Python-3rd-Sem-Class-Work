# Custom exception for negative numbers
class NegativeNumberError(Exception):
    def __init__(self, value):
        super().__init__(f"Negative numbers are not allowed: {value}")

# Program to raise custom exception
try:
    num = int(input("Enter a positive number: "))
    if num < 0:
        raise NegativeNumberError(num)
    print(f"You entered: {num}")
except NegativeNumberError as e:
    print(e)
