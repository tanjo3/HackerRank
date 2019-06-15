import numpy as np

n, m, p = map(int, input().split())
matrix_a = np.array([list(map(int, input().split())) for _ in range(n)])
matrix_b = np.array([list(map(int, input().split())) for _ in range(m)])

print(np.concatenate([matrix_a, matrix_b]))
