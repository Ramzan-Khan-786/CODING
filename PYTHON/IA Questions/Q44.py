# 44.	Write a Python program to create a package named utilities containing modules string_utils.py (for string manipulations) and math_utils.py (for basic math operations). Demonstrate their usage in a separate script.
import os


os.makedirs("utilities", exist_ok=True)


with open("utilities/__init__.py", "w") as f:
    f.write("# Package Initialization File\n")


with open("utilities/string_utils.py", "w") as f:
    f.write("""def to_uppercase(s):
    return s.upper()

def to_lowercase(s):
    return s.lower()

def reverse_string(s):
    return s[::-1]
""")


with open("utilities/math_utils.py", "w") as f:
    f.write("""def add(a, b):
    return a + b

def subtract(a, b):
    return a - b

def multiply(a, b):
    return a * b

def divide(a, b):
    if b == 0:
        return "Error: Division by zero is not allowed"
    return a / b
""")

print("Package 'utilities' with modules 'string_utils.py' and 'math_utils.py' created successfully!")
