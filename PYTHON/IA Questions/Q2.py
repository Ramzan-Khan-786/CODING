# 2.	Write a Python program to check whether a given number is even or odd.
from sympy import Mod
a=int(input("Enter the Number : "))
if Mod(a, 2) == 0:
    print(f"{a} is Even")
else:
    print(f"{a} is Odd")
