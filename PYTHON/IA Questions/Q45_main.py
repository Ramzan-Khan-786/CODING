from even_odd import even_odd
n=int(input("Enter the number : "))
print(f"{n} is Even" if even_odd.is_even(n) else f"{n} is Odd")
