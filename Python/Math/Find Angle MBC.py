# Enter your code here. Read input from STDIN. Print output to STDOUT
import math

a = int(input())
b = int(input())

angle = math.degrees(math.atan(a / b))
print(f"{int(round(angle))}°")
