# 32.Write a Python function to check if a given number is an Armstrong number.
def armstrong(n):
    sum = 0
    temp = n
    while temp > 0:
        digit = temp % 10
        sum += digit ** len(str(n))
        temp //= 10
    if n == sum:
        return True
    return False

n=int(input("Enter the number : "))
print(f"{n} is Armstrong" if armstrong(n) else f"{n} is not Armstrong")