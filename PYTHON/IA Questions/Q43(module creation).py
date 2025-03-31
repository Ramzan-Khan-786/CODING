# 43.	Write a Python program that creates a module named math_operations containing functions for addition, subtraction, multiplication, and division. Import and use this module in another Python file.

with open("math_operations.py","w") as math:
    math.write(""" 
def add(a, b):
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

