# 1.	Write a Python program to calculate the area and perimeter of a rectangle given its length and breadth.
print("Enter the length and breadth separeted by a space:")
length ,breadth = map(int,input().split())
area ,perimeter = length*breadth , 2 * (length + breadth) 
print(f"Area of Rectangle:{area}\nPerimeter of Rectangle:{perimeter}")