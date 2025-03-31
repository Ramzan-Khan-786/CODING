# 4.	Write a Python program to find the largest of three numbers entered by the user
print("Enter the all three numbers seperated by space :")
a,b,c=map(int,input().split())
maximum=max(a,max(b,c))
print(f"The maximum of {a},{b} and {c} is {maximum}")