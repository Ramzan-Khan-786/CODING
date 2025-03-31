# 14.Write a Python program to find the sum of elements at even and odd indices    in a tuple.
tup=(1,2,3,4,5,6,7,8,9,10)
even_sum = sum(tup[::2])
odd_sum = sum(tup[1::2])
print(f"Sum of even indices : {even_sum}\nSum of odd indices : {odd_sum}")