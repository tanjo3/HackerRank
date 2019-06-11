# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import permutations

S, k = input().split()
print(*sorted("".join(p) for p in permutations(S, int(k))), sep="\n")
