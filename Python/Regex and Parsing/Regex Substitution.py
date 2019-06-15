# Enter your code here. Read input from STDIN. Print output to STDOUT
import re

and_pattern = re.compile(r" && ")
or_pattern = re.compile(r" \|\| ")

n = int(input())
for _ in range(n):
    old_line = ""
    new_line = input()

    while old_line != new_line:
        old_line = new_line
        new_line = and_pattern.sub(" and ", old_line)

    old_line = ""
    while old_line != new_line:
        old_line = new_line
        new_line = or_pattern.sub(" or ", old_line)
    print(new_line)
