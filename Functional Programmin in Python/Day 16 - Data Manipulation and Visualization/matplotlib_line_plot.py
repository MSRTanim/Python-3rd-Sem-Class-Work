import pandas as pd
import matplotlib.pyplot as plt

# Example DataFrame
data = {'Date': pd.date_range(start='2023-01-01', periods=10), 'Value': range(10, 110, 10)}
df = pd.DataFrame(data)

# Plot
plt.plot(df['Date'], df['Value'], label='Value Trend', marker='o')
plt.title('Trend Over Time')
plt.xlabel('Date')
plt.ylabel('Value')
plt.legend()
plt.grid(True)
plt.show()
