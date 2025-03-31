# 16.Write a Python program to remove all occurrences of a specific item from a list.
l = list(map(int, input().split()))
item = int(input("Enter the item to remove : "))
while item in l:
    l.remove(item)
print(l)