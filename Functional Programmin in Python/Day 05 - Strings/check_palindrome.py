# Taking user input for the string
text = input("Enter a string: ")

# Converting the string to lowercase and removing spaces for uniformity
cleaned_text = text.replace(" ", "").lower()

# Checking if the string is a palindrome
if cleaned_text == cleaned_text[::-1]:
    print("The string is a palindrome.")
else:
    print("The string is not a palindrome.")
