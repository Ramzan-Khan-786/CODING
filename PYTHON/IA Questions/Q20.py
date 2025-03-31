#20 .Write a Python program to create a dictionary of student names and their marks, and then display students with marks greater than 80.

dic={}
names=input("Enter the names : ").split()
marks=list(map(int,input("Enter the marks : ").split()))
dic=dict(zip(names,marks))
for i in dic:
    if dic[i]>80:
        print(i)


# ramzan dhanveer rohit
# 80 80 90