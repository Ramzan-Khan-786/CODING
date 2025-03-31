# 3.	Write a Python program to swap two numbers without using a third variable.
a,b=map(int,input().split())
print(f"a={a},b={b}")
a,b=b,a
print(f"a={a},b={b}")