# Create a program to generate the multiplication table for numbers 1 to 5.

for i in range(1,6):
    for j in range(1,11):
        print(f"{i} x {j} = {i*j}")
    print("\n")