# 45.	Write a Python program that defines a module containing a function to check if a given number is even or odd. Import this module and use it in the main program.
import os


os.makedirs("even_odd", exist_ok=True)

with open("even_odd/__init__.py", "w") as f:
    f.write("# Package Initialization File\n")

with open("even_odd/even_odd.py", "w") as f:
    f.write("""def is_even(num):
    return num % 2 == 0
""")