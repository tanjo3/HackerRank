# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import deque

t = int(input())
for _ in range(t):
    _ = int(input())
    sideLengths = deque(map(int, input().split()))
    top_cube = 1e10

    while len(sideLengths) != 0:
        if sideLengths[0] >= sideLengths[-1] and top_cube >= sideLengths[0]:
            top_cube = sideLengths.popleft()
        elif sideLengths[0] < sideLengths[-1] and top_cube >= sideLengths[-1]:
            top_cube = sideLengths.pop()
        else:
            break

    if len(sideLengths) == 0:
        print("Yes")
    else:
        print("No")
