# Enter your code here. Read input from STDIN. Print output to STDOUT
_ = input()
A = set(map(int, input().split()))

N = int(input())
for _ in range(N):
    op = input().split()
    otherSet = set(map(int, input().split()))

    if op[0] == "update":
        A |= otherSet
    elif op[0] == "intersection_update":
        A &= otherSet
    if op[0] == "difference_update":
        A -= otherSet
    elif op[0] == "symmetric_difference_update":
        A ^= otherSet

print(sum(A))
