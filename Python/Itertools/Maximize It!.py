# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import product

k, m = map(int, input().split())
input_lists = [map(int, input().split()[1:]) for _ in range(k)]
print(max(sum(map(lambda x: x * x, p)) % m for p in product(*input_lists)))
