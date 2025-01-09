#Write a program to swap two numbers without using a third variable.

num1 = float(input("Enter First Number : "))
num2 = float(input("Enter Second Number : "))

#lets suppose we have num1 as 5 and num2 as 3
num1 = num1 + num2  # 5 + 3 --> 8... now, num1 = 8
num2 = num1 - num2  # 8 - 3 --> 5... then, num1 which is 8 - num2 which is 3
num1 = num1 - num2  # 8 - 5 --> 3... then, num1 which is 8 - num2 which is now 5 (after 8-3)

print("After Swapping : ",num1,num2)
