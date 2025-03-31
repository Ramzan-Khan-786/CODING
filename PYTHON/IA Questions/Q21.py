#21.Write a Python program to convert a tuple into a dictionary where the first item of each tuple is the key, and the second item is the value.
tuple1 = ('a', 1, 'b', 2, 'c', 3)
dic = dict(zip(tuple1[::2], tuple1[1::2]))
print(dic)