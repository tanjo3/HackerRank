import numpy as np

n, m = map(int, input().split())
matrix = np.array([list(map(int, input().split())) for _ in range(n)])

print(matrix.T)
print(matrix.flatten())
