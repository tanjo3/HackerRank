import numpy as np

coeffs = np.array(list(map(float, input().split())))
x = int(input())

print(np.polyval(coeffs, x))
