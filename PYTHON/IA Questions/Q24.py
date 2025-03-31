# 24.Write a Python function to check if a number is prime.
def prime(n):
    for i in range(2,n):
        if n%i==0:
            return False
    return True

n=int(input("Enter the number : "))
print(f"{n} is prime" if prime(n) else f"{n} is not prime")
