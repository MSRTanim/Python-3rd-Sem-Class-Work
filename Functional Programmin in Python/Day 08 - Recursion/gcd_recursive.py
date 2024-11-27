def gcd(a, b):
    return a if b == 0 else gcd(b, a % b)

# Example usage
a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))
print(f"GCD of {a} and {b} is:", gcd(a, b))