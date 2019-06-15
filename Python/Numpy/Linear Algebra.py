import numpy as np
from numpy.linalg import det

n = int(input())
a = np.array([list(map(float, input().split())) for _ in range(n)])

print(np.round(det(a), decimals=2))
