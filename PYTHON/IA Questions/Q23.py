# 23.Write a Python function to find the factorial of a number .

def fact(n):
    f=1
    for i in range(1,n+1):
        f=f*i
    return f

n=int(input("Enter the number : "))
print(f"Factorial of {n} is {fact(n)}")
