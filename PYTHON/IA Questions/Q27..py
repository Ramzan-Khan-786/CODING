# 27.Write a Python function to count the number of vowels in a given string.
l=["a","e","i","o","u","A","E","I","O","U"]
def count_vowels(s):
    count=0
    for i in s:
        if i in l:
            count+=1
    return count

s=input("Enter the string : ")
print(count_vowels(s))
    