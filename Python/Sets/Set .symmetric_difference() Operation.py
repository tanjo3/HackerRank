# Enter your code here. Read input from STDIN. Print output to STDOUT
_ = input()
n = set(map(int, input().split()))
_ = input()
b = set(map(int, input().split()))

print(len(n.symmetric_difference(b)))
