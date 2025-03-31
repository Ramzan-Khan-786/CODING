# 18.Write a Python program to sort a dictionary by its values in ascending and descending order.
list1=[1,2,3,4,5]
list2=["a","b","c","d","e"]
dic=dict(zip(list1,list2))

asc = dict(sorted(dic.items()))
desc = dict(sorted(dic.items(), reverse=True))
print("Ascending Order:", asc)
print("Descending Order:", desc)