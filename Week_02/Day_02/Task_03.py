# Write a program to calculate the area of a circle, given its radius as input.
import math

radius = float(input("Enter The Radius For Circle : "))
area = math.pi * (radius*radius)

print(f"The Area Of Circle With {radius} Radius Is {area}sq")
