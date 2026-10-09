import re
from collections import Counter

# Function to clean text
def clean_text(text):
    return ''.join(char.lower() for char in text if char.isalnum())

# Method 1: Check anagrams using sorting
def check_anagram(word1, word2):
    text1 = clean_text(word1)
    text2 = clean_text(word2)

    return sorted(text1) == sorted(text2)

# Method 2: Check anagrams using dictionary counting
def check_anagram_count(word1, word2):
    text1 = clean_text(word1)
    text2 = clean_text(word2)

    return Counter(text1) == Counter(text2)

# Create an immutable tuple key
def create_key(text):
    cleaned = clean_text(text)
    return tuple(sorted(cleaned))

# Store words in a dictionary for fast matching
def find_anagrams(words):
    anagram_groups = {}

    for word in words:
        key = create_key(word)
        anagram_groups.setdefault(key, []).append(word)

    return anagram_groups

# Main program
word1 = input("Enter first word or phrase: ")
word2 = input("Enter second word or phrase: ")

print("\nUsing Sorting:", check_anagram(word1, word2))
print("Using Character Counting:", check_anagram_count(word1, word2))

words = input(
    "\nEnter multiple words separated by commas: "
).split(",")

groups = find_anagrams(words)

print("\nAnagram Groups:")
for group in groups.values():
    if len(group) > 1:
        print([word.strip() for word in group])

print("\nTuple Key Example:", create_key(word1))