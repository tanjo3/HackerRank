# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import namedtuple

n = int(input())
Grade = namedtuple("Grade", input())
print(sum(int(Grade(*input().split()).MARKS) for _ in range(n)) / n)
