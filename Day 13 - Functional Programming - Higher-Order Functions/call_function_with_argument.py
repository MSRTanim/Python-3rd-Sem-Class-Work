# Function that takes another function as input
def apply_function(func, arg):
    return func(arg)

# Example usage
square = lambda x: x**2
print("Result:", apply_function(square, 5))  # Calls the square function with argument 5
