import pandas as pd  # Ensure this import is present

# Example DataFrame
data = {'Category': ['A', 'B', 'A', 'B', 'C'], 'Value': [10, 20, 30, 40, 50]}
df = pd.DataFrame(data)

# Group by category and calculate mean
grouped_mean = df.groupby('Category')['Value'].mean().reset_index()
print("Grouped Mean DataFrame:\n", grouped_mean)
