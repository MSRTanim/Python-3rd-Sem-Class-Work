# Taking user input for the string
text = input("Enter a string: ")

# Initializing vowel and consonant counters
vowel_count = 0
consonant_count = 0
vowels = "aeiouAEIOU"

# Counting vowels and consonants
for char in text:
    if char.isalpha():  # Check if it's an alphabet character
        if char in vowels:
            vowel_count += 1
        else:
            consonant_count += 1

# Displaying the counts
print("Number of vowels:", vowel_count)
print("Number of consonants:", consonant_count)
