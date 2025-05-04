
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

df = pd.read_csv("Manual/Toyota.csv")

df_top10 = df.head(10)

# 1. Scatter Plot: Age vs Price
sns.scatterplot(x='Age', y='Price', data=df_top10)
plt.xlabel('Age (months)')
plt.ylabel('Price')
plt.show()

# 2. Histogram: Kilometers Driven
plt.hist(df_top10['KM'], bins=10 ,width=0.5)
plt.xlabel('Kilometers')
plt.ylabel('Frequency')
plt.show()

# 3. Bar Plot: Fuel Type Distribution
df_top10['FuelType'].value_counts().plot(kind='bar')
plt.xlabel('Fuel Type')
plt.ylabel('Count')
plt.show()

# 4. Pie Chart: Fuel Type Percentage Distribution
df_top10['FuelType'].value_counts().plot(kind='pie', autopct='%1.1f%%')
plt.ylabel('')  
plt.show()

# 5. Box Plot: Price by Fuel Type
sns.boxplot(x='FuelType', y='Price', data=df_top10)
plt.xlabel('Fuel Type')
plt.ylabel('Price')
plt.show()

