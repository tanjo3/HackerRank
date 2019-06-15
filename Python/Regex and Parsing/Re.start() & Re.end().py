# Enter your code here. Read input from STDIN. Print output to STDOUT
import re

string = input()
match = input()
pattern = rf"(?={match})"

if len(re.findall(pattern, string)) == 0:
    print("(-1, -1)")
else:
    for m in re.finditer(pattern, string):
        print(f"({m.start()}, {m.start() + len(match) - 1})")
