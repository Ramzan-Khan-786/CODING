# Write a Python program to merge two dictionaries and sort them by keys.
d1 = {5: 'z', 1: 'b'}
d2 = {2: 'a', 0: 'd'}
d3 = dict(sorted({**d1, **d2}.items()))
print(d3)