# Create a program to check whether a given input is numeric or not.

num = input("Enter The Input : ")

try:
    number = float(num)
    print("Given Value Is Numeric")
except:
    print("Given Value Is Non-Numeric")