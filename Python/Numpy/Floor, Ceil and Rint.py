import numpy as np

np.set_printoptions(sign=" ")

a = np.array(list(map(float, input().split())))

print(np.floor(a))
print(np.ceil(a))
print(np.rint(a))
