# Taking user input for the number
number = int(input("Enter a number to reverse: "))

# Initializing the reversed number
reversed_number = 0

# Reversing the number using a while loop
while number > 0:
    digit = number % 10
    reversed_number = reversed_number * 10 + digit
    number //= 10

# Displaying the reversed number
print("Reversed number:", reversed_number)
