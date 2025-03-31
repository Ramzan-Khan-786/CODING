# 38.Write a Python program to append text to an existing file without overwriting its content.
with open("input.txt", "a") as f:
    f.write("\nAdditional text to append.") 