import pandas as pd

# Example DataFrame
data = {'Name': ['Alice', 'Bob', 'Charlie'], 'Score': [85, 92, 78], 'Status': ['Pass', 'Pass', 'Fail']}
df = pd.DataFrame(data)

# Filter and update
threshold = 80
df.loc[df['Score'] > threshold, 'Status'] = 'Top Performer'

print("Updated DataFrame:\n", df)
