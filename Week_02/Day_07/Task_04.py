# Conditional Problem: Check if a number is divisible by both 3 and 5.

number = float(input("Enter The Number : "))

if ((number%3 == 0) and (number%5 == 0)):
    print(f"{number} is divisible by both 3 and 5")
elif (number%3 == 0):
    print(f"{number} is divisble by only 3")
elif (number % 5 == 0):
    print(f"{number} is divisble by only 5")
else:
    print(f"{number} is neither divisible is 3 nor 5")