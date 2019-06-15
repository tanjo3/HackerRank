# Enter your code here. Read input from STDIN. Print output to STDOUT
import re
m = re.findall(r"(?=[b-df-hj-np-tv-z]([aeiou]{2,})[b-df-hj-np-tv-z])", input(), re.IGNORECASE)

if len(m) == 0:
    print(-1)
else:
    print(*m, sep="\n")
