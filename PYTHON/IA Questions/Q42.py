# 42.	Write a Python program to rename a file and delete an existing file using Python.
import os

# Files to rename
old_name = "input.txt"
new_name = "output.txt"

# Check if the destination file already exists
if os.path.exists(new_name):
    os.remove(new_name)  # Delete the existing file first

# Rename the file
if os.path.exists(old_name):
    os.rename(old_name, new_name)
    print(f"File renamed from '{old_name}' to '{new_name}'")
else:
    print(f"'{old_name}' does not exist.")

 