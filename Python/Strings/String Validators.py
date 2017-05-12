if __name__ == "__main__":
    s = input()
    checkBits = 0

    for c in s:
        if checkBits == 0x1F:
            break

        if c.isalnum():
            checkBits |= 0x1
        if c.isalpha():
            checkBits |= 0x2
        if c.isdigit():
            checkBits |= 0x4
        if c.islower():
            checkBits |= 0x8
        if c.isupper():
            checkBits |= 0x10

    if (checkBits >> 0) & 1:
        print(True)
    else:
        print(False)

    if (checkBits >> 1) & 1:
        print(True)
    else:
        print(False)

    if (checkBits >> 2) & 1:
        print(True)
    else:
        print(False)

    if (checkBits >> 3) & 1:
        print(True)
    else:
        print(False)

    if (checkBits >> 4) & 1:
        print(True)
    else:
        print(False)
