# Taking user input for the list of integers
numbers = list(map(int, input("Enter a list of integers separated by spaces: ").split()))

# Finding the largest and smallest numbers
largest = max(numbers)
smallest = min(numbers)

# Displaying results
print("Largest number in the list:", largest)
print("Smallest number in the list:", smallest)
