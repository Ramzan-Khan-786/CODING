# 43.	Write a Python program that creates a module named math_operations containing functions for addition, subtraction, multiplication, and division. Import and use this module in another Python file.
import math_operations

num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))

result_add = math_operations.add(num1, num2)
result_sub = math_operations.subtract(num1, num2)
result_mul = math_operations.multiply(num1, num2)
result_div = math_operations.divide(num1, num2)

print(f"Addition: {result_add}")
print(f"Subtraction: {result_sub}")
print(f"Multiplication: {result_mul}")
print(f"Division: {result_div}")