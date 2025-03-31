# 28.Write a Python function that takes a sentence as input and returns the number of words in it.
sentence=input("Enter the sentence : ")
def count_words(sentence):
    words = sentence.split()
    return len(words)

print(count_words(sentence))
