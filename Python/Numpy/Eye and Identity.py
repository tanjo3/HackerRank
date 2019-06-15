import numpy as np
np.set_printoptions(formatter={"int": lambda x : f" {x}."})

shape = tuple(map(int, input().split()))
print(np.eye(*shape, dtype=int))
