import string
from collections import Counter

text = """
Python is easy to learn.
Python is powerful and Python is popular.
Level civic radar noon are palindromes.
"""

words = text.lower().split()

cleaned_words = []

for word in words:
    word = word.strip(string.punctuation)
    if word:
        cleaned_words.append(word)

word_count = len(cleaned_words)

palindromes = sorted(set(
    word for word in cleaned_words
    if len(word) > 1 and word == word[::-1]
))

frequency = Counter(cleaned_words)

print("Total Word Count:", word_count)

print("\nPalindromes:")
for word in palindromes:
    print(word)

print("\nWord Frequency:")
for word, count in frequency.items():
    print(word, ":", count)