# 15.Write a Python program to remove duplicate values from a list while maintaining the order of elements.
l = list(map(int, input().split()))
print(list(dict.fromkeys(l)))
