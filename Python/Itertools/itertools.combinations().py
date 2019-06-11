# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import combinations

S, k = input().split()

for l in range(1, 1 + int(k)):
    print(*["".join(c) for c in combinations(sorted(S), l)], sep="\n")
