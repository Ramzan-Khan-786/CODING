# 36.Write a Python program to write multiple lines of text to a file and then read and display the contents.
with open("input.txt", "w") as f:
    lines = [
        "Python is a powerful language.\n",
        "File handling is an important concept.\n",
        "Using 'with' ensures safe file handling.\n"
    ]
    f.writelines(lines) 

with open("example.txt", "r") as f:
    content = f.read()
    print("File Content:\n", content)