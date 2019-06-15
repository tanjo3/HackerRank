# Enter your code here. Read input from STDIN. Print output to STDOUT
import re

valid_pattern = re.compile(r"^[456](\d){3}-?(\d){4}-?(\d){4}-?(\d){4}$")
repeat_pattern = re.compile(r"(\d)(\1){3}")

n = int(input())
for _ in range(n):
    num = input()
    if valid_pattern.match(num) is not None:
        num = num.replace("-", "")
        if repeat_pattern.search(num) is None:
            print("Valid")
        else:
            print("Invalid")
    else:
        print("Invalid")
