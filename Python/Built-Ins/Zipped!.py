# Enter your code here. Read input from STDIN. Print output to STDOUT
n, x = map(int, input().split())

for student in zip(*[map(float, input().split()) for _ in range(x)]):
    print(sum(student) / x)
