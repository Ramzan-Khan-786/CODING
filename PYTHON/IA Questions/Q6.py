# 6.	Write a Python program to check whether a given year is a leap year or not.
import calendar

year = int(input("Enter a year: "))
print(f"{year} is a Leap Year" if calendar.isleap(year) else f"{year} is NOT a Leap Year")
