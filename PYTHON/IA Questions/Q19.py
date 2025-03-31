# 19.Write a Python program to count the occurrences of each word in a given sentence using a dictionary.
import re
sentence=input("Enter the sentence : ").lower()
sentence = re.sub(r'[^\w\s]', '', sentence)

words=sentence.split()
count = {}
for word in words:
    if word in count:
        count[word] += 1
    else:
        count[word] = 1
print(count)
