# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import defaultdict

n, m = map(int, input().split())
d = defaultdict(list)

for i in range(n):
    d[input()].append(i + 1)

for i in range(m):
    indices = d[input()]

    if len(indices) == 0:
        print(-1)
    else:
        print(*indices)
