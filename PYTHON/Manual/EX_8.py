
length= int(input("Enter word length to find (e.g., 3, 4, 5): "))


with open('Manual\example.txt', 'r') as fl:
        text = fl.read()
        words = text.split()
        matching_words = [word for word in words if len(word) == length]
        
        print(f"\nWords with length {length}:")
        for word in matching_words:
            print(word)
