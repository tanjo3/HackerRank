def print_rangoli(size):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    alpha_stack = []
    alpha_string = alphabet[size - 1]
    width = (size << 2) - 3

    for i in range(size):
        print("-".join(alpha_string).center(width, "-"))
        alpha_stack.append(alpha_string)
        alpha_string = alpha_string[0:i + 1] + alphabet[size - i - 2] + alphabet[size - i - 1] + alpha_string[i + 1:]

    alpha_stack.pop()
    while len(alpha_stack) != 0:
        print("-".join(alpha_stack.pop()).center(width, "-"))
