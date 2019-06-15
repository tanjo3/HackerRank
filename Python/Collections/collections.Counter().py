# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import Counter

x = int(input())
inventory = Counter(map(int, input().split()))
n = int(input())

revenue = 0
for _ in range(n):
    size, sale = map(int, input().split())

    if inventory[size] > 0:
        revenue += sale
        inventory[size] -= 1

print(revenue)
