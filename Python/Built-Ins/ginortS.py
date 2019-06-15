# Enter your code here. Read input from STDIN. Print output to STDOUT
s = input()

lowercase = [c for c in s if c.islower()]
uppercase = [c for c in s if c.isupper()]
odd_digits = [c for c in s if c.isdigit() and int(c) % 2 == 1]
even_digits = [c for c in s if c.isdigit() and int(c) % 2 == 0]

print(*sorted(lowercase), *sorted(uppercase), *sorted(odd_digits), *sorted(even_digits), sep="")
