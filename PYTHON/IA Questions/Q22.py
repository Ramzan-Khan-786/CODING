# 22.Write a Python function to check whether a given string is a palindrome.
def is_palindrome(s):
    return s == s[::-1] 

s = input("Enter a string: ")

if is_palindrome(s):    
    print(f"{s} is a palindrome")
else:
    print(f"{s} is not a palindrome")

