#!/bin/python3

if __name__ == "__main__":
    n, m = map(int, input().split())
    arrs = [list(map(int, input().split())) for _ in range(n)]
    k = int(input())

    for athlete in sorted(arrs, key=lambda x : x[k]):
        print(*athlete)
