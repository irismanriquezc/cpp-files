
word = raw_input("Enter a word: ")

if len(word) < 5:
	print("The word is short (fewer than 5 letters).")

if len(word) > 5:
	print("The word is long (at least 10 letters).")

if word[-1:] == 'y':
	print("The word ends with the letter y")

if word[0] == word [-1:]:
	print("The word starts and ends with the same letter")

