# Write a program to sum the digits of a number (e.g., 123 → 1+2+3 = 6).

num = int(input("Enter The Number : "))
str_num = str(num)
sum = 0

if (num != 0):
    for i in str_num:
        sum = sum + int(i)

print(f"The sum of {num} digits is {sum}")