# 26.Write a Python function to find the greatest common divisor (GCD) 
def gcd(a, b):
    while b:
        a, b = b, a % b
    return a    

a,b=map(int,input().split())
print(gcd(a,b))
