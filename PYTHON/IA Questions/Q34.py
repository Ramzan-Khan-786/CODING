# 34.Write a Python program to write a list of names into a file and then read and display them.
with open("input.txt", "w") as f:
    names = input("Enter the names: ").split()
    f.writelines(name + " " for name in names)  

with open("input.txt", "r") as f:
    words = f.read().lower().split()  
    print(words)
