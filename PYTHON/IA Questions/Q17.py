#17 .Write a Python program to find the intersection of two lists.
l1 = list(map(int, input().split()))
l2 = list(map(int, input().split()))
print(list(set(l1) & set(l2)))

# l3=[it for it in l1 if it in l2]
# print(l3)