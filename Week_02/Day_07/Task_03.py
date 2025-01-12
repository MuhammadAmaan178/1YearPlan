# Looping through a String: Write a program to count vowels in a given string.

string = input("Enter The String : ")
total = 0

for i in string:
    if (i =="a" or i == "e" or i == "i" or i == "o" or i == "u" or i =="A" or i == "E" or i == "I" or i == "O" or i == "U"):
        total = total + 1
    else:
        pass

print(f"Vowels in {string} is {total}")