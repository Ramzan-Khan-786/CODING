import pandas as pd 
import matplotlib.pyplot as plt
import seaborn as sns

df=pd.read_csv("Manual/Toyota.csv")

df_top10 = df.head(10)

# 1.scatter plot
# sns.scatterplot(x='Age', y='Price',data=df_top10)
# plt.xlabel('Age')
# plt.ylabel('Price')
# plt.show()

# 2.histogram
# plt.hist(df_top10['KM'],bins=10,width=0.7)
# plt.xlabel('KM')
# plt.ylabel('frequency')
# plt.show()

# 3.barplot
# df_top10['FuelType'].value_counts().plot(kind='bar')
# plt.xlabel('Fuel Type')
# plt.ylabel('count')
# plt.show()

# 4.pieplot
# df_top10['FuelType'].value_counts().plot(kind='pie',autopct='%1.1f%%')
# plt.ylabel('')
# plt.show()

# 5.boxplot
# sns.boxplot(x='FuelType',y='Price',data=df_top10)
# plt.xlabel('fueltype')
# plt.ylabel('price')
# plt.show()