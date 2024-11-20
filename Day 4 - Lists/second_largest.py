# Taking user input for the list of integers
numbers = list(map(int, input("Enter a list of integers separated by spaces: ").split()))

# Finding the second largest element
if len(numbers) < 2:
    print("List should have at least two unique elements.")
else:
    unique_numbers = list(set(numbers))  # Remove duplicates
    unique_numbers.sort(reverse=True)    # Sort in descending order
    if len(unique_numbers) < 2:
        print("All elements are the same.")
    else:
        second_largest = unique_numbers[1]
        print("The second largest element is:", second_largest)
