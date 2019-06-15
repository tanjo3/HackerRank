# Enter your code here. Read input from STDIN. Print output to STDOUT
import re

n = int(input())
pattern = re.compile(r"^<[a-z][\w\.-]*@[a-z]+\.[a-z]{1,3}>$", re.IGNORECASE)

for _ in range(n):
    input_str = input()
    if pattern.match(input_str.split()[1]) is not None:
        print(input_str)
