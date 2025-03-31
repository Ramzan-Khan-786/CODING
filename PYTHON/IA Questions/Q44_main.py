

from utilities import string_utils, math_utils


s = "Hello, World!"
print("Uppercase:", string_utils.to_uppercase(s))
print("Lowercase:", string_utils.to_lowercase(s))
print("Reversed:", string_utils.reverse_string(s))

a, b = 10, 5
print("Addition:", math_utils.add(a, b))
print("Subtraction:", math_utils.subtract(a, b))
print("Multiplication:", math_utils.multiply(a, b))
print("Division:", math_utils.divide(a, b))
