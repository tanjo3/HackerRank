import numpy as np

n, m = map(int, input().split())
a = np.array([list(map(int, input().split())) for _ in range(n)])

print(a.sum(axis=0).prod())
