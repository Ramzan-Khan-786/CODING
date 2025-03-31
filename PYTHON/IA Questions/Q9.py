# 9.	Write a Python program to calculate the sum and average of five numbers entered by the user.
print("Enter five Numbers seperated by space : ")
a,b,c,d,e=map(int,input().split())
ans_sum=a+b+c+d+e
ans_average=ans_sum//5
print(f"You have entered {a},{b},{c},{d} and {e}")
print(f"The sum of above Five Numbers is {ans_sum} and Average is {ans_average}")
