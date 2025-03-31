# Write a Python program to count the frequency of each element in a list and display the count as a dictionary.
from collections import Counter
l = list(map(int, input().split()))  
print(Counter(l))
