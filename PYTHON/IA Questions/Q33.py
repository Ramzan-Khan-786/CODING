# 33.Write a Python program to read a text file and count the number of words in it.
from collections import Counter
file = open("input.txt", "r")
words=Counter(file.read().lower().split())
print(dict(words))
