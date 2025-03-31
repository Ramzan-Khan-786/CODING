# 39.Write a Python program to find and replace a specific word in a text file.

with open("input.txt", "r") as f:
    content = f.read()

    word_to_replace = input("Enter the word to replace: ")
    replacement_word = input("Enter the replacement word: ")

    replaced_content = content.replace(word_to_replace, replacement_word)

    with open("input.txt", "w") as f:
        f.write(replaced_content)

    print("Word replaced successfully.")