# 25.Write a Python function that takes a list as input and returns a new list with only the unique elements.

def unique_list(l):
    return list(set(l))

l = list(map(int, input().split()))
print(unique_list(l))
