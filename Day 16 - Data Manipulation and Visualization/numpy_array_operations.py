import numpy as np

# Create a 10x10 matrix of random integers
matrix = np.random.randint(1, 101, size=(10, 10))
row_sums = matrix.sum(axis=1)

print("Matrix:\n", matrix)
print("Row sums:", row_sums)
