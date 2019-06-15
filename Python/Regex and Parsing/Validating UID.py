# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import Counter
import re

valid_pattern = re.compile(r"(?=^[A-Za-z0-9]{10}$)(?=(.*[A-Z].*){2,})(?=(.*\d.*){3,})")

n = int(input())
for _ in range(n):
    uid = input()
    if valid_pattern.match(uid) is not None:
        if Counter(uid).most_common(1)[0][1] == 1:
            print("Valid")
        else:
            print("Invalid")
    else:
        print("Invalid")
