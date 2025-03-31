# # Introduction to Python Programming
# '''
# python was created by Guido van Rossum, and released in 1991.

# Python is a high-level, interpreted, interactive and 
# object-oriented scripting language. Python is designed to be highly readable. 
# It uses English keywords frequently where as other languages use punctuation, 
# and it has fewer syntactical constructions than other languages.

# Python is Interpreted − Python is processed at runtime by the interpreter.
# You do not need to compile your program before executing it. This is similar to PERL and PHP.

# '''
# # modules and pip
# '''
# pip is a package manager in python, used to install 
# and manage software packages written in Python.
# modules are python files that consist of python code.
# '''

# # comments, escape sequence and print statement
# # single line comment
# '''
# multi line comment
# '''
# print("hello world")
# print("hello\nworld")
# print("hello\tworld")
# print("hello\\world")
# print("hello\'world")
# print("hello\"world")



# # variables
# a=10
# b="hello"
# c=10.5
# d=True
# e=1j
# print(a,b,c,d,e)
# print(type(a))
# print(type(b))
# print(type(c))
# print(type(d))
# print(type(e))


# # operators
# a=10
# b=20
# print(a+b) #addition
# print(a-b) #subtraction
# print(a*b) #multiplication
# print(a/b) #division
# print(a//b) #floor division
# print(a%b) #modulus
# print(a**b) #exponential
# print(a==b) #equal to
# print(a!=b) #not equal to
# print(a>b) #greater than
# print(a<b) #less than
# print(a>=b) #greater than or equal to
# print(a<=b) #less than or equal to
# print(a and b) #logical and
# print(a or b) #logical or
# print(not a) #logical not
# print(a & b) #bitwise and
# print(a | b) #bitwise or
# print(~a) #bitwise not
# print(a ^ b) #bitwise xor
# print(a>>b) #right shift
# print(a<<b) #left shift


# #typecasting
# a = "1234"
# print(type(a))
# a = int(a)
# print(type(a))
# a = str(a)
# print(type(a))
# a = float(a)
# print(type(a))
# a = str(a)
# print(type(a))


# # input("Press Enter to continue...")
# a=input("Enter your name: ")
# print("Hello",a)


# # string sclicing operation
# a = "hello world"
# print(a[0:5])
# print(a[6:11])
# print(a[-1:-4])
# print(a[0:11:2])
# print(a[0::2])
# print(a[::2])
# print(a[::-1])


# # string methods
# a="hello world"
# print(a.upper())
# print(a.lower())
# print(a.replace("hello","hi"))
# print(a.find("world"))
# print(a.capitalize())
# print(a.count("l"))
# print(a.endswith("d"))
# print(a.startswith("h"))
# print(a.isalnum())
# print(a.isalpha())
# print(a.isdigit())
# print(a.islower())
# print(a.isupper())
# print(a.isspace())
# print(a.split(" "))
# print(a.join("hello"))
# print(a.title())
# print(a.swapcase())
# print(a.strip())
# print(a.lstrip())
# print(a.rstrip())
# print(a.center(20))
# print(a.encode())
# print(a.expandtabs())
# print(a.format())
# print(a.format_map({}))
# print(a.index("o"))
# print(a.isascii())
# print(a.isdecimal())
# print(a.isidentifier())
# print(a.isprintable())
# print(a.istitle())
# print(a.ljust(20))
# print(a.rjust(20))
# print(a.maketrans("hello","hi"))
# print(a.partition(" "))
# print(a.rpartition(" "))
# print(a.rsplit(" "))
# print(a.rsplit(" "))
# print(a.splitlines())
# print(a.translate({97: 105}))
# print(a.zfill(20))



# # if-elif-else ladder
# a = 10
# b = 20
# if a>b:
#     print("a is greater than b")
# elif a==b:
#     print("a is equal to b")
# else:
#     print("a is less than b")



# # match case
# a = 10  
# b = 20
# match a:
#     case 10:
#         print("a is 10")
#     case 20:
#         print("a is 20")
#     case _:
#         print("a is neither 10 nor 20")



# # for loop
# a=0;
# for i in range(3,31,3):   # range(start,stop,step)
#     a=a+1
#     print("3 *",a,"=",i)


# while loop

# i = int(input("Enter a number: "))
# while i<10:
#     print(i)
#     i = i+1     

# while (i<10):
#     i=int(input("Enter a number: "))
#     print(i)
# print("out of loop")

# #while else loop

# i = 0
# while i<10:
#     print(i)
#     i = i+1
# else:
#     print(" else out of loop")


# #---------- Q)Emulate the do while loop in python ----------------

# i=56
# while True:
#     print(i)
#     i=i+1
#     if i>=1:
#         break

# break and continue statement

# i=0
# while i<10:
#     if i==5:
#         continue #out of itorations
#     elif i==8:
#         break #out of loop
#     print(i)
#     i=i+1
# else:
#     print("else out of loop")

# functions
    # 1.function types
'''
    1. Built-in functions
    2. User-defined functions
'''
    # 2. function arguments
''' 
    1. Default arguments
    2. Required arguments
    3. Keyword arguments
    4. Variable-length arguments
'''

# list
# list methods
'''
    
    1. append()
    2. clear()
    3. copy()
    4. count()
    5. extend()
    6. index() -> returns first occuring index
    7. insert()
    8. pop()
    9. remove()
    10. reverse()
    11. sort()--> 
    12.size()--> 
    
'''

# tuple
# tuple methods
'''
    1. count()
    2. index()
    3. insert()
    4. pop()
    5. remove()
    6. reverse()
    7. sort()
'''

# difference between list and tuple
# syntax difference
# list-> []
# tuple-> ()

# conversion between list and tuple
# list-> tuple
    #  list_name = tuple(list_name)
# tuple-> list
    #  list_name = list(tuple_name)


# fstrings
# syntax
# f"string"

# fstring methods
'''
    1. capitalize()
    2. casefold()
    3. center()
    4. count()
    5. encode()
    6. endswith()
    7. expandtabs()
    8. find()
    9. format()
    10. format_map()
    11. index()
    12. isalnum()
    13. isalpha()
    14. isascii()
    15. isdecimal()
    16. isdigit()
    17. isidentifier()
    18. islower()
    19. isnumeric() 
    20. isprintable()
    21. isspace()
    22. istitle()
    23. isupper()
    24. join()
    25. ljust()
    26. lower()
    27. lstrip()
    28. maketrans()
    29. partition()
    30. replace()
    31. rfind()
    32. rindex()
    33. rjust()
    34. rpartition()
    35. rsplit()
    36. rstrip()
    37. split()
    38. splitlines()
    39. startswith()
    40. strip()
    41. swapcase()
    42. title()
    43. translate()
    44. upper()
    45. zfill()
'''

# docstring
# syntax
# """string"""

# docstring methods
'''
    1. capitalize()
    2. casefold()
    3. center()
    4. count()
    5. encode()
    6. endswith()
    7. expandtabs()
    8. find()
    9. format()
    10. format_map()
    11. index()
    12. isalnum()
    13. isalpha()
    14. isascii()
    15. isdecimal()
    16. isdigit()
    17. isidentifier()
    18. islower()
    19. isnumeric()
    20. isprintable()
    21. isspace()
    22. istitle()
    23. isupper()
    24. join()
    25. ljust()
    26. lower()
    27. lstrip()
    28. maketrans()
    29. partition()
    30. replace()
    31. rfind()
    32. rindex()
    33. rjust()
    34. rpartition()
    35. rsplit()
    36. rstrip()
    37. split()
    38. splitlines()
    39. startswith()    
    40. strip()
    41. swapcase()
    42. title()
    43. translate()
    44. upper()
    45. zfill()
'''

# PEP 8(Python Enhancement Proposal 8)
# PEP 8 is a set of guidelines for writing code in Python. 
# it was written by Guido van Rossum in 2001.

# The Zen of Python
# The Zen of Python is a set of principles for writing Python code. 
# it was written by Tim Peters in 2001.
# use "import this" in repl


# sets
# set methods
'''
    0.delete()
    1. add()
    2. clear()
    3. copy()
    4. difference()
    5. difference_update()
    6. discard()
    7. intersection()
    8. intersection_update()
    9. isdisjoint()
    10. union()
    11. update()
    12. symmetric_difference()
    13. symmetric_difference_update()
    14. issubset()
    15. issuperset()
    16. pop()
    17. remove()
    18. update()

''' 

# dictionary
# dictionary methods    
'''
    1. clear()
    2. copy()
    3. fromkeys()    
    4. get()
    5. items()
    6. keys()    
    7. pop()
    8. popitem()
    9. setdefault()
    10. update()    
    11. values()
''' 


