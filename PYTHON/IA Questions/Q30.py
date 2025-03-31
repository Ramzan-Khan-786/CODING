# 30.Write a Python function that finds the second largest number in a list.
def solve(lis):
    max=0
    if len(lis)<2:
        return "Invalid input"
    else:
        sorted_lis=sorted(list(set(lis)))
        return sorted_lis[-2]
    
lis=list(map(int,input().split()))

print( solve(lis) )