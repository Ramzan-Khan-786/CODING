# 29.Write a Python function to convert a decimal number into binary, octal, and hexadecimal formats.
def convert(n):
    print(f"Binary : {bin(n)}\nOctal : {oct(n)}\nHexadecimal : {hex(n)}")
n=int(input("Enter the decimal number : "))
convert(n)