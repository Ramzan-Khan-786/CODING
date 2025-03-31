# 37.Write a Python program to count the number of uppercase and lowercase letters in a text file.
with open("input.txt", "r") as f:
    content = f.read()
    uppercase_count = sum(1 for char in content if char.isupper())
    lowercase_count = sum(1 for char in content if char.islower())
    print(f"Number of uppercase letters: {uppercase_count}")
    print(f"Number of lowercase letters: {lowercase_count}")