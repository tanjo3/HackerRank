# Enter your code here. Read input from STDIN. Print output to STDOUT
import re

property_pattern = re.compile(r"[ \t]+[\w-]+:")
color_pattern = re.compile(r"#([\dA-F]{6}|[\dA-F]{3})", re.IGNORECASE)

n = int(input())
for _ in range(n):
    line = input()
    if property_pattern.match(line) is not None:
        for m in color_pattern.finditer(line):
            print(m.group(0))
