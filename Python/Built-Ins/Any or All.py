# Enter your code here. Read input from STDIN. Print output to STDOUT
_ = input()
integers = input().split()
print(
    all(map(lambda x : int(x) > 0, integers)) and
    any(map(lambda x : x == x[::-1], integers))
)
