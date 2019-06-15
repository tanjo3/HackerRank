#!/bin/python3
import re

n, m = map(int, input().split())
matrix = []
for _ in range(n):
    matrix_item = input()
    matrix.append(matrix_item)

string = ""
for i in range(m):
    string += "".join(row[i] for row in matrix)

print(re.sub(r"(?<=\w)[ !@#$%&]+(?=\w)", " ", string))
