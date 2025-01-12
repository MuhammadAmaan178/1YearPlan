# Write a program to reverse a given string using a loop.

input_string = input("Enter a string: ")
reversed_string = " "
for i in range(len(input_string) - 1, -1, -1):
    reversed_string += input_string[i]
print("Reversed string:", reversed_string)