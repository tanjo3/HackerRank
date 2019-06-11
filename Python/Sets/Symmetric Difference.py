# Enter your code here. Read input from STDIN. Print output to STDOUT
m = input()
M = set(map(int, input().split()))

n = input()
N = set(map(int, input().split()))

for x in sorted(M.symmetric_difference(N)):
    print(x)
