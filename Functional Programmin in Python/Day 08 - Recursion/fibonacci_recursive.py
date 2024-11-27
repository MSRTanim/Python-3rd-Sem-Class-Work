def fibonacci(n):
    if n <= 1:
        return n
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)

# Example usage
n = int(input("Enter the position of the Fibonacci number: "))
print(f"Fibonacci number at position {n} is:", fibonacci(n))
