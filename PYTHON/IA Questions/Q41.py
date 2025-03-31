# 41.	Write a Python program to read a text file and print only those lines that contain a given keyword.
word = input("Enter a word to exclude: ").lower()

with open("input.txt", "r") as f1:
    for line in f1:
        if word not in line.lower():
            print(line, end="") 