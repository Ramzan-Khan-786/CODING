'''
======================================
Python Tutorial for Beginners: 
Lecture 1 - Introduction to Python
Module 1: Introduction to Python (L1)
======================================
'''

'''
1. Basic Syntax and Data Types
-------------------------------
'''
# 1.1 Variables
'''
- **Definition**: Variables are used to store data in memory.
- **Syntax**: Assign a value to a variable using the assignment operator `=`.
  Example:
    `x = 5` 
    stores the value `5` in the variable `x`.
'''

# 1.2 Data Types
'''
- **Definition**: Data types define the type of data a variable can hold.
- **Common Data Types**:
    - **int**: Integer (whole numbers).
    - **float**: Floating-point (decimal) numbers.
    - **str**: String (text).
    - **bool**: Boolean (True or False).
'''

# 1.3 Operators
'''
======================================
Operators in Python
======================================
'''
'''
**Definition**: 
Operators are symbols used to perform operations on variables and values.
They allow you to manipulate data, perform calculations, and make decisions.

**Types of Operators**:
------------------------------
'''

# 1. Arithmetic Operators
'''
- **Definition**: These operators are used to perform basic arithmetic operations on numbers.
- **Operators**:
      + : Addition
      - : Subtraction
      * : Multiplication
      / : Division (results in a float)
      //: Floor Division (returns the integer part of division)
      % : Modulus (returns the remainder of division)
      **: Exponentiation (raises the number to the power of another number)
'''

# 2. Logical Operators
'''
- **Definition**: These operators are used to combine conditional statements and perform logical comparisons.
- **Operators**:
    and : Returns `True` if both conditions are true.
    or  : Returns `True` if at least one of the conditions is true.
    not : Returns the opposite of the condition (negates it).
'''

# 3. Relational (Comparison) Operators
'''
- **Definition**: These operators are used to compare two values and return a boolean result.
- **Operators**:
    == : Equal to (returns True if both values are equal)
    != : Not equal to (returns True if both values are not equal)
    >  : Greater than (returns True if the left value is greater than the right)
    <  : Less than (returns True if the left value is less than the right)
    >= : Greater than or equal to (returns True if the left value is greater than or equal to the right)
    <= : Less than or equal to (returns True if the left value is less than or equal to the right)
'''

# 4. Identity Operators
'''
- **Definition**: These operators are used to compare the memory location (identity) of two objects.
- **Operators**:
    - `is`  : Returns `True` if both variables point to the same object in memory.
    - `is not` : Returns `True` if both variables do not point to the same object in memory.
'''

# 5. Membership Operators
'''
- **Definition**: These operators are used to test if a value is present in a sequence (like a list, tuple, or string).
- **Operators**:
    - `in` : Returns `True` if the value is found in the sequence.
    - `not in` : Returns `True` if the value is not found in the sequence.
'''

# 6. Bitwise Operators
'''
- **Definition**: These operators are used to perform bit-level operations on integer values.
- **Operators**:
    &: AND (performs bitwise AND on two numbers)
    | : OR (performs bitwise OR on two numbers)
    ^ : XOR (performs bitwise XOR on two numbers)
    ~ : NOT (performs bitwise NOT on a number)
    << : Left shift (shifts bits to the left)
    >> : Right shift (shifts bits to the right)
'''

'''
======================================
Summary
--------------------------------------
- We have covered the six main types of operators in Python:
    1. **Arithmetic Operators**: Used for mathematical calculations.
    2. **Logical Operators**: Help combine conditions in if-else statements.
    3. **Relational Operators**: Compare values and return a boolean result.
    4. **Identity Operators**: Check if two variables point to the same object.
    5. **Membership Operators**: Check if a value exists within a sequence.
    6. **Bitwise Operators**: Manipulate numbers at the bit level.
'''


# 1.4 Input and Output
'''
- **Input**: Used to get data from the user.
    Example: `name = input("Enter your name: ")`

- **Output**: Used to display data on the screen. 
    Example: `print("Hello, ", name)`
'''

'''
2. Data Structures
-------------------------------
'''
# 2.1 List
'''
- **Definition**: A list is an ordered collection of elements that can be changed (mutable).
- **Syntax**: Elements in a list are enclosed in square brackets `[]`.
- **Key Points**:
    - Lists are ordered, meaning elements have a defined order.
    - Lists can store different data types.
    - Lists are mutable, meaning you can change elements after creation.
'''

# 2.2 Tuple
'''
- **Definition**: A tuple is an ordered collection of elements that cannot be changed (immutable).
- **Syntax**: Elements in a tuple are enclosed in parentheses `()`.
- **Key Points**:
    - Tuples are ordered but immutable.
    - Useful when you need to ensure data cannot be modified.
'''

# 2.3 Set
'''
- **Definition**: A set is an unordered collection of unique elements.
- **Syntax**: Elements in a set are enclosed in curly braces `{}`.
- **Key Points**:
    - Sets are unordered, meaning they do not store elements in a defined order.
    - Sets do not allow duplicate elements.
'''

# 2.4 Dictionary
'''
- **Definition**: A dictionary is a collection of key-value pairs.
- **Syntax**: Dictionaries are enclosed in curly braces `{}`, with each key-value pair separated by a colon.
- **Key Points**:
    - Keys in dictionaries must be unique.
    - Useful for storing related data together.
'''

'''
3. Syntax Transition (C to Python)
-------------------------------
'''
# 3.1 Key Differences
'''
- **C Syntax**:
    - Requires explicit type declarations.
    - Code blocks are enclosed in curly braces `{}`.
    - Statements end with a semicolon `;`.
- **Python Syntax**:
    - Does not require explicit type declarations.
    - Code blocks are defined by indentation.
    - No semicolons needed.
'''

# 3.2 Built-in Data Structures
'''
- Python provides built-in data structures like lists, tuples, and dictionaries.
- In C, you must define custom data structures like arrays and structs.
'''

'''
======================================
Examples: Basic Syntax and Data Types
--------------------------------------
'''