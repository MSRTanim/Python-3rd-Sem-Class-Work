from functools import reduce

# Program to calculate product of all numbers using reduce and lambda
numbers = [1, 2, 3, 4, 5]
product = reduce(lambda x, y: x * y, numbers)
print("Product of the numbers:", product)
