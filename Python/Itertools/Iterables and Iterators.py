# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import combinations
from math import factorial

n = int(input())
arr = input().split()
k = int(input())

n_combs = factorial(n) / factorial(k) / factorial(n - k)
print(sum(1 if "a" in c else 0 for c in combinations(arr, k)) / n_combs)
