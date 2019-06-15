#!/bin/python3
from collections import Counter

if __name__ == "__main__":
    letter_counts = Counter(input())
    sorted_counts = sorted(
        letter_counts.items(),
        key=lambda x : (-x[1], x[0])
    )

    for letter, count in sorted_counts[:3]:
        print(letter, count)
