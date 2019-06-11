def minion_game(string):
    # your code goes here
    kevin, stuart = (0, 0)
    n = len(string)

    for i, x in enumerate(string):
        if x in ["A", "E", "I", "O", "U"]:
            kevin += n - i
        else:
            stuart += n - i

    if kevin > stuart:
        print("Kevin", kevin)
    elif kevin < stuart:
        print("Stuart", stuart)
    else:
        print("Draw")
