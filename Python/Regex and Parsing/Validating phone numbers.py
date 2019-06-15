# Enter your code here. Read input from STDIN. Print output to STDOUT
import re

n = int(input())
pattern = re.compile(r"^[789]\d{9}$")

for _ in range(n):
    if pattern.match(input()) is None:
        print("NO")
    else:
        print("YES")