# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import OrderedDict

n = int(input())
items = OrderedDict()

for _ in range(n):
    line = input().split()
    item_name = " ".join(line[:-1])
    price = int(line[-1])

    items[item_name] = items.get(item_name, 0) + price

for item_name, net_price in items.items():
    print(item_name, net_price)
