# 7.	Write a Python program to print the multiplication table of a given number.
n=int(input("Enter the number : "))
for i in range(11):
    print(f"{n}x{i+1}={n*(i+1)}")