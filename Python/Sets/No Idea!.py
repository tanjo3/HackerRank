# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import Counter

_ = input()
A = list(map(int, input().split()))
M = set(map(int, input().split()))
N = set(map(int, input().split()))

counts = Counter(A)

happiness = 0
for m in M.difference(N):
    happiness += counts[m]
for n in N.difference(M):
    happiness -= counts[n]
print(happiness)
