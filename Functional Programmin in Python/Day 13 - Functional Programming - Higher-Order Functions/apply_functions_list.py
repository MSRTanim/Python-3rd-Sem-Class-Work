# Higher-order function to apply a list of functions to a number
def apply_functions(func_list, num):
    for func in func_list:
        num = func(num)
    return num

# Example usage
functions = [
    lambda x: x + 2,  # Add 2
    lambda x: x * 3,  # Multiply by 3
    lambda x: x - 5   # Subtract 5
]

print("Final Result:", apply_functions(functions, 5))  # Applies all functions to 5
