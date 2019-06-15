# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import OrderedDict

n = int(input())
counter = OrderedDict()

for _ in range(n):
    word = input()
    counter[word] = counter.get(word, 0) + 1
print(len(counter))
print(*counter.values())
