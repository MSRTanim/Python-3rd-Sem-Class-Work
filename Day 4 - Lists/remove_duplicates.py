# Taking user input for the list of integers
numbers = list(map(int, input("Enter a list of integers separated by spaces: ").split()))

# Removing duplicates while maintaining order
unique_numbers = []
seen = set()

for num in numbers:
    if num not in seen:
        unique_numbers.append(num)
        seen.add(num)

# Displaying the list without duplicates
print("List after removing duplicates:", unique_numbers)
