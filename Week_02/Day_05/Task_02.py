# Create a program to calculate the sum of the first n natural numbers.

sum = 0
n = int(input("Enter Value For n : "))
for i in range(n+1):
    sum = sum + i
print(sum)