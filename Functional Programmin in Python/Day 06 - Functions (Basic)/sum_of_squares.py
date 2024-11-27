def sum_of_squares_of_even(numbers):
    return sum(x ** 2 for x in numbers if x % 2 == 0)

# Example usage
numbers = list(map(int, input("Enter a list of numbers separated by spaces: ").split()))
print("Sum of squares of even numbers:", sum_of_squares_of_even(numbers))
