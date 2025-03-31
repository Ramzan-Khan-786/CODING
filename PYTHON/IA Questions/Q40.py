# 40.Write a Python program to count the number of lines, words, and characters in a text file.
with open("input.txt", "r") as f1:
    cnt_line = 0
    cnt_word = 0
    cnt_character = 0

    for line in f1: 
        cnt_line += 1  
        cnt_word += len(line.split())  
        cnt_character += len(line)  

print(f"Number of lines: {cnt_line}")
print(f"Number of words: {cnt_word}")
print(f"Number of characters: {cnt_character}")
