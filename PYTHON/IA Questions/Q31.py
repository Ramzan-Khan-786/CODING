# 31.Write a Python function that accepts a list of integers and returns a new list containing only the prime numbers.
from sympy import isprime
lis=list(map(int,input().split()))

def prime(lis):
    return [i for i in lis if isprime(i)]



print(prime(lis))