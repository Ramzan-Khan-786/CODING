# 35.Write a Python program to copy the contents of one text file into another
with open("input.txt", "w") as f1:
    with open("output.txt", "r") as f2:
        f1.write(f2.read())
