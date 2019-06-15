import numpy as np
np.set_printoptions(legacy="1.13")

n, m = map(int, input().split())
a = np.array([list(map(int, input().split())) for _ in range(n)])

print(a.mean(axis=1))
print(a.var(axis=0))
print(a.std())
